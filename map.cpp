#include "map.h"
#include <QPixmap>
Map::Map(): QGraphicsPixmapItem() {
    setPixmap(QPixmap(":/img/Resources/BackGround.png").scaled(800, 750));
}
