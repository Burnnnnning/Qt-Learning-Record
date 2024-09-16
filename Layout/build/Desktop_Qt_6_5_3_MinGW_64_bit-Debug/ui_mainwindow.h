/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(400, 300));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 179, 401, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 70, 401, 71));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
