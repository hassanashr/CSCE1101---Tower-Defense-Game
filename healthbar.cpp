#include "healthbar.h"
#include <QPixmap>
#include <QString>

HealthBar::HealthBar(): QObject(), QGraphicsPixmapItem() {
    updateHealth(20);
    setPos(0, 0);
}

void HealthBar::updateHealth(int h)
{
    setPixmap(QPixmap(":/health/Health/Hearts" + QString::number(h) + ".png").scaled(550, 50));
}
