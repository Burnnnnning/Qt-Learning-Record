#include "widget.h"
#include "ui_widget.h"
#include <QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //启动定时器
    //参数1   间隔  单位为毫秒
    startTimer(1000);

    //启动定时器的第二种方式
    QTimer *timer = new QTimer(this);
    //启动定时器，并以0.5秒间隔加1
    timer->start(500);

    connect(timer, &QTimer::timeout, [=](){
        static int number = 1;

        ui->label_3->setText(QString::number(number++));
    });

    //点击暂停按钮，实现停止计时器
    connect(ui->btn_stop, &QPushButton::clicked, [=](){
        timer->stop();
    });

    //点击开始按钮，实现开始计时器
    connect(ui->btn_start, &QPushButton::clicked, [=](){
        timer->start(500);
    });
}

void Widget::timerEvent(QTimerEvent *)
{
    static int number = 1;

    ui->label_2->setText(QString::number(number++));
}

Widget::~Widget()
{
    delete ui;
}
