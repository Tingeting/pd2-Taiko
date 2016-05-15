#include "score.h"
#include "ui_score.h"
#include "game.h"

game *anotherwindow;

score::score(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::score)
{
    ui->setupUi(this);
}

score::~score()
{
    delete ui;
}


void score::on_pushButton_clicked()
{
    anotherwindow = new game();
    anotherwindow->setWindowTitle("T a i k o");
    anotherwindow->show();
    close();

}

int score::getpoint(int score){
    ui->point->setText(QString::number(score));
}

void score::on_pushButton_2_clicked()
{
    close();
}

