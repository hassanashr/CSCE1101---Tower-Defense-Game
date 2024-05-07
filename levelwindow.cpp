#include "levelwindow.h"
#include "ui_levelwindow.h"
#include <QVBoxLayout>
#include <QRect>
#include <QProgressBar>

LevelWindow::LevelWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LevelWindow)
{
    ui->setupUi(this);

    game = new Game(this);
    ui->layout->addWidget(game);
    setFixedHeight(800);
    setFixedWidth(800);
}

LevelWindow::~LevelWindow()
{
    delete ui;
}
