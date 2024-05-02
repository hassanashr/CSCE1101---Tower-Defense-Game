#ifndef MELEEENEMY_H
#define MELEEENEMY_H

#include <QObject>
#include "enemy.h"
class MeleeEnemy : public QObject, public Enemy
{
    Q_OBJECT
public:
    void attackCastle();
    void attackWall(Wall *&);

private:
    int velocity = 3;
    int damage = 15;
    int health = 120;
};

#endif // MELEEENEMY_H
