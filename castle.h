#ifndef CASTLE_H
#define CASTLE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QPair>
#include <QGraphicsTextItem>
#include "healthbar.h"
class Castle : public QObject, public QGraphicsPixmapItem
{
public:
    Castle();
    QPair<int, int> loc = {6, 6};
    int health;
    void updatePos(int, int);
    HealthBar* healthBar;
    void updateHealthValue(int);
};

#endif // CASTLE_H
