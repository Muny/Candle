TARGET = qtscript_custom
include(../qtbindingsbase.pri)
QT += widgets gui
SOURCES += plugin.cpp
HEADERS += plugin.h
INCLUDEPATH += ./include/ $$PWD/../../../designerplugins/customwidgetsplugin

CONFIG(release): BTYPE=release
CONFIG(debug): BTYPE=debug

LIBS += -L../../../designerplugins/customwidgetsplugin/$$BTYPE -lcustomwidgets
include($$GENERATEDCPP/com_trolltech_qt_custom/com_trolltech_qt_custom.pri)
