#include "smartCalcView.h"

#include "../ui/ui_smartCalcView.h"

using s21::SmartCalcView;

SmartCalcView::SmartCalcView(SmartCalcController *controller, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::SmartCalcView), _controller(controller) {
    ui->setupUi(this);
    _creditView = new s21::CreditView(_controller, this);
    _creditView->setWindowTitle("CREDIT CALCULATOR");
    connect(ui->zeroButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->xButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->twoButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->threeButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->tanButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->sqrtButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->sixButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->sinButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->signButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->sevenButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->powButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->plusButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->piButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->openBracketButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->oneButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->nineButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->mulButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->modButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->minusButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->logButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->lnButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->fourButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->fiveButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->eightButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->eButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->divButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->cosButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->closeBracketButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->atanButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->asinButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->acosButton, SIGNAL(released()), this, SLOT(numberPressed()));
    connect(ui->ACButton, SIGNAL(released()), this, SLOT(clearPressed()));
    connect(ui->equalButton, SIGNAL(released()), this, SLOT(calculatePressed()));
}

SmartCalcView::~SmartCalcView() { delete ui; }

void SmartCalcView::numberPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    QString displayValue = ui->enterLine->text();
    ui->enterLine->setText(displayValue + buttonValue);
}

void SmartCalcView::clearPressed() {
    ui->enterLine->clear();
    ui->answerLine->clear();
}

void SmartCalcView::calculatePressed() {
    QString displayValue = ui->enterLine->text();
    if (displayValue.contains("x")) {
        calculatePlotOrEquation();
    } else {
        calculateWithException();
    }
    ui->enterLine->clear();
}

void SmartCalcView::calculateWithException() {
    try {
        QString displayValue = ui->enterLine->text();
        QByteArray inBytes = displayValue.toUtf8();
        double result = _controller->getResult(inBytes.constData());
        QString resultString = QString::number(result);
        ui->answerLine->setText(resultString);
    } catch (std::invalid_argument const &ex) {
        ui->answerLine->setText(ex.what());
    }
    ui->enterLine->clear();
}

void SmartCalcView::calculatePlotOrEquation() {
    plotOrEquationView secondWindow(_controller, ui->enterLine->text());
    secondWindow.setWindowTitle("");
    secondWindow.setModal(true);
    secondWindow.exec();
    ui->answerLine->setText(secondWindow.getString());
    ui->enterLine->clear();
}

void SmartCalcView::on_actionCreditCalculate_triggered() {
    hide();
    _creditView->show();
}

void SmartCalcView::on_actionCalculate_triggered() {
    _creditView->hide();
    show();
}
