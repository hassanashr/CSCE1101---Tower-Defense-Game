#include "fencewidget.h"

FenceWidget::FenceWidget(QWidget *parent) : QWidget(parent) {
    fencePart.load("C:\\Users\\AUC\\Downloads\\Wall.png");
    healthBar.setRange(0, 100);
    healthBar.setValue(100);
    QVBoxLayout *layout = new QVBoxLayout(this);
 layout->addWidget(&healthBar);
        for(int i = 0; i < 5; ++i) {
            QHBoxLayout *hLayout = new QHBoxLayout;
            for(int j = 0; j < 5; ++j) {
                QLabel* label = new QLabel;
                if (i == 0 || i == 4 || j == 0 || j == 4) {
                    label->setPixmap(fencePart);
                }
                hLayout->addWidget(label);
                fenceLabels[i][j] = label;
            }
            layout->addLayout(hLayout);
        }
    }


void FenceWidget::setPosition(int x, int y) {
    move(x, y);
}

void FenceWidget::setHealth(int value) {
    healthBar.setValue(value);
}
