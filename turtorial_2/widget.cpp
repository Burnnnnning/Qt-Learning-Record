#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

//Teacher类 老师类
//Student类 学生类
//需求：下课后，老师会触发一个饿了的信号，学生相应信号，请客吃饭


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->zt = new Teacher(this);

    //创建一个学生对象
    this->st = new Student(this);

    // //老师饿了，学生请客的连接
    // connect(zt, &Teacher::hungry, st, &Student::treat);

    // //调用下课函数
    // classIsOver();


    //连接带参数的信号和槽
    // void (Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
    // void (Student:: *studentSlot)(QString) = &Student::treat;

    // connect(zt, teacherSignal, st, studentSlot);
    // classIsOver();


    //点击一个下课的按钮，再触发下课
    QPushButton *btn = new QPushButton("下课", this);
    //重置窗口大小
    this->resize(600, 400);

    //点击按钮，触发下课
    // connect(btn, &QPushButton::clicked, this, &Widget::classIsOver);

    //无参信号和槽连接
    void (Teacher:: *teacherSignal_2)(void) = &Teacher::hungry;
    void (Student:: *studentSlot_2)(void) = &Student::treat;
    connect(zt, teacherSignal_2, st, studentSlot_2);

    //信号连接信号
    connect(btn, &QPushButton::clicked, zt, teacherSignal_2);

    //断开信号
    // disconnect(zt, teacherSignal_2, st, studentSlot_2);

    //拓展
    //1、信号是可以连接信号
    //2、一个信号可以来连接多个槽函数
    //3、多个信号可以连接一个槽函数
    //4、信号和槽函数的参数，必须类型一一对应
    //5、信号和槽函数的参数个数，信号的参数个数可以多于槽函数的参数个数，但类型必须对应

    //Qt4版本以前的信号和槽函数的连接方式
    //利用Qt4信号槽，连接无参版本
    //Qt4版本优点：参数直观；缺点：类型不做检测
    //Qt4版本 底层SIGNAL("hungry")  SLOT("treat")
    //Qt5以上支持Qt4的版本写法
    // connect(zt, SIGNAL(hungry()), zt, SLOT(treat()));


    //Lambda匿名函数介绍
    // QPushButton *btn_2 = new QPushButton(this);

    // [btn](){
    //     btn->setText("aaaa");
    //     btn_2->setText("bbbb"); //btn2看不到,报错
    // };

    // QPushButton *myBtn = new QPushButton(this);
    // QPushButton *myBtn_2 = new QPushButton(this);
    // myBtn_2->move(100, 100);
    // int m = 10;

    // connect(myBtn, &QPushButton::clicked, this, [m]()mutable {m = 100 + 10;qDebug() << m;});
    // connect(myBtn_2, &QPushButton::clicked, this, [=](){qDebug() << m;});

    // qDebug() << m;

    // int ret = []()->int{return 1000;}();

    // qDebug() << "ret = " << ret;


    //利用lambda表达式，实现点击按钮，关闭窗口
    QPushButton *btn_2 = new QPushButton(this);
    btn_2->setText("关闭");
    btn_2->move(100, 0);

    connect(btn_2, &QPushButton::clicked, this, [=](){
        // this->close();
        // st->treat();

        btn_2->setText("aaaa");
    });


    //Lambda表达式 最常用[=](){}


}

void Widget::classIsOver()
{
    //调用后，触发老师饿了的信号
    // emit this->zt->hungry();

    emit this->zt->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}
