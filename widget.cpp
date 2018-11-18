#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer.setInterval(2000);
    timer.start();
    connect(&timer, SIGNAL(timeout()),this,SLOT(back()));
    connect(&timer, SIGNAL(timeout()),this,SLOT(back1()));
    connect(&timer, SIGNAL(timeout()),this,SLOT(back2()));
    connect(ui->kormit, SIGNAL(clicked()),this,SLOT(move()));
    connect(ui->pushButton_2, SIGNAL(clicked()),this,SLOT(move1()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this,SLOT(move2()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::move()
{
    int current = ui->progressBar_2->value();
    ui->progressBar_2->setValue(current+1);

}
void Widget::move1()
{
    int current = ui->progressBar->value();
    ui->progressBar->setValue(current+1);

}
void Widget::move2()
{
    int current = ui->progressBar_3->value();
    ui->progressBar_3->setValue(current+1);

}

void Widget::back()
{
    int current = ui->progressBar->value();
    if (current < 50){
        ui->label->setPixmap(QPixmap(":/files/кот.jpg"));
    }
    if (current >50 and current < 75){
        ui->label->setPixmap(QPixmap(":/files/кот1.jpg"));
    }
    if (current >75){
        ui->label->setPixmap(QPixmap(":/files/кот2.jpg"));
    }
    if (current == 0){
        window()->close();
    }
    ui->progressBar->setValue(current-1);
    if(current == 0){
        this->close();
    }
}
void Widget::back1()
{
    int current = ui->progressBar_2->value();
    if (current < 50){
        ui->label->setPixmap(QPixmap(":/files/кот.jpg"));
    }
    if (current >50 and current < 75){
        ui->label->setPixmap(QPixmap(":/files/кот1.jpg"));
    }
    if (current >75){
        ui->label->setPixmap(QPixmap(":/files/кот2.jpg"));
    }
    if (current == 0){
        window()->close();
    }
    ui->progressBar_2->setValue(current-1);
    if(current == 0){
        this->close();
    }
}
void Widget::back2()
{
    int current = ui->progressBar_3->value();
    if (current < 50){
        ui->label->setPixmap(QPixmap(":/files/кот.jpg"));
    }
    if (current >50 and current < 75){
        ui->label->setPixmap(QPixmap(":/files/кот1.jpg"));
    }
    if (current >75){
        ui->label->setPixmap(QPixmap(":/files/кот2.jpg"));
    }
    if (current == 0){
        window()->close();
    }
    ui->progressBar_3->setValue(current-1);
    if(current == 0){
        this->close();
    }
}


