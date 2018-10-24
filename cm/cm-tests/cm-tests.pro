include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)


QT += testlib
QT -= gui
TARGET = client-tests
TEMPLATE = app

CONFIG += qt console warn_on depend_includepath testcase
CONFIG += c++14
CONFIG -= app_bundle

INCLUDEPATH += source
SOURCES +=  source/models/tst_clienttests.cpp

message(cm-tests project dir: $${PWD})

DESTDIR     = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR     = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR     = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR      = $$PWD/build/$$DESTINATION_PATH/.ui

message(cm-tests output dir: $${DESTDIR})
