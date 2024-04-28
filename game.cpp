#include "game.h"
#include "map.h"
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QUrl>
#include "castle.h"
#include <QDebug>
Game::Game(QWidget *parent) : QGraphicsView(parent) {
    sc = new QGraphicsScene(this);
    setScene(sc);
    Map * background = new Map();
    sc->addItem(background);
    castle = new Castle();



    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 800);

    sc->addItem(castle);
    sc->addItem(castle->healthBar);
    background->setPos(0,0);
}

void Game::mousePressEvent(QMouseEvent* e)
{
    if(true){
        castle->updateHealthValue(castle->health-1);
        qDebug("Hello");
    }
    }


