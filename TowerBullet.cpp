#include "TowerBullet.h"
#include <QPixmap>
#include <QTimer>
#include <qmath.h>
TowerBullet::TowerBullet(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent) {

    setPixmap(QPixmap(":/images/Bomb3.png"));

    QTimer * move_timer = new QTimer(this);
    connect(move_timer,SIGNAL(timeout()),this,SLOT(move()));
    move_timer->start(50);
}
void TowerBullet::move(){
    int stepsize = 30;
    double theta = rotation();

    double dy = stepsize * qSin(qDegreesToRadians(theta));
    double dx = stepsize * qCos(qDegreesToRadians(theta));
    setPos(x()+dx, y()+dy);


}
