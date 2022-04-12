
TEMPLATE = lib

DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        src/binacpp.cpp \
        src/binacpp_logger.cpp \
        src/binacpp_utils.cpp \
        src/binacpp_websocket.cpp \
        json/jsoncpp.cpp

HEADERS += \
        include/binacpp.h \
        include/binacpp_logger.h \
        include/binacpp_utils.h \
        include/binacpp_websocket.h

INCLUDEPATH += ./
INCLUDEPATH += include/
INCLUDEPATH += json/
INCLUDEPATH += openssl/
INCLUDEPATH += curl/
INCLUDEPATH += libwebsockets/

LIBS += ./dll/libcurl.dll
LIBS += ./dll/libcrypto.dll
LIBS += ./dll/libwebsockets.dll

DESTDIR = dll/
