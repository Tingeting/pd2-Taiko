#include "game.h"
#include "ui_game.h"
#include "score.h"

#include <QTimer>
#include <Qstring>

QTimer *timer;
QTimer *timer2;
QTimer *timer3;

game::game(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::game)

{
    ui->setupUi(this);

    //timer
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(myslot()));
    timer->start();

    timer2 = new QTimer(this);
    timer2->setInterval(10);
    connect(timer2,SIGNAL(timeout()),this,SLOT(run()));
    timer2->start();

    timer3 = new QTimer(this);
    timer3->setInterval(0.01);
    connect(timer3,SIGNAL(timeout()),this,SLOT(myslot2()));
    timer3->start(1);


}
void game::run(){

    ui->label_9->move(QPoint(ui->label_9->x()-2,240));
    ui->label_8->move(QPoint(ui->label_8->x()-2,240));
    ui->label_13->move(QPoint(ui->label_13->x()-2,240));
    ui->label_12->move(QPoint(ui->label_12->x()-2,240));
    ui->label_6->move(QPoint(ui->label_6->x()-2,240));
    ui->label_11->move(QPoint(ui->label_11->x()-2,240));
    ui->label_10->move(QPoint(ui->label_10->x()-2,240));
    ui->label_7->move(QPoint(ui->label_7->x()-2,240));

    if(ui->label_9->x()<-100){
        ui->label_9->move(QPoint(ui->label_9->x()+1100,240));
        ui->label_9->show();
    }
    if(ui->label_8->x()<-100){
        ui->label_8->move(QPoint(ui->label_8->x()+1100,240));
        ui->label_8->show();
    }
    if(ui->label_13->x()<-100){
        ui->label_13->move(QPoint(ui->label_13->x()+1100,240));
        ui->label_13->show();
    }
    if(ui->label_12->x()<-100){
        ui->label_12->move(QPoint(ui->label_12->x()+1100,240));
        ui->label_12->show();
    }
    if(ui->label_6->x()<-100){
        ui->label_6->move(QPoint(ui->label_6->x()+1100,240));
        ui->label_6->show();
    }
    if(ui->label_11->x()<-100){
        ui->label_11->move(QPoint(ui->label_11->x()+1100,240));
        ui->label_11->show();
    }
    if(ui->label_10->x()<-100){
        ui->label_10->move(QPoint(ui->label_10->x()+1100,240));
        ui->label_10->show();
    }
    if(ui->label_7->x()<-100){
        ui->label_7->move(QPoint(ui->label_7->x()+1100,240));
        ui->label_7->show();
    }
}

void game::myslot()
{
    a--;
    ui->timenumber->setText(QString::number(a));
    if(a==0)
    {
        scorewindow = new score();
        scorewindow->setWindowTitle("S c o r e");
        scorewindow->getpoint(point);
        scorewindow->show();
        close();
    }
}

void game::myslot2(){

    ui->pointnumber->setText(QString::number(point));
}

void game::keyPressEvent(QKeyEvent *event){

    if(event->key()==Qt::Key_L)
        if(ui->label_9->x()>50&&ui->label_9->x()<150){
            ui->label_9->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_L)
        if(ui->label_8->x()>50&&ui->label_8->x()<150){
            ui->label_8->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_A)
        if(ui->label_13->x()>50&&ui->label_13->x()<150){
            ui->label_13->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_A)
        if(ui->label_12->x()>50&&ui->label_12->x()<150){
            ui->label_12->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_L)
        if(ui->label_6->x()>50&&ui->label_6->x()<150){
            ui->label_6->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_A)
        if(ui->label_11->x()>50&&ui->label_11->x()<150){
            ui->label_11->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_A)
        if(ui->label_10->x()>50&&ui->label_10->x()<150){
            ui->label_10->hide();
            point=point+10;
        }
    if(event->key()==Qt::Key_L)
        if(ui->label_7->x()>50&&ui->label_7->x()<150){
            ui->label_7->hide();
            point=point+10;
        }
}

game::~game()
{
    delete ui;
}
