#include "smartCalcModel.h"

using s21::SmartCalcModel;

double SmartCalcModel::getResult(const char *givenStr) {
    convertToRPN(givenStr);
    return calculateRPN(0);
}

double SmartCalcModel::getResult(const char *givenStr, double number) {
    convertToRPN(givenStr);
    return calculateRPN(number);
}

std::pair<std::vector<double>, std::vector<double>> SmartCalcModel::getPlotting(const char *givenStr,
                                                                                double Xmin, double Xmax) {
    std::vector<double> pointValue;
    std::vector<double> domainValue;
    pointValue.reserve(2000);
    domainValue.reserve(2000);
    double step = (Xmax - Xmin) / 1e4;
    for (; Xmin <= Xmax; Xmin += step) {
        convertToRPN(givenStr);
        pointValue.push_back(calculateRPN(Xmin));
        domainValue.push_back(Xmin);
    }
    return std::make_pair(pointValue, domainValue);
}

void SmartCalcModel::convertToRPN(const char *givenStr) {
    if (strlen(givenStr) == 0) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    algorithmConvertToRPN(givenStr);
    transferDeque();
    if (vectorRPN.front().second == OPERATION) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
}

void SmartCalcModel::checkTwiceNumber() {
    if (_checkDoubleNumber) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    _checkDoubleNumber = true;
}

void SmartCalcModel::algorithmConvertToRPN(const char *givenStr) {
    bool type = true;
    while (*givenStr) {
        Operation checkTypeSymbol = checkSymbolForType(&givenStr, type);
        if (checkTypeSymbol != NO_OPERATION) {
            shiftString(&givenStr, checkTypeSymbol);
        }
        type = checkUnaryOrBinaryOperation(checkTypeSymbol);
        if (checkTypeSymbol == NO_OPERATION) {
            double number = checkNumber(&givenStr);
            vectorRPN.push_back(std::make_pair(number, NUMBER));
            checkTwiceNumber();
        } else if (checkTypeSymbol == X) {
            vectorRPN.push_back(std::make_pair(X, EQUATION));
            checkTwiceNumber();
        } else if (checkTypeSymbol >= PLUS && checkTypeSymbol <= LOG) {
            addOperationInRPN(checkTypeSymbol);
            _checkDoubleNumber = false;
        } else if (checkTypeSymbol == OPEN_BRACKET) {
            dequeRPN.push_back(checkTypeSymbol);
            _checkDoubleNumber = false;
        } else if (checkTypeSymbol == CLOSE_BRACKET) {
            searchOpenBracket();
            _checkDoubleNumber = false;
        }
    }
    _checkDoubleNumber = false;
}

Operation SmartCalcModel::checkSymbolForType(const char **token, bool type) {
    Operation operation = NO_OPERATION;
    if (**token == ' ') {
        *token += 1;
    }
    if (**token == '+' && type == false) {
        return PLUS;
    } else if (**token == '-' && type == false) {
        return MINUS;
    } else if (**token == '+') {
        return UPLUS;
    } else if (**token == '-') {
        return UMINUS;
    } else if (**token == '*') {
        return MULT;
    } else if (strncmp(*token, "÷", 2) == 0) {
        return DIV;
    } else if (**token == '^') {
        return POW;
    } else if (**token == '(') {
        return OPEN_BRACKET;
    } else if (**token == ')') {
        return CLOSE_BRACKET;
    } else if (**token == 'x') {
        return X;
    } else if (strncmp(*token, "mod", 3) == 0) {
        return MOD;
    } else if (strncmp(*token, "√", 3) == 0) {
        return SQRT;
    } else if (strncmp(*token, "cos", 3) == 0) {
        return COS;
    } else if (strncmp(*token, "sin", 3) == 0) {
        return SIN;
    } else if (strncmp(*token, "tan", 3) == 0) {
        return TAN;
    } else if (strncmp(*token, "acos", 4) == 0) {
        return ACOS;
    } else if (strncmp(*token, "asin", 4) == 0) {
        return ASIN;
    } else if (strncmp(*token, "atan", 4) == 0) {
        return ATAN;
    } else if (strncmp(*token, "ln", 2) == 0) {
        return LN;
    } else if (strncmp(*token, "log", 3) == 0) {
        return LOG;
    }
    return operation;
}

void SmartCalcModel::shiftString(const char **token, Operation operation) {
    int shift = 1;
    if (operation == DIV || operation == LN) {
        shift += 1;
    } else if (operation == MOD || operation == SQRT || operation == COS || operation == SIN ||
               operation == TAN || operation == LOG) {
        shift += 2;
    } else if (operation == ACOS || operation == ASIN || operation == ATAN) {
        shift += 3;
    }
    *token += shift;
}

double SmartCalcModel::checkNumber(const char **token) {
    if (strncmp(*token, "π", 2) == 0) {
        *token += 2;
        return M_PI;
    } else if (**token == 'e') {
        *token += 1;
        return M_E;
    }
    char *ptrEnd = nullptr;
    double number = strtod(*token, &ptrEnd);
    if (*ptrEnd == **token) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    *token = ptrEnd;
    return number;
}

void SmartCalcModel::addOperationInRPN(Operation operation) {
    Priority priority = getPriority(operation);
    while (dequeRPN.size() && priority <= getPriority(dequeRPN.back())) {
        vectorRPN.push_back(std::make_pair((double)dequeRPN.back(), OPERATION));
        dequeRPN.pop_back();
    }
    dequeRPN.push_back(operation);
}

Priority SmartCalcModel::getPriority(Operation operation) {
    if (operation == PLUS || operation == MINUS) {
        return LOW;
    } else if (operation >= MULT && operation <= MOD) {
        return MIDLE_LOW;
    } else if (operation == POW) {
        return MIDLE;
    } else if (operation == UPLUS || operation == UMINUS) {
        return MIDLE_UPPER;
    } else if (operation >= COS && operation <= LOG) {
        return HIGH;
    }
    return OTHER;
}

void SmartCalcModel::searchOpenBracket() {
    bool check = false;
    while (dequeRPN.size()) {
        if (dequeRPN.back() == OPEN_BRACKET) {
            check = true;
            break;
        }
        vectorRPN.push_back(std::make_pair((double)dequeRPN.back(), OPERATION));
        dequeRPN.pop_back();
    }
    if (check == false) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    dequeRPN.pop_back();
}

bool SmartCalcModel::checkUnaryOrBinaryOperation(Operation operation) {
    if (operation == NO_OPERATION || operation == X || operation == CLOSE_BRACKET) {
        return false;
    } else {
        return true;
    }
}

void SmartCalcModel::transferDeque() {
    if (dequeRPN.size() == 0 && vectorRPN.size() == 0) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    while (dequeRPN.size()) {
        if (dequeRPN.back() == OPEN_BRACKET) {
            clearContainers();
            throw std::invalid_argument("ERROR");
        }
        vectorRPN.push_back(std::make_pair((double)dequeRPN.back(), OPERATION));
        dequeRPN.pop_back();
    }
}

double SmartCalcModel::calculateRPN(double number) {
    vector vectorTemp = changeXToValue(number);
    for (auto &element : vectorTemp) {
        if (element.second == NUMBER) {
            dequeCalculate.push_back(element.first);
        } else if (element.first >= PLUS && element.first <= POW) {
            calculateBinaryOperation(element);
        } else if (element.first >= UPLUS && element.first <= LOG) {
            calculateUnaryOperation(element);
        }
    }
    double result = dequeCalculate.front();
    dequeCalculate.pop_front();
    clearContainers();
    return result;
}

typename SmartCalcModel::vector SmartCalcModel::changeXToValue(double number) {
    vector vectorTemp(vectorRPN);
    for (auto &element : vectorTemp) {
        if (element.first == X && element.second == EQUATION) {
            element.first = number;
            element.second = NUMBER;
        }
    }
    return vectorTemp;
}

void SmartCalcModel::calculateBinaryOperation(std::pair<double, Type> &element) {
    if (dequeCalculate.size() < 2) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    double numberOne = dequeCalculate.back();
    dequeCalculate.pop_back();
    double numberTwo = dequeCalculate.back();
    dequeCalculate.pop_back();
    if (element.first == PLUS) {
        dequeCalculate.push_back(numberTwo + numberOne);
    } else if (element.first == MINUS) {
        dequeCalculate.push_back(numberTwo - numberOne);
    } else if (element.first == MULT) {
        dequeCalculate.push_back(numberTwo * numberOne);
    } else if (element.first == DIV) {
        dequeCalculate.push_back(numberTwo / numberOne);
    } else if (element.first == MOD) {
        dequeCalculate.push_back(fmod(numberTwo, numberOne));
    } else if (element.first == POW) {
        dequeCalculate.push_back(pow(numberTwo, numberOne));
    }
}

void SmartCalcModel::calculateUnaryOperation(std::pair<double, Type> &element) {
    if (dequeCalculate.size() < 1) {
        clearContainers();
        throw std::invalid_argument("ERROR");
    }
    double number = dequeCalculate.back();
    dequeCalculate.pop_back();
    if (element.first == UPLUS) {
        dequeCalculate.push_back(number);
    } else if (element.first == UMINUS) {
        dequeCalculate.push_back(-1 * number);
    } else if (element.first == COS) {
        dequeCalculate.push_back(cos(number));
    } else if (element.first == SIN) {
        dequeCalculate.push_back(sin(number));
    } else if (element.first == TAN) {
        if (tan(number) >= 0x7ff00000 || tan(number) < -0x7ff00000) {
            dequeCalculate.push_back(NAN);
        }
        dequeCalculate.push_back(tan(number));
    } else if (element.first == ATAN) {
        dequeCalculate.push_back(atan(number));
    } else if (element.first == ACOS) {
        dequeCalculate.push_back(acos(number));
    } else if (element.first == ASIN) {
        dequeCalculate.push_back(asin(number));
    } else if (element.first == SQRT) {
        dequeCalculate.push_back(sqrt(number));
    } else if (element.first == LN) {
        dequeCalculate.push_back(log(number));
    } else if (element.first == LOG) {
        dequeCalculate.push_back(log10(number));
    }
}

void SmartCalcModel::clearContainers() {
    dequeCalculate.clear();
    dequeRPN.clear();
    vectorRPN.clear();
    _checkDoubleNumber = false;
}
