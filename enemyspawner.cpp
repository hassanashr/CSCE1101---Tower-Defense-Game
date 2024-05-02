#include "enemyspawner.h"

EnemySpawner::EnemySpawner(QGraphicsScene *scene, QObject *parent)
    : QObject(parent)
    , scene(scene)
{
    // Create timers for each type of enemy
    meleeTimer = new QTimer(this);
    missileTimer = new QTimer(this);
    heroTimer = new QTimer(this);

    connect(meleeTimer, &QTimer::timeout, this, &EnemySpawner::spawnEnemy);
    connect(missileTimer, &QTimer::timeout, this, &EnemySpawner::spawnEnemy);
    connect(heroTimer, &QTimer::timeout, this, &EnemySpawner::spawnEnemy);

    // Start timers
    meleeTimer->start(1000);   // Spawn melee enemy every second
    missileTimer->start(2000); // Spawn missile enemy every second
    heroTimer->start(240000);  // Spawn hero enemy every 4 minutes
}

EnemySpawner::~EnemySpawner()
{
    delete meleeTimer;
    delete missileTimer;
    delete heroTimer;
}

void EnemySpawner::spawnEnemy()
{
    // Generate a random position within the scene
    int xPos = rand() % static_cast<int>(scene->width());
    int yPos = rand() % static_cast<int>(scene->height());

    // Decide which type of enemy to spawn based on the sender
    QObject *sender = QObject::sender();
    if (sender == meleeTimer) {
        MeleeEnemy *melee = new MeleeEnemy();
        melee->setPos(xPos, yPos);
        scene->addItem(melee);
    } else if (sender == missileTimer) {
        MissileEnemy *missile = new MissileEnemy();
        missile->setPos(xPos, yPos);
        scene->addItem(missile);
    } else if (sender == heroTimer) {
        HeroEnemy *hero = new HeroEnemy();
        hero->setPos(xPos, yPos);
        scene->addItem(hero);
    }
}
