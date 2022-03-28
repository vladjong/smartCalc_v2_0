#include "creditModel.h"

using s21::CreditModel;

double CreditModel::getMonthlyPayment() { return _monthlyPayment; }

double CreditModel::getOverpayment() { return _overpayment; }

double CreditModel::getTotalPayment() { return _totalPayment; }

double CreditModel::getMinMonthlyPayment() { return _minMonthlyPayment; }

double CreditModel::getMaxMonthlyPayment() { return _maxMonthlyPayment; }

void CreditModel::setSumCredit(double sumCredit) { _sumCredit = sumCredit; }

void CreditModel::setTermCredit(double termCredit) { _termCredit = termCredit; }

void CreditModel::setPercentCredit(double percentCredit) { _percentCredit = percentCredit; }

void CreditModel::setDate(TypeDate typeDate) { _typeDate = typeDate; }

void CreditModel::setTypeCredit(TypeCredit typeCredit) { _typeCredit = typeCredit; }

bool CreditModel::checkValue() {
    if (_typeDate == YEAR) {
        _termCredit *= 12;
    }
    if (_termCredit > 660 || _termCredit <= 0) {
        return false;
    }
    if (_percentCredit <= 0 || _percentCredit > 150) {
        return false;
    }
    if (_sumCredit <= 0) {
        return false;
    }
    return true;
}

void CreditModel::calculateCredit() {
    cleanData();
    if (_typeCredit == ANNUITY) {
        calculateCreditAnnuity();
    } else {
        calculateCreditDifferentiated();
    }
}

void CreditModel::calculateCreditAnnuity() {
    double monthlyPercentRate = _percentCredit / (12.0 * 100.0);
    _monthlyPayment =
        round(_sumCredit * monthlyPercentRate / (1 - pow(1 + monthlyPercentRate, -_termCredit)) * 100) / 100;
    _totalPayment = round(_monthlyPayment * _termCredit * 100) / 100;
    _overpayment = round((_totalPayment - _sumCredit) * 100) / 100;
}

void CreditModel::calculateCreditDifferentiated() {
    double totalDebt = _sumCredit / _termCredit;
    double monthlyPercentRate = _percentCredit / (12.0 * 100.0);
    for (int numberPayment = 0; numberPayment < _termCredit; numberPayment++) {
        _monthlyPayment = totalDebt + (_sumCredit - totalDebt * numberPayment) * monthlyPercentRate;
        _totalPayment += _monthlyPayment;
        if (numberPayment == 0) {
            _maxMonthlyPayment = round(_monthlyPayment * 100) / 100;
        }
        if (numberPayment == _termCredit - 1) {
            _minMonthlyPayment = round(_monthlyPayment * 100) / 100;
        }
    }
    _totalPayment = round(_totalPayment * 100) / 100;
    _overpayment = round((_totalPayment - _sumCredit) * 100) / 100;
}

void CreditModel::cleanData() {
    _monthlyPayment = 0;
    _overpayment = 0;
    _totalPayment = 0;
    _maxMonthlyPayment = 0;
    _minMonthlyPayment = 0;
}
