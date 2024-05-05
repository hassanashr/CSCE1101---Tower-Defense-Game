#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QPointF>
#include <QVector>
using namespace std;
class Enemy : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QObject *parent = 0);
    void Die();
    void increaseHealth(int);
    virtual void attackCastle() = 0;
    /* virtual void attackWall(Wall *&) = 0; */
    int getHealth();
    void rotateToPoint(QPointF p);
    static QVector<Enemy *> getSpawnedEnemies();
    void increaseSpeed(int);

protected:
    QTimer *moveTimer;
    int health;
    int currRow;
    int currCol;
    QPointF destination;
    static QVector<Enemy *> spawnedEnemies;

public slots:
    void moveTowardsCastle();
};

#endif // ENEMY_H
