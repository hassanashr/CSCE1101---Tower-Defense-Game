#ifndef FENCEWIDGET_H
#define FENCEWIDGET_H

#include <QWidget>
#include <QProgressBar>
#include <QPixmap>
#include <QVBoxLayout>
#include <QLabel>

class FenceWidget : public QWidget {
    Q_OBJECT
public:
    explicit FenceWidget(QWidget *parent = nullptr);

    void setPosition(int x, int y);
    void setHealth(int value);

private:
    QPixmap fencePart;
    QProgressBar healthBar;
    QLabel* fenceLabels[5][5];
};

#endif // FENCEWIDGET_H
