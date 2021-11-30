QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/BaseParts/QuickButton.cpp \
    src/BaseParts/TitleBar.cpp \
    src/main.cpp \
    src/MainWindow/Mainwindow.cpp \
    src/Global/GlobalStruct.cpp

HEADERS += \
    src/BaseParts/QuickButton.h \
    src/BaseParts/TitleBar.h \
    src/MainWindow/Mainwindow.h \
    src/Global/GlobalStruct.h \
    src/Global/GlobalEnum.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
