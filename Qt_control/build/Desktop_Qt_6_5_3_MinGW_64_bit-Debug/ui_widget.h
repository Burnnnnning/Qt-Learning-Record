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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rBtnMan;
    QRadioButton *rBtnWomen;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(600, 400);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 50, 80, 21));
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(70, 100, 71, 31));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 160, 61, 72));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        rBtnMan = new QRadioButton(groupBox);
        rBtnMan->setObjectName("rBtnMan");

        verticalLayout->addWidget(rBtnMan);

        rBtnWomen = new QRadioButton(groupBox);
        rBtnWomen->setObjectName("rBtnWomen");

        verticalLayout->addWidget(rBtnWomen);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(150, 160, 71, 72));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_2->addWidget(radioButton_4);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(70, 240, 121, 116));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName("checkBox");

        verticalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_3->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_3->addWidget(checkBox_4);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(260, 80, 256, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "\346\265\267\350\264\274\346\227\227", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
        rBtnMan->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        rBtnWomen->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\251\232\345\220\246", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "\345\267\262\345\251\232", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "\346\234\252\345\251\232", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\351\227\256\345\215\267\350\260\203\346\237\245", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\344\273\267\346\240\274\345\256\236\346\203\240", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "\345\217\243\346\204\237\345\245\275", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\210\260\344\275\215", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Widget", "\347\216\257\345\242\203\344\274\230\347\276\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
