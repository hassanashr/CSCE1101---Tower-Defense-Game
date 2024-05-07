#include "fence.h"
#include <QFormLayout>
#include <QWidget>

Fence::Fence(QGraphicsScene* scene) {
    setPixmap(QPixmap(":/img/Resources/Fence.png").scaled(61, 58));
    this->scene = scene;
    /*
    healthBar->setValue(50);

    QWidget* item = new QWidget();
    QFormLayout* layout = new QFormLayout();
    layout->addRow(healthBar);
    item->setLayout(layout);

    dummyWidget = scene->addWidget(healthBar);

    dummyWidget->setPos(pos().x(), pos().y());
    dummyWidget->setZValue(1);
    */

}

void Fence::setPosition(int x, int y){
    if(x > 12 || x < 0)
        return;
    if(y > 12 || y < 0)
        return;

    setPos(x*61+1, y*57 + 51);
};

