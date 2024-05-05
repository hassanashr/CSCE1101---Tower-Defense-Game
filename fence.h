#ifndef FENCE_H
#define FENCE_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QVBoxLayout>
#include <QLabel>
#include <QProgressBar>
#include <QGraphicsScene>
#include <QGraphicsProxyWidget>


class Fence : public QObject, public QGraphicsPixmapItem
{
public:
    Fence(QGraphicsScene*);

    int x, y;

    int health;

    QGraphicsScene* scene;

    QProgressBar* healthBar;

    QGraphicsProxyWidget* dummyWidget;

    void damageHealth(int);

    void setPosition(int, int);

    void healthHealth(int);
};

#endif // FENCE_H
