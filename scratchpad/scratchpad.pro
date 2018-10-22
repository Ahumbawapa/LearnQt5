#Projekttyp definieren - hier: auführbare Anwendung .exe
#Alternativen: lib, subdirs
TEMPLATE = app

#verwendete Qt-Module. Module core und gui werden standardmäßig eingebunden
QT += qml quick

#Projektkonfiguration: Hier c++14 - Standard
CONFIG += c++14

#Quelldateien, die im Projekt verwendet werden
SOURCES += main.cpp

#Headerdateien, die im Projekt verwendet werden
#HEADERS +=

#Liste der 'Resource collection files'
#Dateien, die Anwendungsresourcen wie Bilder, qml-Dateien, etc. verwalten
RESOURCES += qml.qrc
