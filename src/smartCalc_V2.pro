QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11 app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../src/smartCalc_V2/model/creditModel.cpp \
    ../src/smartCalc_V2/view/creditView.cpp \
    ../src/smartCalc_V2/main.cpp \
    ../src/smartCalc_V2/view/plotOrEquationview.cpp \
    ../src/smartCalc_V2/view/plotView.cpp \
    ../src/smartCalc_V2/qcustomplot.cpp \
    ../src/smartCalc_V2/controller/smartCalcController.cpp \
    ../src/smartCalc_V2/model/smartCalcModel.cpp \
    ../src/smartCalc_V2/view/smartCalcView.cpp

HEADERS += \
    ../src/smartCalc_V2/model/creditModel.h \
    ../src/smartCalc_V2/view/creditView.h \
    ../src/smartCalc_V2/view/plotOrEquationview.h \
    ../src/smartCalc_V2/view/plotView.h \
    ../src/smartCalc_V2/qcustomplot.h \
    ../src/smartCalc_V2/controller/smartCalcController.h \
    ../src/smartCalc_V2/model/smartCalcModel.h \
    ../src/smartCalc_V2/view/smartCalcView.h

FORMS += \
    ../src/smartCalc_V2/ui/creditView.ui \
    ../src/smartCalc_V2/ui/plotOrEquationview.ui \
    ../src/smartCalc_V2/ui/plotView.ui \
    ../src/smartCalc_V2/ui/smartCalcView.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../src/smartCalc_V2/smartCalc.icns \
    ../src/smartCalc_V2/smartCalc_V2.pro.user

macx:ICON = ../src/smartCalc_V2/smartCalc.icns
