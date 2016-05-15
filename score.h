#ifndef SCORE_H
#define SCORE_H

#include <QWidget>
#include <QLCDNumber>
#include <QtCore>

namespace Ui {
class score;
}

class score : public QWidget
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = 0);
    int getpoint(int);
    ~score();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::score *ui;
};

#endif // SCORE_H
