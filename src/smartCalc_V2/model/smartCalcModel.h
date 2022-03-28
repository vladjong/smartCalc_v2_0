#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <vector>

enum Type { NUMBER, OPERATION, EQUATION };

enum Operation {
    NO_OPERATION,
    PLUS,
    MINUS,
    MULT,
    DIV,
    MOD,
    POW,
    UPLUS,
    UMINUS,
    COS,
    SIN,
    TAN,
    ATAN,
    ACOS,
    ASIN,
    SQRT,
    LN,
    LOG,
    OPEN_BRACKET = -1,
    CLOSE_BRACKET = -2,
    X = -3
};

enum Priority { OTHER, LOW, MIDLE_LOW, MIDLE, MIDLE_UPPER, HIGH };

namespace s21 {
class SmartCalcModel {
 public:
    using vector = std::vector<std::pair<double, Type>>;
    using deque = std::deque<Operation>;
    using dequeResult = std::deque<double>;

 private:
    deque dequeRPN;
    vector vectorRPN;
    dequeResult dequeCalculate;
    bool _checkDoubleNumber = false;

    void convertToRPN(const char *);
    void algorithmConvertToRPN(const char *);
    Operation checkSymbolForType(const char **, bool);
    void shiftString(const char **, Operation);
    double checkNumber(const char **);
    void addOperationInRPN(Operation);
    Priority getPriority(Operation);
    void searchOpenBracket();
    bool checkUnaryOrBinaryOperation(Operation);
    void transferDeque();
    double calculateRPN(double);
    void calculateBinaryOperation(std::pair<double, Type> &);
    void calculateUnaryOperation(std::pair<double, Type> &);
    vector changeXToValue(double);
    void clearContainers();
    void checkTwiceNumber();

 public:
    SmartCalcModel() {}
    double getResult(const char *);
    double getResult(const char *, double);
    std::pair<std::vector<double>, std::vector<double>> getPlotting(const char *, double, double);
};

}  // namespace s21
