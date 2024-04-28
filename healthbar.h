#ifndef HEALTHBAR_H
#define HEALTHBAR_H
#include <QGraphicsPixmapItem>
#include <QObject>
class HealthBar: public QObject, public QGraphicsPixmapItem
{
public:
    HealthBar();

    void updateHealth(int);
};

#endif // HEALTHBAR_H
