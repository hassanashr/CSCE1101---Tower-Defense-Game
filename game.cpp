#include "game.h"
#include "map.h"
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QUrl>
#include "castle.h"
#include "fence.h"
#include <QDebug>
Game::Game(QWidget *parent) : QGraphicsView(parent) {
    scene = new QGraphicsScene(this);
    setScene(scene);
    Map * background = new Map();
    scene->addItem(background);
    castle = new Castle();
    locations = new LocationReading();
    Fence* wall = new Fence(scene);
    wall->setPosition(2, 2);
    Fence* wall2 = new Fence(scene);
    wall2->setPosition(2, 3);
    Fence* wall3 = new Fence(scene);
    wall3->setPosition(3, 2);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 800);

    scene->addItem(castle);
    scene->addItem(castle->healthBar);
    scene->addItem(wall);
    scene->addItem(wall2);
    scene->addItem(wall3);
    background->setPos(0,50);
}

void Game::mousePressEvent(QMouseEvent* e)
{
    if(true){
        castle->updateHealthValue(castle->health-1);
        qDebug("Hello");
    }
}




