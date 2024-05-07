#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "castle.h"
#include <QMouseEvent>
#include "locationreading.h"
#include "closebutton.h"


class Game : public QGraphicsView
{

public:
    Game(QWidget* parent = 0);

    QGraphicsScene * scene;

    Castle* castle;

    CloseButton * close_btn;

    LocationReading* locations;

    bool isThere(QMouseEvent* e, int x, int y, int w, int h);
signals:
    void back();
public slots:
    void mousePressEvent(QMouseEvent*);

};


#endif // GAME_H
