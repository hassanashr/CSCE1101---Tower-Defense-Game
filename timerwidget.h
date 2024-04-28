#ifndef TIMERWIDGET_H
#define TIMERWIDGET_H

#include <QLabel>
#include <QTimer>

class TimerWidget : public QLabel {
    Q_OBJECT
public:
    TimerWidget(QWidget *parent = nullptr);
    void startTimer();
    void stopTimer();

private slots:
    void updateTime();

private:
    QTimer *timer;
    int timeRemaining;
};

#endif // TIMERWIDGET_H
