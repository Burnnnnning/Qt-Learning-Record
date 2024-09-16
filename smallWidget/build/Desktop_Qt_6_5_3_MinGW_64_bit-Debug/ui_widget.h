/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "smallwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    SmallWidget *widget;
    QPushButton *btn_display;
    QPushButton *btn_set;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(400, 300);
        widget = new SmallWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 60, 211, 81));
        btn_display = new QPushButton(Widget);
        btn_display->setObjectName("btn_display");
        btn_display->setGeometry(QRect(150, 160, 81, 31));
        btn_set = new QPushButton(Widget);
        btn_set->setObjectName("btn_set");
        btn_set->setGeometry(QRect(150, 210, 81, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn_display->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\225\260\345\255\227", nullptr));
        btn_set->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\225\260\345\255\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
