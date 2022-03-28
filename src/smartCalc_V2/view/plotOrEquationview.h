#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets/QMessageBox>

#include "plotView.h"
#include "smartCalcView.h"

namespace Ui {
class plotOrEquationView;
}

namespace s21 {
class plotOrEquationView : public QDialog {
    Q_OBJECT

 public:
    explicit plotOrEquationView(SmartCalcController *controller, QString string, QWidget *parent = nullptr);
    ~plotOrEquationView();

    QString getString();

 private:
    Ui::plotOrEquationView *ui;
    SmartCalcController *_controller;
    QString _string;
    QString _xValue;
    QString _resultString;
    QVector<double> _xOrY;
    bool _check = true;

    void calculateEquation();
    std::pair<QVector<double>, QVector<double>> calculatePlot();
    bool checkValue(QString value);

 private slots:
    void plotOrEquataionPressed();
};

}  // namespace s21
