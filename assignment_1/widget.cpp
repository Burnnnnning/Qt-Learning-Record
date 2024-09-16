#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

//需求：实现两个按钮，一个Open，一个Close

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setFixedSize(300, 300);

    //Open
    QWidget *win = new QWidget;
    win->setFixedSize(300, 300);
    win->setWindowTitle("New Widget");
    QPushButton *btn = new QPushButton("Close", win);
    btn->move(100, 200);
    connect(btn, &QPushButton::clicked, win, &QWidget::close);


    QPushButton *openBtn = new QPushButton("Open", this);
    openBtn->move(100, 100);
    connect(openBtn, &QPushButton::clicked, win, &QWidget::show);

    //Close
    QPushButton *closeBtn = new QPushButton("Close", this);
    closeBtn->move(100, 200);
    connect(closeBtn, &QPushButton::clicked, this, &QWidget::close);

}

Widget::~Widget()
{
    delete ui;
}
