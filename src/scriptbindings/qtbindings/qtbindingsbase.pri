TEMPLATE = lib
DEPENDPATH += .
INCLUDEPATH += .

CONFIG(debug) {
    DESTDIR = $$PWD/../plugins/script_debug
} else {
    DESTDIR = $$PWD/../plugins/script
}

win32:{
    QMAKE_CXXFLAGS += /MP /GS /Zi
    QMAKE_LFLAGS += /DEBUG /OPT:REF /OPT:ICF
}

QT += script
CONFIG += plugin
GENERATEDCPP = $$PWD/../generated_cpp
TARGET=$$qtLibraryTarget($$TARGET)
