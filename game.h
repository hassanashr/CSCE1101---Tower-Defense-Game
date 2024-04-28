#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "castle.h"
#include <QMouseEvent>

class Game : public QGraphicsView
{
public:
    Game(QWidget* parent = 0);

    QGraphicsScene * sc;

    Castle* castle;

public slots:
    void mousePressEvent(QMouseEvent*);

};

#endif // GAME_H
