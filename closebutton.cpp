#include "closebutton.h"
#include "levelwindow.h"
#include <QDebug>


CloseButton::CloseButton(QWidget* parent): QObject(), QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/img/Resources/X.png").scaled(50, 50));
    setPos(600, 0);
    original = parent;
}


void CloseButton::mousePressEvent(QGraphicsSceneMouseEvent * e){
    qDebug("Hello");
    emit dynamic_cast<LevelWindow*>(original)->back();
    delete original;

}
