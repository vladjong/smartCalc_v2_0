#include <QApplication>

#include "view/creditView.h"
#include "view/smartCalcView.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    s21::SmartCalcModel modelCalculate;
    s21::CreditModel modelCredit;
    s21::SmartCalcController controller(&modelCalculate, &modelCredit);
    s21::SmartCalcView mainWindow(&controller);
    mainWindow.setWindowTitle("SMART CALCULATOR");
    mainWindow.show();
    return a.exec();
}
