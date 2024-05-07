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

    close_btn = new CloseButton(parent);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 800);

    scene->addItem(castle);
    scene->addItem(castle->healthBar);
    scene->addItem(wall);
    scene->addItem(wall2);
    scene->addItem(wall3);
    scene->addItem(close_btn);
    background->setPos(0,50);
}

bool Game::isThere(QMouseEvent *e, int x, int y, int w, int h)
{
    if(e->x() >= x && e->x() < x + w && e->y() >= y && e->y() < y+h)
        return true;
    return false;
}

void Game::mousePressEvent(QMouseEvent* e)
{
    QGraphicsView::mousePressEvent(e);
}




