#include "heroenemy.h"

HeroEnemy::HeroEnemy()
{
    setPixmap(QPixmap(":/images/hero.png"));
}

void HeroEnemy::attackCastle() {}

/* void HeroEnemy::attackWall(Wall *&) {} */

void HeroEnemy::specialAbilityHeal()
{
    for (Enemy* enemy : spawnedEnemies) {
        enemy->increaseHealth(10);
    }
}

void HeroEnemy::specialAbilityBerserk()
{
    for (Enemy* enemy : spawnedEnemies) {
        enemy->increaseHealth(10);
    }
}
