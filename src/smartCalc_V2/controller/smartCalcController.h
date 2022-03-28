#pragma once

#include <QtCore/QVector>

#include "../model/creditModel.h"
#include "../model/smartCalcModel.h"

namespace s21 {
class SmartCalcController {
 private:
    s21::SmartCalcModel *_model;
    CreditModel *_creditModel;

 public:
    SmartCalcController(s21::SmartCalcModel *model, CreditModel *creditModel)
        : _model(model), _creditModel(creditModel) {}
    double getResult(const char *);
    double getResult(const char *, double);
    std::pair<QVector<double>, QVector<double>> getPlotting(const char *, double, double);

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
    bool checkValueCredit();
};

}  // namespace s21
