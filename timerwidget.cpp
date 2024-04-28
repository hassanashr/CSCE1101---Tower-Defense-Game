#include "timerwidget.h"

TimerWidget::TimerWidget(QWidget *parent) : QLabel(parent), timeRemaining(5 * 60) {
    setAlignment(Qt::AlignTop | Qt::AlignRight);
    setFont(QFont("Arial", 16));
    updateTime();

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TimerWidget::updateTime);
}

void TimerWidget::startTimer() {
    timeRemaining = 5 * 60; // 5 minutes in seconds
    timer->start(1000); // Update every second
}

void TimerWidget::stopTimer() {
    timer->stop();
}

void TimerWidget::updateTime() {
    if (timeRemaining > 0) {
        timeRemaining -= 1;
        int minutes = timeRemaining / 60;
        int seconds = timeRemaining % 60;
        setText(QString("%1:%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0')));
    } else {
        setText("Time's up!");
        timer->stop();
    }
}
