#ifndef GAME_H
#define GAME_H

#include "score.h"
//#include "drum.h"

#include <QMainWindow>
#include <QWidget>
#include <QtCore>
#include <QList>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QVector>
#include <algorithm>
#include <ctime>
#include <QLCDNumber>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QRect>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <QKeyEvent>
#include <QApplication>

namespace Ui {
class game;
}

class game : public QMainWindow
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    int a=30;
    int point;
    ~game();


public slots:


private slots:

    void myslot();
    void myslot2();
    void run();
    void keyPressEvent(QKeyEvent*event);

private:
    Ui::game *ui;
    score *scorewindow;

};

#endif // GAME_H
