#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, [=](){

        QString path = QFileDialog::getOpenFileName(this, "打开文件", "E:\\OneDrive\\桌面");
        // 将路径放入到 lineEdit 中
        ui->lineEdit->setText(path);

        // QFile默认支持的格式是 utf-8
        QFile file(path);   //参数就是读取文件的路径
        file.open(QIODevice::ReadOnly);     //设置打开方式

        // QByteArray array = file.readAll();
        QByteArray array;

        //按行读
        while(!file.atEnd())
        {
            array += file.readLine();
        }

        //将读取的数据放入到 textEdit 中
        ui->textEdit->setText(array);

        //对文件对象进行关闭
        file.close();

        // //进行写文件
        // file.open(QIODevice::Append);
        // file.write("啊啊啊啊啊");
        // file.close();

        //QFileInfo 文件信息类
        QFileInfo info(path);

        qDebug() << "文件大小" << info.size() << "后缀名" << info.suffix() << "文件名称" << info.fileName() << "文件路径" << info.filePath();
        qDebug() << "创建日期" << info.birthTime().toString("yyyy/MM/dd hh:mm:ss");
        qDebug() << "最后修改日期" << info.lastModified().toString("yyyy/MM/dd hh:mm:ss");

    });
}

Widget::~Widget()
{
    delete ui;
}
