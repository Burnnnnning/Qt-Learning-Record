#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ui->actionnew->setIcon(QIcon("文件的绝对地址"));

    //使用添加Qt资源  ": + 前缀名 + 文件名"
    // ui->actionnew->setIcon(QIcon(":/相对地址"));
    // ui->actionopen->setIcon(QIcon(":/相对地址"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
