#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SmallWidget)
{
    ui->setupUi(this);


    //QSpinBox改变    QSlider跟着移动
    void (QSpinBox::*spSignal)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, spSignal, ui->horizontalSlider, &QSlider::setValue);

    //QSliser移动     QSpinBox跟着改变
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox, &QSpinBox::setValue);
}

void SmallWidget::setNum()
{
    ui->spinBox->setValue(50);
}

int SmallWidget::displayNum()
{
    return ui->spinBox->value();
}

SmallWidget::~SmallWidget()
{
    delete ui;
}
