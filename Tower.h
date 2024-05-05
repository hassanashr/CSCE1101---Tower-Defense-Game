#ifndef TOWER_H
#define TOWER_H
#include<QGraphicsPixmapItem>
#include<QGraphicsPolygonItem>
#include<QGraphicsItem>
#include <QPointF>
#include <QObject>
#include <QGraphicsScene>

class Tower : public QObject, public QGraphicsPixmapItem{
Q_OBJECT
public:
    Tower(QGraphicsScene *scene, QGraphicsItem * parent=0);
    double distanceTo(QGraphicsItem * item);
     void fire();
public slots:
    void accuire_target();
private:
    QGraphicsPolygonItem * attack_area;
    QPointF attack_dest;
     QGraphicsScene *m_scene;
    bool has_target;

};


#endif // TOWER_H
