#include "Tower.h"
#include "TowerBullet.h"
#include <QPixmap>
#include <QVector>
#include <QPointF>
#include <QPolygonF>
#include <QTimer>
#include <QLineF>
#include <QGraphicsRectItem>
#include "Enemy.h"

Tower::Tower(QGraphicsScene *scene, QGraphicsItem * parent):QObject(), QGraphicsPixmapItem(parent), m_scene(scene) {

    setPixmap(QPixmap(":/images/Clan_Castle.png"));

    QVector<QPointF> points;
    points << QPoint(1,0) << QPoint(2,0)<< QPoint(3,1)<< QPoint(3,2)<< QPoint(2,3)<< QPoint(1,3)<< QPoint(0,2)<< QPoint(0,1);


     int scalefactor = 65;
    for(size_t i = 0, n=points.size();i<n;i++){

        points[i] *= scalefactor;
    }
    QPolygonF polygon(points);

    attack_area = new QGraphicsPolygonItem(polygon,this);



    QPointF polycenter(1.5,1.5);
    polycenter *= scalefactor;
    polycenter = mapToScene(polycenter);;
    QPointF towercenter (x()+40,y()+48);
    QLineF ln(polycenter,towercenter);
    attack_area ->setPos(x()+ln.dx(),y()+ln.dy());
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(accuire_target()));
        timer->start(1000);

}
double Tower:: distanceTo(QGraphicsItem * item){
    QLineF ln(pos(),item->pos());
    return ln.length();
}

void Tower::fire(){

    TowerBullet * bullet = new TowerBullet();
    bullet->setPos(x()+40,y()+48);

    QLineF ln(QPointF(x()+40,y()+48),attack_dest);
    double angle = -ln.angle();
    bullet->setRotation(angle);
    m_scene->addItem(bullet);


}
void Tower::accuire_target(){

    QList <QGraphicsItem *> colliding_items = attack_area->collidingItems();

    if (colliding_items.size()== 1){
        has_target = false;
        return;
    }

    double closest_dirt = 300;
    QPointF closets_pt = QPoint (0,0);
    for(size_t i =0,n=colliding_items.size();i<n;i++){

        Enemy * enemy = dynamic_cast <Enemy *> (colliding_items[i]);
        if(enemy){
            double this_dist = distanceTo(enemy);
            if(this_dist <closest_dirt){
                closest_dirt = this_dist;
                closets_pt = colliding_items[i]->pos();
                has_target = true;
            }
        }
    }
    attack_dest = closets_pt;
    fire();
}

