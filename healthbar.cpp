#include "healthbar.h"
#include <QPixmap>
#include <QString>

HealthBar::HealthBar(): QObject(), QGraphicsPixmapItem() {
    updateHealth(20);
    setPos(10, 10);
}

void HealthBar::updateHealth(int h)
{
    setPixmap(QPixmap(":/health/Health/Hearts" + QString::number(h) + ".png").scaled(550, 50));
}
