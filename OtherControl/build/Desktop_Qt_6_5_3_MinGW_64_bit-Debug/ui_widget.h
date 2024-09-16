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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *page_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *page_5;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_3;
    QPushButton *btn_scrollArea;
    QPushButton *btn_tabWidget;
    QPushButton *btn_toolBox;
    QComboBox *btn_select;
    QPushButton *btn_Benz;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 181, 201));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(50, 20, 121, 151));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 109, 206));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout->addWidget(pushButton_10);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout->addWidget(pushButton_9);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_4);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        tabWidget = new QTabWidget(page_6);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 40, 191, 141));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        stackedWidget->addWidget(page_6);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        toolBox = new QToolBox(page_5);
        toolBox->setObjectName("toolBox");
        toolBox->setGeometry(QRect(70, 30, 91, 141));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 91, 69));
        toolBox->addItem(page, QString::fromUtf8("\345\256\266\344\272\272"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 91, 69));
        toolBox->addItem(page_2, QString::fromUtf8("\346\234\213\345\217\213"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 91, 69));
        toolBox->addItem(page_3, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        stackedWidget->addWidget(page_5);
        btn_scrollArea = new QPushButton(Widget);
        btn_scrollArea->setObjectName("btn_scrollArea");
        btn_scrollArea->setGeometry(QRect(250, 10, 80, 31));
        btn_tabWidget = new QPushButton(Widget);
        btn_tabWidget->setObjectName("btn_tabWidget");
        btn_tabWidget->setGeometry(QRect(250, 140, 80, 31));
        btn_toolBox = new QPushButton(Widget);
        btn_toolBox->setObjectName("btn_toolBox");
        btn_toolBox->setGeometry(QRect(250, 70, 80, 31));
        btn_select = new QComboBox(Widget);
        btn_select->setObjectName("btn_select");
        btn_select->setGeometry(QRect(80, 260, 81, 21));
        btn_Benz = new QPushButton(Widget);
        btn_Benz->setObjectName("btn_Benz");
        btn_Benz->setGeometry(QRect(80, 330, 80, 31));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 240, 131, 91));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\347\231\276\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\350\260\267\346\255\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\345\277\205\345\272\224", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Widget", "\345\256\266\344\272\272", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Widget", "\346\234\213\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Widget", "\351\273\221\345\220\215\345\215\225", nullptr));
        btn_scrollArea->setText(QCoreApplication::translate("Widget", "scrollArea", nullptr));
        btn_tabWidget->setText(QCoreApplication::translate("Widget", "tabWidget", nullptr));
        btn_toolBox->setText(QCoreApplication::translate("Widget", "toolBox", nullptr));
        btn_Benz->setText(QCoreApplication::translate("Widget", "selectBenz", nullptr));
        label->setText(QCoreApplication::translate("Widget", "hello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
