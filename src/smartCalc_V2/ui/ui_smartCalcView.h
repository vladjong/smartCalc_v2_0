/********************************************************************************
** Form generated from reading UI file 'smartCalcView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTCALCVIEW_H
#define UI_SMARTCALCVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartCalcView {
 public:
    QAction *actionCreditCalculate;
    QAction *actionCalculate;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *logButton;
    QPushButton *ACButton;
    QPushButton *mulButton;
    QPushButton *acosButton;
    QPushButton *fiveButton;
    QPushButton *sevenButton;
    QPushButton *openBracketButton;
    QPushButton *twoButton;
    QPushButton *minusButton;
    QPushButton *oneButton;
    QPushButton *xButton;
    QPushButton *closeBracketButton;
    QPushButton *asinButton;
    QPushButton *divButton;
    QPushButton *sixButton;
    QPushButton *atanButton;
    QPushButton *sqrtButton;
    QPushButton *powButton;
    QPushButton *equalButton;
    QPushButton *threeButton;
    QPushButton *plusButton;
    QPushButton *fourButton;
    QPushButton *cosButton;
    QPushButton *eButton;
    QLineEdit *enterLine;
    QLineEdit *answerLine;
    QPushButton *zeroButton;
    QPushButton *piButton;
    QPushButton *eightButton;
    QPushButton *lnButton;
    QPushButton *signButton;
    QPushButton *modButton;
    QPushButton *nineButton;
    QPushButton *sinButton;
    QPushButton *tanButton;
    QMenuBar *menuBar;
    QMenu *menuType;

    void setupUi(QMainWindow *SmartCalcView) {
        if (SmartCalcView->objectName().isEmpty())
            SmartCalcView->setObjectName(QString::fromUtf8("SmartCalcView"));
        SmartCalcView->setEnabled(true);
        SmartCalcView->resize(958, 456);
        SmartCalcView->setMinimumSize(QSize(958, 456));
        SmartCalcView->setMaximumSize(QSize(958, 456));
        SmartCalcView->setMouseTracking(false);
        SmartCalcView->setStyleSheet(
            QString::fromUtf8("background-color:  #ebeae6;\n"
                              ""));
        actionCreditCalculate = new QAction(SmartCalcView);
        actionCreditCalculate->setObjectName(QString::fromUtf8("actionCreditCalculate"));
        actionCreditCalculate->setCheckable(false);
        actionCalculate = new QAction(SmartCalcView);
        actionCalculate->setObjectName(QString::fromUtf8("actionCalculate"));
        actionCalculate->setCheckable(false);
        centralwidget = new QWidget(SmartCalcView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        centralwidget->setMinimumSize(QSize(958, 434));
        centralwidget->setMaximumSize(QSize(958, 434));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        logButton = new QPushButton(centralwidget);
        logButton->setObjectName(QString::fromUtf8("logButton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font.setPointSize(24);
        font.setBold(false);
        logButton->setFont(font);
        logButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        logButton->setIconSize(QSize(22, 22));
        logButton->setAutoExclusive(false);

        gridLayout->addWidget(logButton, 5, 2, 1, 1);

        ACButton = new QPushButton(centralwidget);
        ACButton->setObjectName(QString::fromUtf8("ACButton"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setItalic(false);
        ACButton->setFont(font1);
        ACButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #ff513c;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(ACButton, 2, 5, 1, 1);

        mulButton = new QPushButton(centralwidget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font2.setPointSize(36);
        font2.setBold(false);
        mulButton->setFont(font2);
        mulButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        color: #aca7a4;\n"
                              "        border-radius:0.4em;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #ff513c;\n"
                              "}	"));
        mulButton->setIconSize(QSize(22, 22));
        mulButton->setAutoExclusive(false);

        gridLayout->addWidget(mulButton, 3, 6, 1, 1);

        acosButton = new QPushButton(centralwidget);
        acosButton->setObjectName(QString::fromUtf8("acosButton"));
        acosButton->setFont(font);
        acosButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(acosButton, 5, 0, 1, 1);

        fiveButton = new QPushButton(centralwidget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font3.setPointSize(36);
        font3.setBold(true);
        fiveButton->setFont(font3);
        fiveButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        fiveButton->setIconSize(QSize(22, 22));
        fiveButton->setAutoExclusive(false);

        gridLayout->addWidget(fiveButton, 4, 4, 1, 1);

        sevenButton = new QPushButton(centralwidget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setFont(font3);
        sevenButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        sevenButton->setIconSize(QSize(22, 22));
        sevenButton->setAutoExclusive(false);

        gridLayout->addWidget(sevenButton, 3, 3, 1, 1);

        openBracketButton = new QPushButton(centralwidget);
        openBracketButton->setObjectName(QString::fromUtf8("openBracketButton"));
        openBracketButton->setFont(font2);
        openBracketButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(openBracketButton, 2, 3, 1, 1);

        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setFont(font3);
        twoButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        twoButton->setIconSize(QSize(22, 22));
        twoButton->setAutoExclusive(false);

        gridLayout->addWidget(twoButton, 5, 4, 1, 1);

        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setFont(font2);
        minusButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        color: #aca7a4;\n"
                              "        border-radius:0.4em;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #ff513c;\n"
                              "}	"));
        minusButton->setIconSize(QSize(22, 22));
        minusButton->setAutoExclusive(false);

        gridLayout->addWidget(minusButton, 4, 6, 1, 1);

        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setFont(font3);
        oneButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        oneButton->setIconSize(QSize(22, 22));
        oneButton->setAutoExclusive(false);

        gridLayout->addWidget(oneButton, 5, 3, 1, 1);

        xButton = new QPushButton(centralwidget);
        xButton->setObjectName(QString::fromUtf8("xButton"));
        xButton->setFont(font);
        xButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(xButton, 2, 0, 1, 2);

        closeBracketButton = new QPushButton(centralwidget);
        closeBracketButton->setObjectName(QString::fromUtf8("closeBracketButton"));
        closeBracketButton->setFont(font2);
        closeBracketButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(closeBracketButton, 2, 4, 1, 1);

        asinButton = new QPushButton(centralwidget);
        asinButton->setObjectName(QString::fromUtf8("asinButton"));
        asinButton->setFont(font);
        asinButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(asinButton, 4, 0, 1, 1);

        divButton = new QPushButton(centralwidget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setFont(font2);
        divButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        color: #aca7a4;\n"
                              "        border-radius:0.4em;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #ff513c;\n"
                              "}	"));

        gridLayout->addWidget(divButton, 2, 6, 1, 1);

        sixButton = new QPushButton(centralwidget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setFont(font3);
        sixButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        sixButton->setIconSize(QSize(22, 22));
        sixButton->setAutoExclusive(false);

        gridLayout->addWidget(sixButton, 4, 5, 1, 1);

        atanButton = new QPushButton(centralwidget);
        atanButton->setObjectName(QString::fromUtf8("atanButton"));
        atanButton->setFont(font);
        atanButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(atanButton, 6, 0, 1, 1);

        sqrtButton = new QPushButton(centralwidget);
        sqrtButton->setObjectName(QString::fromUtf8("sqrtButton"));
        sqrtButton->setFont(font);
        sqrtButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        sqrtButton->setIconSize(QSize(22, 22));
        sqrtButton->setAutoExclusive(false);

        gridLayout->addWidget(sqrtButton, 4, 2, 1, 1);

        powButton = new QPushButton(centralwidget);
        powButton->setObjectName(QString::fromUtf8("powButton"));
        powButton->setFont(font);
        powButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        powButton->setIconSize(QSize(22, 22));
        powButton->setAutoExclusive(false);

        gridLayout->addWidget(powButton, 3, 2, 1, 1);

        equalButton = new QPushButton(centralwidget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        equalButton->setFont(font2);
        equalButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background-color: #ff513c;\n"
                              "        border-radius:0.4em;\n"
                              "        padding: 0.7em 1.7em;\n"
                              "        height: 40px;\n"
                              "    width: 50px;\n"
                              "        border: none;\n"
                              "        color: #ebeae6;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 500;\n"
                              "        margin-left: auto;\n"
                              "        margin-right: auto;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(equalButton, 6, 5, 1, 2);

        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setFont(font3);
        threeButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        threeButton->setIconSize(QSize(22, 22));
        threeButton->setAutoExclusive(false);

        gridLayout->addWidget(threeButton, 5, 5, 1, 1);

        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setFont(font2);
        plusButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        color: #aca7a4;\n"
                              "        border-radius:0.4em;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #ff513c;\n"
                              "}	"));
        plusButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(plusButton, 5, 6, 1, 1);

        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setFont(font3);
        fourButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        fourButton->setIconSize(QSize(22, 22));
        fourButton->setAutoExclusive(false);

        gridLayout->addWidget(fourButton, 4, 3, 1, 1);

        cosButton = new QPushButton(centralwidget);
        cosButton->setObjectName(QString::fromUtf8("cosButton"));
        cosButton->setFont(font);
        cosButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        cosButton->setIconSize(QSize(22, 22));
        cosButton->setAutoExclusive(false);

        gridLayout->addWidget(cosButton, 5, 1, 1, 1);

        eButton = new QPushButton(centralwidget);
        eButton->setObjectName(QString::fromUtf8("eButton"));
        eButton->setFont(font);
        eButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        eButton->setIconSize(QSize(22, 22));
        eButton->setAutoExclusive(false);

        gridLayout->addWidget(eButton, 3, 1, 1, 1);

        enterLine = new QLineEdit(centralwidget);
        enterLine->setObjectName(QString::fromUtf8("enterLine"));
        enterLine->setFont(font2);
        enterLine->setLayoutDirection(Qt::RightToLeft);
        enterLine->setStyleSheet(
            QString::fromUtf8("	background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;"));
        enterLine->setMaxLength(40);
        enterLine->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        enterLine->setReadOnly(false);

        gridLayout->addWidget(enterLine, 0, 0, 1, 7);

        answerLine = new QLineEdit(centralwidget);
        answerLine->setObjectName(QString::fromUtf8("answerLine"));
        answerLine->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font4.setPointSize(72);
        font4.setBold(false);
        answerLine->setFont(font4);
        answerLine->setStyleSheet(
            QString::fromUtf8("	background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        height: 70 px;"));
        answerLine->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        answerLine->setReadOnly(true);

        gridLayout->addWidget(answerLine, 1, 0, 1, 7);

        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setFont(font3);
        zeroButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        zeroButton->setIconSize(QSize(22, 22));
        zeroButton->setAutoExclusive(false);

        gridLayout->addWidget(zeroButton, 6, 3, 1, 1);

        piButton = new QPushButton(centralwidget);
        piButton->setObjectName(QString::fromUtf8("piButton"));
        piButton->setFont(font);
        piButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(piButton, 3, 0, 1, 1);

        eightButton = new QPushButton(centralwidget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setFont(font3);
        eightButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        eightButton->setIconSize(QSize(22, 22));
        eightButton->setAutoExclusive(false);

        gridLayout->addWidget(eightButton, 3, 4, 1, 1);

        lnButton = new QPushButton(centralwidget);
        lnButton->setObjectName(QString::fromUtf8("lnButton"));
        lnButton->setFont(font);
        lnButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        lnButton->setIconSize(QSize(22, 22));
        lnButton->setAutoExclusive(false);

        gridLayout->addWidget(lnButton, 6, 2, 1, 1);

        signButton = new QPushButton(centralwidget);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setFont(font3);
        signButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        signButton->setIconSize(QSize(22, 22));
        signButton->setAutoExclusive(false);

        gridLayout->addWidget(signButton, 6, 4, 1, 1);

        modButton = new QPushButton(centralwidget);
        modButton->setObjectName(QString::fromUtf8("modButton"));
        modButton->setFont(font);
        modButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));

        gridLayout->addWidget(modButton, 2, 2, 1, 1);

        nineButton = new QPushButton(centralwidget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setFont(font3);
        nineButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #3c3b3a;\n"
                              "        text-transform: uppercase;\n"
                              "        font-weight: 700;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: #bcb8b5;\n"
                              "}"));
        nineButton->setIconSize(QSize(22, 22));
        nineButton->setAutoExclusive(false);

        gridLayout->addWidget(nineButton, 3, 5, 1, 1);

        sinButton = new QPushButton(centralwidget);
        sinButton->setObjectName(QString::fromUtf8("sinButton"));
        sinButton->setFont(font);
        sinButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        sinButton->setIconSize(QSize(22, 22));
        sinButton->setAutoExclusive(false);

        gridLayout->addWidget(sinButton, 4, 1, 1, 1);

        tanButton = new QPushButton(centralwidget);
        tanButton->setObjectName(QString::fromUtf8("tanButton"));
        tanButton->setFont(font);
        tanButton->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "        background: transparent;\n"
                              "        border: none;\n"
                              "        color: #aca7a4;\n"
                              "        font-weight: 500;\n"
                              "}\n"
                              "\n"
                              "QPushButton:pressed {\n"
                              "        color: rgba(41, 47, 46, 231);\n"
                              "}"));
        tanButton->setIconSize(QSize(22, 22));
        tanButton->setAutoExclusive(false);

        gridLayout->addWidget(tanButton, 6, 1, 1, 1);

        SmartCalcView->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(SmartCalcView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 958, 24));
        menuType = new QMenu(menuBar);
        menuType->setObjectName(QString::fromUtf8("menuType"));
        SmartCalcView->setMenuBar(menuBar);

        menuBar->addAction(menuType->menuAction());
        menuType->addAction(actionCreditCalculate);
        menuType->addAction(actionCalculate);

        retranslateUi(SmartCalcView);

        QMetaObject::connectSlotsByName(SmartCalcView);
    }  // setupUi

    void retranslateUi(QMainWindow *SmartCalcView) {
        SmartCalcView->setWindowTitle(QCoreApplication::translate("SmartCalcView", "MainWindow", nullptr));
        actionCreditCalculate->setText(
            QCoreApplication::translate("SmartCalcView", "Credit calculator", nullptr));
        actionCalculate->setText(
            QCoreApplication::translate("SmartCalcView", "Standart calculator", nullptr));
        logButton->setText(QCoreApplication::translate("SmartCalcView", "log", nullptr));
        ACButton->setText(QCoreApplication::translate("SmartCalcView", "AC", nullptr));
        mulButton->setText(QCoreApplication::translate("SmartCalcView", "*", nullptr));
        acosButton->setText(QCoreApplication::translate("SmartCalcView", "acos", nullptr));
        fiveButton->setText(QCoreApplication::translate("SmartCalcView", "5", nullptr));
        sevenButton->setText(QCoreApplication::translate("SmartCalcView", "7", nullptr));
        openBracketButton->setText(QCoreApplication::translate("SmartCalcView", "(", nullptr));
        twoButton->setText(QCoreApplication::translate("SmartCalcView", "2", nullptr));
        minusButton->setText(QCoreApplication::translate("SmartCalcView", "-", nullptr));
        oneButton->setText(QCoreApplication::translate("SmartCalcView", "1", nullptr));
        xButton->setText(QCoreApplication::translate("SmartCalcView", "x", nullptr));
        closeBracketButton->setText(QCoreApplication::translate("SmartCalcView", ")", nullptr));
        asinButton->setText(QCoreApplication::translate("SmartCalcView", "asin", nullptr));
        divButton->setText(QCoreApplication::translate("SmartCalcView", "\303\267", nullptr));
        sixButton->setText(QCoreApplication::translate("SmartCalcView", "6", nullptr));
        atanButton->setText(QCoreApplication::translate("SmartCalcView", "atan", nullptr));
        sqrtButton->setText(QCoreApplication::translate("SmartCalcView", "\342\210\232", nullptr));
        powButton->setText(QCoreApplication::translate("SmartCalcView", "^", nullptr));
        equalButton->setText(QCoreApplication::translate("SmartCalcView", "=", nullptr));
        threeButton->setText(QCoreApplication::translate("SmartCalcView", "3", nullptr));
        plusButton->setText(QCoreApplication::translate("SmartCalcView", "+", nullptr));
        fourButton->setText(QCoreApplication::translate("SmartCalcView", "4", nullptr));
        cosButton->setText(QCoreApplication::translate("SmartCalcView", "cos", nullptr));
        eButton->setText(QCoreApplication::translate("SmartCalcView", "e", nullptr));
        answerLine->setText(QCoreApplication::translate("SmartCalcView", "ANSWER", nullptr));
        zeroButton->setText(QCoreApplication::translate("SmartCalcView", "0", nullptr));
        piButton->setText(QCoreApplication::translate("SmartCalcView", "\317\200", nullptr));
        eightButton->setText(QCoreApplication::translate("SmartCalcView", "8", nullptr));
        lnButton->setText(QCoreApplication::translate("SmartCalcView", "ln", nullptr));
        signButton->setText(QCoreApplication::translate("SmartCalcView", ".", nullptr));
        modButton->setText(QCoreApplication::translate("SmartCalcView", "mod", nullptr));
        nineButton->setText(QCoreApplication::translate("SmartCalcView", "9", nullptr));
        sinButton->setText(QCoreApplication::translate("SmartCalcView", "sin", nullptr));
        tanButton->setText(QCoreApplication::translate("SmartCalcView", "tan", nullptr));
        menuType->setTitle(QCoreApplication::translate("SmartCalcView", "Mode", nullptr));
    }  // retranslateUi
};

namespace Ui {
class SmartCalcView : public Ui_SmartCalcView {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_SMARTCALCVIEW_H
