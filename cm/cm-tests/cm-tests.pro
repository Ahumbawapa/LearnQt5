QT += testlib
QT -= gui
TARGET = client-tests
TEMPLATE = app

CONFIG += qt console warn_on depend_includepath testcase
CONFIG += c++14
CONFIG -= app_bundle

INCLUDEPATH += source
SOURCES +=  source/models/tst_clienttests.cpp
