#include "plotView.h"

#include "../qcustomplot.h"
#include "../ui/ui_plotView.h"

using s21::plotView;

plotView::plotView(std::pair<QVector<double>, QVector<double>> planeAndDomain, QVector<double> xOrY,
                   QWidget *parent)
    : QDialog(parent), ui(new Ui::plotView), _planeAndDomain(planeAndDomain), _xOrY(xOrY) {
    ui->setupUi(this);
    drawPlot();
}

void plotView::drawPlot() {
    QPen pen;
    pen.setColor(QColor(255, 81, 60));
    ui->widget->xAxis->setRange(_xOrY[0], _xOrY[1]);
    ui->widget->yAxis->setRange(_xOrY[2], _xOrY[3]);
    ui->widget->addGraph()->setPen(pen);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    ui->widget->graph(0)->addData(_planeAndDomain.second, _planeAndDomain.first);
    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
    ui->widget->setBackground(QColor(235, 234, 230));
    ui->widget->replot();
}

plotView::~plotView() { delete ui; }
