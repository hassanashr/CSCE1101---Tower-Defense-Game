#include "enemy.h"
//Nevermind, changed them both to QObject. Now, moc_enemy is working
Enemy::Enemy(QObject *parent) //I do not know if it should have QObject or QGraphicsPixmap Item. Writing the comment so as not to forget
    : QObject{parent}
{
    spawnedEnemies.push_back(this);//Took this code from the above.
}
/*
Enemy::Enemy(QObject *parent)
{
    spawnedEnemies.push_back(this);
}
Commented this because it interferes with the above declaration
*/
void Enemy::Die()
{
    if (health <= 0) {
        for(auto it = spawnedEnemies.begin(); it != spawnedEnemies.end(); it++)
            if(*it == this)
                spawnedEnemies.erase(it);

    }
}

void Enemy::increaseHealth(int HP)
{
    health += HP;
}

int Enemy::getHealth()
{
    return health;
}

void Enemy::increaseSpeed(int s){

};

void Enemy::moveTowardsCastle()
{

}

QVector<Enemy*> Enemy::spawnedEnemies;
