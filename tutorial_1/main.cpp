#include "widget.h"
#include <QApplication> //包含一个应用程序类的头文件

//main程序入口，argc表示命令行变量的数量，argv表示命令行变量的数组
int main(int argc, char *argv[])
{
    //a表示应用程序对象，在Qt中，应用程序对象有且仅有一个
    QApplication a(argc, argv);
    //窗口对象，Widget父类 -> QWidget
    Widget w;
    //窗口对象默认不会显示，必须调用show方法显示窗口
    w.show();

    //让应用程序对象进入消息循环
    //让代码阻塞到这行
    //类似于
    // while(true)
    // {
    //     if(点击关闭按钮)
    //     {
    //         break;
    //     }
    // }
    return a.exec();
}
