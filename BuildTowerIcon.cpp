#include "BuildTowerIcon.h"
#include "Game.h"
#include "Tower.h"
 extern Game * game;
BuildTowerIcon::BuildTowerIcon(QGraphicsItem *parent):QGraphicsPixmapItem(parent) {

    setPixmap(QPixmap(":images/icons8-clash-of-clans-64.png"));
}
void BuildTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent * event){
     QGraphicsPixmapItem::mousePressEvent(event);
    if(game && !game->build){
        game->build = new Tower();
        game->setCursor(QString(":images/Clan_Castle.png"));
    }



}
