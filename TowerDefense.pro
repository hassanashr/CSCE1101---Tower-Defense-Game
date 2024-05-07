QT       += core gui
INCLUDEPATH +=

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    castle.cpp \
    closebutton.cpp \
    enemy.cpp \
    enemyspawner.cpp \
    fence.cpp \
    game.cpp \
    healthbar.cpp \
    heroenemy.cpp \
    levelwindow.cpp \
    locationreading.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    meleeenemy.cpp \
    missilebullet.cpp \
    missileenemy.cpp \
    positions.cpp \
    settings.cpp

HEADERS += \
    castle.h \
    closebutton.h \
    enemy.h \
    enemyspawner.h \
    fence.h \
    game.h \
    healthbar.h \
    heroenemy.h \
    levelwindow.h \
    locationreading.h \
    mainwindow.h \
    map.h \
    meleeenemy.h \
    missilebullet.h \
    missileenemy.h \
    settings.h

FORMS += \
    levelwindow.ui \
    mainwindow.ui \
    settings.ui

TRANSLATIONS += \
    TowerDefense_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    reso.qrc
