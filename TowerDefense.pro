QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    castle.cpp \
    enemy.cpp \
    enemyspawner.cpp \
    game.cpp \
    healthbar.cpp \
    heroenemy.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    meleeenemy.cpp \
    missilebullet.cpp \
    missileenemy.cpp \
    positions.cpp

HEADERS += \
    castle.h \
    enemy.h \
    enemyspawner.h \
    game.h \
    healthbar.h \
    heroenemy.h \
    mainwindow.h \
    map.h \
    meleeenemy.h \
    missilebullet.h \
    missileenemy.h

FORMS += \
    mainwindow.ui

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
