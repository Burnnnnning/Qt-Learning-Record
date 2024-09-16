#include "widget.h"
#include "ui_widget.h"
#include <QColor>
#include <QBrush>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::paintEvent(QPaintEvent *)
{
    // //实例化画家对象   this指代的是绘图设备
    // QPainter painter(this);

    // //设置画笔
    // QPen pen(QColor(255, 0, 0));
    // //设置画笔宽度
    // pen.setWidth(3);
    // //设置画笔风格
    // pen.setStyle(Qt::DotLine);
    // //让画家使用这个画笔
    // painter.setPen(pen);

    // //设置画刷
    // QBrush brush(Qt::cyan);
    // //设置画刷风格
    // brush.setStyle(Qt::Dense3Pattern);
    // //让画家使用画笔
    // painter.setBrush(brush);


    // //画线
    // painter.drawLine(QPoint(0, 0), QPoint(100, 100));
    // //画圆    椭圆
    // painter.drawEllipse(QPoint(100, 100), 50, 50);
    // //画矩形
    // painter.drawRect(20, 20, 50, 50);
    // //画文字
    // painter.drawText(QRect(20, 200, 150, 50), "好好学习，天天向上");


    // //painter的高级设置
    // QPainter painter(this);

    // //画圆
    // painter.drawEllipse(QPoint(100, 50), 50, 50);

    // //设置抗锯齿能力   效率较低
    // painter.setRenderHint(QPainter::Antialiasing);
    // painter.drawEllipse(QPoint(200, 50), 50, 50);

    // //画矩形
    // painter.drawRect(QRect(200, 200, 50, 50));

    // //移动画家
    // painter.translate(100, 0);

    // //保存画家状态
    // painter.save();

    // //还原画家保存状态
    // painter.restore();

    // painter.drawRect(QRect(200, 200, 50, 50));


    // 利用画家 画资源图片



}

Widget::~Widget()
{
    delete ui;
}
