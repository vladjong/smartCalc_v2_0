/********************************************************************************
** Form generated from reading UI file 'creditView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITVIEW_H
#define UI_CREDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditView
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *termLineCredit;
    QLineEdit *rateLineCredit;
    QRadioButton *annuityRadioButton;
    QLineEdit *lineEdit_1;
    QLineEdit *amountLineCredit;
    QComboBox *dateComboBox;
    QRadioButton *differentiatedRadioButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *resultCredit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *monthlyPaymentLineCredit;
    QLineEdit *lineEdit_6;
    QLineEdit *overpaymentLineCredit;
    QLineEdit *totalLineCredit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *CreditView)
    {
        if (CreditView->objectName().isEmpty())
            CreditView->setObjectName(QString::fromUtf8("CreditView"));
        CreditView->resize(605, 401);
        CreditView->setMinimumSize(QSize(605, 401));
        CreditView->setMaximumSize(QSize(605, 401));
        QFont font;
        CreditView->setFont(font);
        CreditView->setStyleSheet(QString::fromUtf8("background-color:  #ebeae6;"));
        CreditView->setSizeGripEnabled(false);
        CreditView->setModal(false);
        gridLayoutWidget = new QWidget(CreditView);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(19, 19, 568, 211));
        gridLayoutWidget->setFont(font);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        termLineCredit = new QLineEdit(gridLayoutWidget);
        termLineCredit->setObjectName(QString::fromUtf8("termLineCredit"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("JetBrains Mono")});
        termLineCredit->setFont(font1);
        termLineCredit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        termLineCredit->setMaxLength(3);

        gridLayout->addWidget(termLineCredit, 1, 1, 1, 1);

        rateLineCredit = new QLineEdit(gridLayoutWidget);
        rateLineCredit->setObjectName(QString::fromUtf8("rateLineCredit"));
        rateLineCredit->setFont(font1);
        rateLineCredit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        rateLineCredit->setMaxLength(4);

        gridLayout->addWidget(rateLineCredit, 2, 1, 1, 1);

        annuityRadioButton = new QRadioButton(gridLayoutWidget);
        annuityRadioButton->setObjectName(QString::fromUtf8("annuityRadioButton"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font2.setPointSize(14);
        annuityRadioButton->setFont(font2);
        annuityRadioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	padding: 0.5em 0.5em;\n"
"	background: transparent;\n"
"	color: #ff513c;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ff513c;\n"
"    border: 2px solid #ff513c\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    border: 2px solid #ff513c;\n"
"}"));
        annuityRadioButton->setChecked(true);

        gridLayout->addWidget(annuityRadioButton, 3, 1, 1, 1);

        lineEdit_1 = new QLineEdit(gridLayoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setFont(font2);
        lineEdit_1->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        lineEdit_1->setReadOnly(true);

        gridLayout->addWidget(lineEdit_1, 0, 0, 1, 1);

        amountLineCredit = new QLineEdit(gridLayoutWidget);
        amountLineCredit->setObjectName(QString::fromUtf8("amountLineCredit"));
        amountLineCredit->setFont(font1);
        amountLineCredit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        amountLineCredit->setMaxLength(12);

        gridLayout->addWidget(amountLineCredit, 0, 1, 1, 1);

        dateComboBox = new QComboBox(gridLayoutWidget);
        dateComboBox->addItem(QString());
        dateComboBox->addItem(QString());
        dateComboBox->setObjectName(QString::fromUtf8("dateComboBox"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font3.setPointSize(13);
        dateComboBox->setFont(font3);
        dateComboBox->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"width: 70px;\n"
"color: #3c3b3a;"));

        gridLayout->addWidget(dateComboBox, 1, 3, 1, 1);

        differentiatedRadioButton = new QRadioButton(gridLayoutWidget);
        differentiatedRadioButton->setObjectName(QString::fromUtf8("differentiatedRadioButton"));
        differentiatedRadioButton->setFont(font2);
        differentiatedRadioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	padding: 0.5em 0.5em;\n"
"	background: transparent;\n"
"	color: #ff513c;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ff513c;\n"
"    border: 2px solid #ff513c\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    border: 2px solid #ff513c;\n"
"}"));

        gridLayout->addWidget(differentiatedRadioButton, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        lineEdit_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font2);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        lineEdit_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_3, 2, 0, 1, 1);

        resultCredit = new QPushButton(gridLayoutWidget);
        resultCredit->setObjectName(QString::fromUtf8("resultCredit"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font4.setPointSize(16);
        font4.setBold(false);
        resultCredit->setFont(font4);
        resultCredit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: #ff513c;\n"
"        border-radius:0.4em;\n"
"        padding: 0.7em 1.7em;\n"
"        border: none;\n"
"        color: #ebeae6;\n"
"        text-transform: uppercase;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        color: rgba(41, 47, 46, 231);\n"
"}"));

        gridLayout->addWidget(resultCredit, 5, 0, 1, 4);

        gridLayoutWidget_2 = new QWidget(CreditView);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 230, 471, 141));
        gridLayoutWidget_2->setFont(font1);
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        monthlyPaymentLineCredit = new QLineEdit(gridLayoutWidget_2);
        monthlyPaymentLineCredit->setObjectName(QString::fromUtf8("monthlyPaymentLineCredit"));
        monthlyPaymentLineCredit->setFont(font1);
        monthlyPaymentLineCredit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        monthlyPaymentLineCredit->setMaxLength(30);
        monthlyPaymentLineCredit->setReadOnly(true);

        gridLayout_2->addWidget(monthlyPaymentLineCredit, 0, 1, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setFont(font2);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        lineEdit_6->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_6, 2, 0, 1, 1);

        overpaymentLineCredit = new QLineEdit(gridLayoutWidget_2);
        overpaymentLineCredit->setObjectName(QString::fromUtf8("overpaymentLineCredit"));
        overpaymentLineCredit->setFont(font1);
        overpaymentLineCredit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        overpaymentLineCredit->setMaxLength(12);
        overpaymentLineCredit->setReadOnly(true);

        gridLayout_2->addWidget(overpaymentLineCredit, 1, 1, 1, 1);

        totalLineCredit = new QLineEdit(gridLayoutWidget_2);
        totalLineCredit->setObjectName(QString::fromUtf8("totalLineCredit"));
        totalLineCredit->setFont(font1);
        totalLineCredit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        totalLineCredit->setMaxLength(12);
        totalLineCredit->setReadOnly(true);

        gridLayout_2->addWidget(totalLineCredit, 2, 1, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font2);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        lineEdit_5->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_5, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font2);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"width: 240 px;\n"
"color: #3c3b3a;"));
        lineEdit_4->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_4, 0, 0, 1, 1);


        retranslateUi(CreditView);

        QMetaObject::connectSlotsByName(CreditView);
    } // setupUi

    void retranslateUi(QDialog *CreditView)
    {
        CreditView->setWindowTitle(QCoreApplication::translate("CreditView", "Dialog", nullptr));
        termLineCredit->setText(QCoreApplication::translate("CreditView", "23", nullptr));
        rateLineCredit->setText(QCoreApplication::translate("CreditView", "12.1", nullptr));
        annuityRadioButton->setText(QCoreApplication::translate("CreditView", "Annuity payment", nullptr));
        lineEdit_1->setText(QCoreApplication::translate("CreditView", "Amount of credit, RUB:", nullptr));
        amountLineCredit->setText(QCoreApplication::translate("CreditView", "1000000", nullptr));
        dateComboBox->setItemText(0, QCoreApplication::translate("CreditView", "month", nullptr));
        dateComboBox->setItemText(1, QCoreApplication::translate("CreditView", "year", nullptr));

        differentiatedRadioButton->setText(QCoreApplication::translate("CreditView", "Differentiated payment", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("CreditView", "Credit term:", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("CreditView", "Interest rate, %:", nullptr));
        resultCredit->setText(QCoreApplication::translate("CreditView", "Result", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("CreditView", "Total payment, RUB", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("CreditView", "Overpayment on credit, RUB:", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("CreditView", "Monthly payment amount, RUB:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditView: public Ui_CreditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITVIEW_H
