#ifndef MELEEENEMY_H
#define MELEEENEMY_H

#include <QObject>
#include "enemy.h"
#include "fence.h"
class MeleeEnemy :  public Enemy
{
    Q_OBJECT
public:
    MeleeEnemy();
    void attackCastle();
    void attackWall(Fence *&);

private:
    int velocity = 3;
    int damage = 15;
    int health = 120;
};

#endif // MELEEENEMY_H
