#include "plotOrEquationview.h"

#include "../ui/ui_plotOrEquationview.h"

using s21::plotOrEquationView;

plotOrEquationView::plotOrEquationView(SmartCalcController* controller, QString string, QWidget* parent)
    : QDialog(parent), ui(new Ui::plotOrEquationView), _controller(controller), _string(string) {
    ui->setupUi(this);
    connect(ui->resultPlotOrEquaButton, SIGNAL(released()), this, SLOT(plotOrEquataionPressed()));
}

plotOrEquationView::~plotOrEquationView() { delete ui; }

void plotOrEquationView::plotOrEquataionPressed() {
    if (ui->equationRadioButton->isChecked()) {
        if (!ui->equationXValueLine->text().isEmpty()) {
            _xValue = ui->equationXValueLine->text();
            calculateEquation();
        }
    } else if (ui->plotRadioButton->isChecked()) {
        auto myPairPlot = calculatePlot();
        if (_check) {
            plotView windowPlot(myPairPlot, _xOrY);
            windowPlot.setWindowTitle("PLOT");
            windowPlot.setModal(true);
            windowPlot.exec();
        }
    }
    close();
}

bool plotOrEquationView::checkValue(QString value) {
    bool check = false;
    value.toDouble(&check);
    return check;
}

std::pair<QVector<double>, QVector<double>> plotOrEquationView::calculatePlot() {
    std::pair<QVector<double>, QVector<double>> myPairPlot;
    try {
        QByteArray inBytes = _string.toUtf8();
        QString xMin = ui->plotXminValueLine->text();
        QString xMax = ui->plotXmaxValueLine->text();
        QString yMin = ui->plotYminValueLine->text();
        QString yMax = ui->plotYmaxValueLine->text();
        _xOrY.push_back(xMin.toDouble());
        _xOrY.push_back(xMax.toDouble());
        _xOrY.push_back(yMin.toDouble());
        _xOrY.push_back(yMax.toDouble());
        if (checkValue(xMin) && checkValue(xMax) && checkValue(yMin) && checkValue(yMax)) {
            return _controller->getPlotting(inBytes.constData(), xMin.toDouble(), xMax.toDouble());
        } else {
            QMessageBox::warning(this, "Werror", "Text label incorrect");
            _check = false;
        }
    } catch (std::invalid_argument const& ex) {
        QMessageBox::warning(this, "Werror", " Expression incorrect");
        _check = false;
    }
    return myPairPlot;
}

void plotOrEquationView::calculateEquation() {
    try {
        QByteArray inBytes = _string.toUtf8();
        if (checkValue(_xValue)) {
            double result = _controller->getResult(inBytes.constData(), _xValue.toDouble());
            _resultString = QString::number(result);
        } else {
            _resultString = "ERROR";
        }
    } catch (std::invalid_argument const& ex) {
        _resultString = ex.what();
    }
}

QString plotOrEquationView::getString() { return _resultString; }
