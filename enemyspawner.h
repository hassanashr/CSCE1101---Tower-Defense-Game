#include <QGraphicsScene>
#include <QObject>
#include <QTimer>
#include "Enemy.h"
#include "HeroEnemy.h"
#include "MeleeEnemy.h"
#include "MissileEnemy.h"
#include <cstdlib>

class EnemySpawner : public QObject
{
    Q_OBJECT

public:
    EnemySpawner(QGraphicsScene *scene, QObject *parent = nullptr);
    ~EnemySpawner();

public slots:
    void spawnEnemy();

private:
    QGraphicsScene *scene;
    QTimer *meleeTimer;
    QTimer *missileTimer;
    QTimer *heroTimer;
};
