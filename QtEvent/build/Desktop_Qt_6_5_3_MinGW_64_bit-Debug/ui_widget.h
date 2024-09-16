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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    myLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_stop;
    QPushButton *btn_start;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(508, 300);
        label = new myLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 231, 61));
        label->setFrameShape(QFrame::Box);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 231, 61));
        label_2->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 190, 231, 61));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);
        btn_stop = new QPushButton(Widget);
        btn_stop->setObjectName("btn_stop");
        btn_stop->setGeometry(QRect(350, 80, 80, 21));
        btn_start = new QPushButton(Widget);
        btn_start->setObjectName("btn_start");
        btn_start->setGeometry(QRect(350, 140, 80, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        btn_stop->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
        btn_start->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
