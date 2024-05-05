#ifndef HEROENEMY_H
#define HEROENEMY_H
#include <QObject>
#include <enemy.h>

class HeroEnemy : public Enemy
{
public:
    HeroEnemy();
    void attackCastle();
    /* void attackWall(Wall *&); */

private:
    int velocity = 4;
    int damage = 20;
    int health = 200;
    QTimer *specialAbility;
public slots:
    void specialAbilityHeal();
    void specialAbilityBerserk();
};

#endif // HEROENEMY_H
