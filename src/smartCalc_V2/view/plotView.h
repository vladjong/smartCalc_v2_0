#pragma once

#include <QtCore/QVector>
#include <QtWidgets/QDialog>

#include "smartCalcView.h"

namespace Ui {
class plotView;
}

namespace s21 {
class plotView : public QDialog {
    Q_OBJECT

 public:
    explicit plotView(std::pair<QVector<double>, QVector<double>> planeAndDomain, QVector<double> xOrY,
                      QWidget *parent = nullptr);
    ~plotView();

 private:
    Ui::plotView *ui;
    SmartCalcController *_controller;
    std::pair<QVector<double>, QVector<double>> _planeAndDomain;
    QVector<double> _xOrY;

    void drawPlot();
};

}  // namespace s21
