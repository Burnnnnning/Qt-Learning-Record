#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
#include <QRgb>
#include <QPicture>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // //Pixmap作为绘图设备，专门为平台做了显示优化
    // QPixmap pix(300, 300);

    // //填充颜色
    // pix.fill(Qt::white);

    // //声明画家
    // QPainter painter(&pix);

    // painter.setPen(QPen(Qt::green));
    // painter.drawEllipse(QPoint(150, 150), 100, 100);

    // //保存
    // pix.save("E:\\OneDrive\\桌面\\pix.png");

    // //QImage作为绘图设备，可以对像素进行访问
    // QImage img(300, 300, QImage::Format_RGB32);
    // img.fill(Qt::white);

    // QPainter painter(&img);
    // painter.setPen(QPen(Qt::blue));
    // painter.drawEllipse(QPoint(150, 150), 100, 100);

    // //保存
    // img.save("E:\\OneDrive\\桌面\\img.png");

    //QPicture绘图设备，可以记录和重现绘图指令
    QPicture pic;
    QPainter painter;

    //开始往pic上画
    painter.begin(&pic);
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150, 150), 100, 100);
    painter.end();
    //结束画画

    //保存到磁盘中
    pic.save("E:\\OneDrive\\桌面\\pic.zt");

}

void Widget::paintEvent(QPaintEvent *)
{
    // QPainter painter(this);

    // //利用QImage对像素进行修改
    // QImage img;
    // img.load("图片路径");

    // //修改像素点
    // for(int i=50; i<100; i++)
    // {
    //     for(int j=50; j<100; j++)
    //     {
    //         QRgb value = qRgb(255, 0, 0);
    //         img.setPixel(i, j, value);
    //     }
    // }

    // painter.drawImage(0, 0, img);

    QPainter painter(this);

    //重现QPicture的绘图指令
    QPicture pic;
    pic.load("E:\\OneDrive\\桌面\\pic.zt");
    painter.drawPicture(0, 0, pic);
}

Widget::~Widget()
{
    delete ui;
}
