#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <QKeyEvent>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    gamewindow = new game();
    gamewindow-> setWindowTitle("T a i k o");
    gamewindow->show();
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}
