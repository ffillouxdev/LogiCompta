QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addrubriquesdialog.cpp \
    addvaluedialog.cpp \
    changeinformationsdialog.cpp \
    deleteselectedrowsdialog.cpp \
    invoiceslist.cpp \
    loading.cpp \
    login.cpp \
    main.cpp \
    mainpage.cpp \
    orderdialog.cpp \
    profildialog.cpp \
    registration.cpp \
    sectionlist.cpp

HEADERS += \
    addrubriquesdialog.h \
    addvaluedialog.h \
    changeinformationsdialog.h \
    deleteselectedrowsdialog.h \
    invoiceslist.h \
    loading.h \
    login.h \
    mainpage.h \
    orderdialog.h \
    profildialog.h \
    registration.h \
    sectionlist.h

FORMS += \
    addrubriquesdialog.ui \
    addvaluedialog.ui \
    changeinformationsdialog.ui \
    deleteselectedrowsdialog.ui \
    invoiceslist.ui \
    loading.ui \
    login.ui \
    mainpage.ui \
    orderdialog.ui \
    profildialog.ui \
    registration.ui \
    sectionlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc


RC_ICONS = logo1.ico
