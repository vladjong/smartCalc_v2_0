#include "creditView.h"

#include "../ui/ui_creditView.h"

using s21::CreditView;

CreditView::CreditView(SmartCalcController *controller, QWidget *parent)
    : QDialog(parent), _controller(controller), ui(new Ui::CreditView) {
    ui->setupUi(this);
    connect(ui->resultCredit, SIGNAL(released()), this, SLOT(resultPressed()));
}

CreditView::CreditView(QWidget *parent) : QDialog(parent), ui(new Ui::CreditView) {
    ui->setupUi(this);
    connect(ui->resultCredit, SIGNAL(released()), this, SLOT(resultPressed()));
}

CreditView::~CreditView() { delete ui; }

void CreditView::resultPressed() {
    fillDataCredit();
    if (checkValue()) {
        fillCreditResult();
    }
}

void CreditView::fillCreditResult() {
    _controller->calculateCredit();
    if (ui->annuityRadioButton->isChecked()) {
        ui->monthlyPaymentLineCredit->setText(QString::number(_controller->getMonthlyPayment()));
    } else {
        ui->monthlyPaymentLineCredit->setText(QString::number(_controller->getMaxMonthlyPayment()) + "..." +
                                              QString::number(_controller->getMinMonthlyPayment()));
    }
    ui->overpaymentLineCredit->setText(QString::number(_controller->getOverpayment()));
    ui->totalLineCredit->setText(QString::number(_controller->getTotalPayment()));
}

void CreditView::fillDataCredit() {
    QString amountValue = ui->amountLineCredit->text();
    QString termValue = ui->termLineCredit->text();
    QString rateValue = ui->rateLineCredit->text();
    _controller->setSumCredit(amountValue.toDouble());
    _controller->setTermCredit(termValue.toDouble());
    _controller->setPercentCredit(rateValue.toDouble());
    if (ui->annuityRadioButton->isChecked()) {
        _controller->setTypeCredit(ANNUITY);
    } else {
        _controller->setTypeCredit(DIFFERENTIATED);
    }
    QString dateValue = ui->dateComboBox->currentText();
    if (dateValue == "month") {
        _controller->setDate(MONTH);
    } else {
        _controller->setDate(YEAR);
    }
}

bool CreditView::checkValue() {
    if (!_controller->checkValueCredit()) {
        QMessageBox::warning(this, "Werror", "Text label incorrect");
        return false;
    }
    return true;
}
