#include "smartCalcController.h"

using s21::SmartCalcController;

double SmartCalcController::getResult(const char* givenStr) { return _model->getResult(givenStr); }

double SmartCalcController::getResult(const char* givenStr, double number) {
    return _model->getResult(givenStr, number);
}

std::pair<QVector<double>, QVector<double>> SmartCalcController::getPlotting(const char* givenStr,
                                                                             double Xmin, double Xmax) {
    auto pair = _model->getPlotting(givenStr, Xmin, Xmax);
    QVector<double> qVectorOne = QVector<double>(pair.first.begin(), pair.first.end());
    QVector<double> qVectorTwo = QVector<double>(pair.second.begin(), pair.second.end());
    return std::make_pair(qVectorOne, qVectorTwo);
}

void SmartCalcController::calculateCredit() { _creditModel->calculateCredit(); }

double SmartCalcController::getMonthlyPayment() { return _creditModel->getMonthlyPayment(); }

double SmartCalcController::getOverpayment() { return _creditModel->getOverpayment(); }

double SmartCalcController::getTotalPayment() { return _creditModel->getTotalPayment(); }

double SmartCalcController::getMinMonthlyPayment() { return _creditModel->getMinMonthlyPayment(); }

double SmartCalcController::getMaxMonthlyPayment() { return _creditModel->getMaxMonthlyPayment(); }

bool SmartCalcController::checkValueCredit() { return _creditModel->checkValue(); }

void SmartCalcController::setSumCredit(double sumCredit) { _creditModel->setSumCredit(sumCredit); }
void SmartCalcController::setTermCredit(double termCredit) { _creditModel->setTermCredit(termCredit); }
void SmartCalcController::setPercentCredit(double percentCredit) {
    _creditModel->setPercentCredit(percentCredit);
}
void SmartCalcController::setDate(TypeDate setDate) { _creditModel->setDate(setDate); }
void SmartCalcController::setTypeCredit(TypeCredit typeCredit) { _creditModel->setTypeCredit(typeCredit); }
