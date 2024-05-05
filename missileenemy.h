#ifndef MISSILEENEMY_H
#define MISSILEENEMY_H

#include <QObject>
#include "enemy.h"
class MissileEnemy :  public Enemy
{
    Q_OBJECT
public:
    MissileEnemy();
    void attackCastle();
    /* void attackWall(Wall *&); */

private:
    int velocity = 2;
    int damage = 12;
    int health = 100;
    int range = 10;
};

#endif // MISSILEENEMY_H
