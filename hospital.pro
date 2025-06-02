QT += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 5) {
    QT += widgets
}

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# Настройки компилятора и macOS
QMAKE_CXX = /Library/Developer/CommandLineTools/usr/bin/clang++
QMAKE_CXXFLAGS += -stdlib=libc++ -arch arm64 -mmacosx-version-min=14.0 -Wall -Wextra
QMAKE_MAC_SDK = macosx
QMAKE_MACOSX_DEPLOYMENT_TARGET = 14.0
QMAKE_APPLE_DEVICE_ARCH = arm64

# Пути к заголовкам
INCLUDEPATH += /opt/homebrew/include
INCLUDEPATH += /opt/homebrew/lib/QtWidgets.framework/Headers
INCLUDEPATH += /opt/homebrew/lib/QtGui.framework/Headers
INCLUDEPATH += /opt/homebrew/lib/QtSql.framework/Headers
INCLUDEPATH += /opt/homebrew/lib/QtCore.framework/Headers

# Библиотеки
LIBS += -L/opt/homebrew/lib -lyaml-cpp  # Явный путь к библиотеке

# Отключение предупреждений
QMAKE_CXXFLAGS_WARN_ON += -Wno-unused-parameter

# Исходные файлы (ваш существующий код)
SOURCES += \
    Forms/formcomplant.cpp \
    QtModels/QTableModel.cpp \
    QtModels/QtModels.cpp \
    Models/Models.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Forms/formcomplant.h \
    QtModels/QTableModel.h \
    QtModels/QtModels.hpp \
    Models/Models.hpp \
    mainwindow.h

FORMS += \
    Forms/formcomplant.ui \
    mainwindow.ui

# Дефолтные правила деплоя
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=