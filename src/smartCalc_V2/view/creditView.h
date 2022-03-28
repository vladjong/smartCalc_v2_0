#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets/QMessageBox>

#include "../controller/smartCalcController.h"

namespace Ui {
class CreditView;
}

namespace s21 {
class CreditView : public QDialog {
    Q_OBJECT

 public:
    explicit CreditView(s21::SmartCalcController *controller, QWidget *parent = nullptr);
    explicit CreditView(QWidget *parent = nullptr);
    ~CreditView();

    s21::SmartCalcController *_controller;

 private:
    Ui::CreditView *ui;

    void fillDataCredit();
    bool checkValue();
    void fillCreditResult();

 private slots:
    void resultPressed();
};

}  // namespace s21
