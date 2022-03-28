/********************************************************************************
** Form generated from reading UI file 'plotView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTVIEW_H
#define UI_PLOTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_plotView {
 public:
    QCustomPlot *widget;

    void setupUi(QDialog *plotView) {
        if (plotView->objectName().isEmpty()) plotView->setObjectName(QString::fromUtf8("plotView"));
        plotView->resize(1023, 353);
        plotView->setMinimumSize(QSize(1023, 353));
        plotView->setMaximumSize(QSize(1023, 353));
        plotView->setStyleSheet(QString::fromUtf8("background-color:  #ebeae6;"));
        widget = new QCustomPlot(plotView);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 991, 331));

        retranslateUi(plotView);

        QMetaObject::connectSlotsByName(plotView);
    }  // setupUi

    void retranslateUi(QDialog *plotView) {
        plotView->setWindowTitle(QCoreApplication::translate("plotView", "Dialog", nullptr));
    }  // retranslateUi
};

namespace Ui {
class plotView : public Ui_plotView {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_PLOTVIEW_H
