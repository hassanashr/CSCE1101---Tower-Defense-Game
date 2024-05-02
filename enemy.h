#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QPointF>
#include <vector>
using namespace std;
class Enemy : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem *parent = 0);
    void Die();
    void increaseHealth(int);
    virtual void attackCastle() = 0;
    /* virtual void attackWall(Wall *&) = 0; */
    void getHealth();
    void rotateToPoint(QPointF p);
    static vector<Enemy *> getSpawnedEnemies();

private:
    QTimer *moveTimer;
    int currRow;
    int currCol;
    QPointF destination;
    static vector<Enemy *> spawnedEnemies;

public slots:
    moveTowardsCastle();
};

#endif // ENEMY_H
