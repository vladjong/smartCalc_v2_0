#pragma once

#include <cmath>
#include <iostream>

enum TypeCredit { ANNUITY, DIFFERENTIATED };
enum TypeDate { YEAR, MONTH };

namespace s21 {
class CreditModel {
 public:
    CreditModel() {}

    void calculateCredit();
    double getMonthlyPayment();
    double getOverpayment();
    double getTotalPayment();
    double getMaxMonthlyPayment();
    double getMinMonthlyPayment();
    void setSumCredit(double);
    void setPercentCredit(double);
    void setTermCredit(double);
    void setDate(TypeDate);
    void setTypeCredit(TypeCredit);
    bool checkValue();

 private:
    double _sumCredit = 0;
    double _percentCredit = 0;
    double _termCredit = 0;
    double _monthlyPayment = 0;
    double _overpayment = 0;
    double _totalPayment = 0;
    double _maxMonthlyPayment = 0;
    double _minMonthlyPayment = 0;
    TypeCredit _typeCredit = ANNUITY;
    TypeDate _typeDate = MONTH;

    void calculateCreditAnnuity();
    void calculateCreditDifferentiated();
    void cleanData();
};

}  // namespace s21
