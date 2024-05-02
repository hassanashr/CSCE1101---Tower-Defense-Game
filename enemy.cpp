#include "enemy.h"

enemy::enemy(QObject *parent)
    : QObject{parent}
{}

Enemy::Enemy(QGraphicsItem *parent)
{
    spawnedEnemies.push_back(this);
}

void Enemy::Die()
{
    if (health <= 0) {
        spawnedEnemies.erase(remove(spawnedEnemies.begin(), spawnedEnemies.end(), this),
                             spawnedEnemies.end());
    }
}

void Enemy::increaseHealth(int HP)
{
    health += HP;
}

void Enemy::getHealth()
{
    return health;
}

void Enemy::increaseSpeed(int s){

};
Enemy::moveTowardsCastle()
{

}
