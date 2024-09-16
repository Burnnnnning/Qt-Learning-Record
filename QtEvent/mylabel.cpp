#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>

myLabel::myLabel(QWidget *parent)
    : QLabel{parent}
{
    //设置鼠标追踪
    setMouseTracking(true);
}

void myLabel::enterEvent(QEnterEvent *event)
{
    qDebug() << "鼠标进入了";
}

void myLabel::leaveEvent(QEvent *)
{
    qDebug() << "鼠标离开了";
}

void myLabel::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        QString str = QString(" 鼠标按下了 x = %1, y = %2, globalX = %3, globalY = %4 ").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;
    }
}

void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
    QString str = QString(" 鼠标移动了 x = %1, y = %2, globalX = %3, globalY = %4 ").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
    qDebug() << str;

}

void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        QString str = QString(" 鼠标释放了 x = %1, y = %2, globalX = %3, globalY = %4 ").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;
    }
}

bool myLabel::event(QEvent *e)
{
    //如果是鼠标按下，在event事件分发中做拦截操作
    if(e->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *ev = static_cast<QMouseEvent *>(e);
        QString str = QString(" Event函数：鼠标按下了 x = %1, y = %2, globalX = %3, globalY = %4 ").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;

        //返回true代表用户自己处理这个事件，不向下分发
        return true;
    }

    //其他事件交给父类处理，默认处理
    return QLabel::event(e);
}

