QT       += core gui widgets
TARGET = CampusNavigationVS
TEMPLATE = app
RESOURCES += resources.qrc

DEFINES += QT_DEPRECATED_WARNINGS

# Directories
INCLUDEPATH += $$PWD/include

# Source Files
SOURCES += $$PWD/src/main.cpp \
           $$PWD/src/gui/MainWindow.cpp \
           $$PWD/src/graph/Graph.cpp \
           $$PWD/src/core/CampusGis.cpp \
           $$PWD/src/trees/LocationTree.cpp

# Header Files
HEADERS  += $$PWD/include/gui/MainWindow.h \
            $$PWD/include/graph/Graph.h \
            $$PWD/include/core/CampusGis.h \
            $$PWD/include/trees/LocationTree.h