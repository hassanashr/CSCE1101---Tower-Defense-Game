#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "castle.h"
#include <QMouseEvent>
#include "locationreading.h"


class Game : public QGraphicsView
{
public:
    Game(QWidget* parent = 0);

    QGraphicsScene * scene;

    Castle* castle;

    LocationReading* locations;

public slots:
    void mousePressEvent(QMouseEvent*);

};


#endif // GAME_H
