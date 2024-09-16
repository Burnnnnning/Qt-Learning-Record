#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    //点击获取当前值
    connect(ui->btn_display, &QPushButton::clicked, [=](){
        qDebug() << ui->widget->displayNum();
    });

    //点击设置值
    connect(ui->btn_set, &QPushButton::clicked, [=](){
        ui->widget->setNum();
    });
}

Widget::~Widget()
{
    delete ui;
}
