#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //栈控件使用
    //设置默认定位    scrollArea
    ui->stackedWidget->setCurrentIndex(0);

    //scrollArea按钮
    connect(ui->btn_scrollArea, &QPushButton::clicked, [=](){
        ui->stackedWidget->setCurrentIndex(0);
    });

    //toolBox按钮
    connect(ui->btn_toolBox, &QPushButton::clicked, [=](){
        ui->stackedWidget->setCurrentIndex(2);
    });

    //TabWidget按钮
    connect(ui->btn_tabWidget, &QPushButton::clicked, [=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    //下拉框
    ui->btn_select->addItem("奔驰");
    ui->btn_select->addItem("宝马");
    ui->btn_select->addItem("奥迪");

    //点击按钮  选中奔驰
    connect(ui->btn_Benz, &QPushButton::clicked, [=](){
        // ui->btn_select->setCurrentIndex(0);
        ui->btn_select->setCurrentText("奔驰");
    });
}

Widget::~Widget()
{
    delete ui;
}
