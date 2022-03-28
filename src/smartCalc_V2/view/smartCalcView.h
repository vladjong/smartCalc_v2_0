#pragma once

#include <QtWidgets/QMainWindow>

#include "../controller/smartCalcController.h"
#include "creditView.h"
#include "plotOrEquationview.h"
#include "plotView.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class SmartCalcView;
}
QT_END_NAMESPACE

namespace s21 {
class SmartCalcView : public QMainWindow {
    Q_OBJECT

 public:
    explicit SmartCalcView(s21::SmartCalcController *controller, QWidget *parent = nullptr);
    ~SmartCalcView();

 private:
    Ui::SmartCalcView *ui;
    s21::SmartCalcController *_controller;
    CreditView *_creditView;

    void calculatePlotOrEquation();
    void calculateWithException();

 private slots:
    void numberPressed();
    void clearPressed();
    void calculatePressed();
    void on_actionCreditCalculate_triggered();
    void on_actionCalculate_triggered();
};

}  // namespace s21
