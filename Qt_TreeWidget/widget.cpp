#include "widget.h"
#include "ui_widget.h"
#include <QStringList>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //treeWidget树控件使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");

    QTreeWidgetItem *li_item = new QTreeWidgetItem(QStringList() << "力量");
    QTreeWidgetItem *min_item = new QTreeWidgetItem(QStringList() << "敏捷");
    QTreeWidgetItem *zhi_item = new QTreeWidgetItem(QStringList() << "智力");

    //加载顶层节点
    ui->treeWidget->addTopLevelItem(li_item);
    ui->treeWidget->addTopLevelItem(min_item);
    ui->treeWidget->addTopLevelItem(zhi_item);

    //追加子节点
    QStringList hero_1;
    hero_1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
    QTreeWidgetItem *l1 = new QTreeWidgetItem(hero_1);

    li_item->addChild(l1);

}

Widget::~Widget()
{
    delete ui;
}
