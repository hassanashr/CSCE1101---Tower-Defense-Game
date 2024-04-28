#include "castle.h"

Castle::Castle(): QObject(), QGraphicsPixmapItem() {
    setPixmap(QPixmap(":/img/Resources/Castle.png").scaled(50, 50));
    health = 20;
    healthBar = new HealthBar();

    updatePos(loc.first, loc.second);
}

void Castle::updatePos(int a, int b){
    if(a > 12 || a < 0)
        return;
    if(b > 12 || b < 0)
        return;
    loc = QPair<int, int>(a, b);
    setPos(loc.first*61 + 10, loc.second*61 + 10);
}

void Castle::updateHealthValue(int x)
{
    health = x;
    healthBar->updateHealth(health);
}
