/********************************************************************************
** Form generated from reading UI file 'plotOrEquationview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTOREQUATIONVIEW_H
#define UI_PLOTOREQUATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plotOrEquationView
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *equationXValueLine;
    QLineEdit *equationXLine;
    QLineEdit *plotXmaxLine;
    QLineEdit *plotXminValueLine;
    QLineEdit *plotYmaxValueLine;
    QLineEdit *plotYminValueLine;
    QLineEdit *plotYminLine;
    QLineEdit *plotXmaxValueLine;
    QLineEdit *plotXminLine;
    QLineEdit *plotYmaxLine;
    QRadioButton *equationRadioButton;
    QRadioButton *plotRadioButton;
    QPushButton *resultPlotOrEquaButton;

    void setupUi(QDialog *plotOrEquationView)
    {
        if (plotOrEquationView->objectName().isEmpty())
            plotOrEquationView->setObjectName(QString::fromUtf8("plotOrEquationView"));
        plotOrEquationView->resize(541, 230);
        plotOrEquationView->setMinimumSize(QSize(541, 230));
        plotOrEquationView->setMaximumSize(QSize(541, 230));
        plotOrEquationView->setStyleSheet(QString::fromUtf8("background-color:  #ebeae6;"));
        gridLayoutWidget = new QWidget(plotOrEquationView);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 501, 161));
        QFont font;
        font.setPointSize(14);
        gridLayoutWidget->setFont(font);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        equationXValueLine = new QLineEdit(gridLayoutWidget);
        equationXValueLine->setObjectName(QString::fromUtf8("equationXValueLine"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font1.setBold(false);
        equationXValueLine->setFont(font1);
        equationXValueLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        equationXValueLine->setMaxLength(7);
        equationXValueLine->setReadOnly(false);

        gridLayout->addWidget(equationXValueLine, 1, 2, 1, 1);

        equationXLine = new QLineEdit(gridLayoutWidget);
        equationXLine->setObjectName(QString::fromUtf8("equationXLine"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font2.setPointSize(14);
        font2.setBold(false);
        equationXLine->setFont(font2);
        equationXLine->setLayoutDirection(Qt::LeftToRight);
        equationXLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        equationXLine->setAlignment(Qt::AlignCenter);
        equationXLine->setReadOnly(true);

        gridLayout->addWidget(equationXLine, 1, 1, 1, 1);

        plotXmaxLine = new QLineEdit(gridLayoutWidget);
        plotXmaxLine->setObjectName(QString::fromUtf8("plotXmaxLine"));
        plotXmaxLine->setFont(font2);
        plotXmaxLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        plotXmaxLine->setAlignment(Qt::AlignCenter);
        plotXmaxLine->setReadOnly(true);

        gridLayout->addWidget(plotXmaxLine, 2, 3, 1, 1);

        plotXminValueLine = new QLineEdit(gridLayoutWidget);
        plotXminValueLine->setObjectName(QString::fromUtf8("plotXminValueLine"));
        plotXminValueLine->setFont(font1);
        plotXminValueLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        plotXminValueLine->setMaxLength(8);

        gridLayout->addWidget(plotXminValueLine, 2, 2, 1, 1);

        plotYmaxValueLine = new QLineEdit(gridLayoutWidget);
        plotYmaxValueLine->setObjectName(QString::fromUtf8("plotYmaxValueLine"));
        plotYmaxValueLine->setFont(font1);
        plotYmaxValueLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        plotYmaxValueLine->setMaxLength(8);

        gridLayout->addWidget(plotYmaxValueLine, 3, 4, 1, 1);

        plotYminValueLine = new QLineEdit(gridLayoutWidget);
        plotYminValueLine->setObjectName(QString::fromUtf8("plotYminValueLine"));
        plotYminValueLine->setEnabled(true);
        plotYminValueLine->setFont(font1);
        plotYminValueLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        plotYminValueLine->setMaxLength(8);

        gridLayout->addWidget(plotYminValueLine, 3, 2, 1, 1);

        plotYminLine = new QLineEdit(gridLayoutWidget);
        plotYminLine->setObjectName(QString::fromUtf8("plotYminLine"));
        plotYminLine->setFont(font2);
        plotYminLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        plotYminLine->setAlignment(Qt::AlignCenter);
        plotYminLine->setReadOnly(true);

        gridLayout->addWidget(plotYminLine, 3, 1, 1, 1);

        plotXmaxValueLine = new QLineEdit(gridLayoutWidget);
        plotXmaxValueLine->setObjectName(QString::fromUtf8("plotXmaxValueLine"));
        plotXmaxValueLine->setFont(font1);
        plotXmaxValueLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #aca7a4;"));
        plotXmaxValueLine->setMaxLength(8);

        gridLayout->addWidget(plotXmaxValueLine, 2, 4, 1, 1);

        plotXminLine = new QLineEdit(gridLayoutWidget);
        plotXminLine->setObjectName(QString::fromUtf8("plotXminLine"));
        plotXminLine->setFont(font2);
        plotXminLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        plotXminLine->setAlignment(Qt::AlignCenter);
        plotXminLine->setReadOnly(true);

        gridLayout->addWidget(plotXminLine, 2, 1, 1, 1);

        plotYmaxLine = new QLineEdit(gridLayoutWidget);
        plotYmaxLine->setObjectName(QString::fromUtf8("plotYmaxLine"));
        plotYmaxLine->setFont(font2);
        plotYmaxLine->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: #3c3b3a;"));
        plotYmaxLine->setAlignment(Qt::AlignCenter);
        plotYmaxLine->setReadOnly(true);

        gridLayout->addWidget(plotYmaxLine, 3, 3, 1, 1);

        equationRadioButton = new QRadioButton(gridLayoutWidget);
        equationRadioButton->setObjectName(QString::fromUtf8("equationRadioButton"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font3.setPointSize(16);
        font3.setBold(false);
        equationRadioButton->setFont(font3);
        equationRadioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
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
        equationRadioButton->setChecked(true);

        gridLayout->addWidget(equationRadioButton, 1, 0, 1, 1);

        plotRadioButton = new QRadioButton(gridLayoutWidget);
        plotRadioButton->setObjectName(QString::fromUtf8("plotRadioButton"));
        plotRadioButton->setFont(font3);
        plotRadioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
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

        gridLayout->addWidget(plotRadioButton, 2, 0, 1, 1);

        resultPlotOrEquaButton = new QPushButton(plotOrEquationView);
        resultPlotOrEquaButton->setObjectName(QString::fromUtf8("resultPlotOrEquaButton"));
        resultPlotOrEquaButton->setGeometry(QRect(180, 180, 192, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font4.setPointSize(14);
        font4.setBold(true);
        resultPlotOrEquaButton->setFont(font4);
        resultPlotOrEquaButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(plotOrEquationView);

        QMetaObject::connectSlotsByName(plotOrEquationView);
    } // setupUi

    void retranslateUi(QDialog *plotOrEquationView)
    {
        plotOrEquationView->setWindowTitle(QCoreApplication::translate("plotOrEquationView", "Dialog", nullptr));
        equationXValueLine->setText(QCoreApplication::translate("plotOrEquationView", "10", nullptr));
        equationXLine->setText(QCoreApplication::translate("plotOrEquationView", "X:", nullptr));
        plotXmaxLine->setText(QCoreApplication::translate("plotOrEquationView", "Xmax:", nullptr));
        plotXminValueLine->setText(QCoreApplication::translate("plotOrEquationView", "-10", nullptr));
        plotYmaxValueLine->setText(QCoreApplication::translate("plotOrEquationView", "3", nullptr));
        plotYminValueLine->setText(QCoreApplication::translate("plotOrEquationView", "-3", nullptr));
        plotYminLine->setText(QCoreApplication::translate("plotOrEquationView", "Ymin:", nullptr));
        plotXmaxValueLine->setText(QCoreApplication::translate("plotOrEquationView", "10", nullptr));
        plotXminLine->setText(QCoreApplication::translate("plotOrEquationView", "Xmin:", nullptr));
        plotYmaxLine->setText(QCoreApplication::translate("plotOrEquationView", "Ymax:", nullptr));
        equationRadioButton->setText(QCoreApplication::translate("plotOrEquationView", "Equation", nullptr));
        plotRadioButton->setText(QCoreApplication::translate("plotOrEquationView", "Plot", nullptr));
        resultPlotOrEquaButton->setText(QCoreApplication::translate("plotOrEquationView", "RESULT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plotOrEquationView: public Ui_plotOrEquationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTOREQUATIONVIEW_H
