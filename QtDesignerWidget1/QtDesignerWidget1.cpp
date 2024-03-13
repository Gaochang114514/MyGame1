#include "QtDesignerWidget1.h"

QtDesignerWidget1::QtDesignerWidget1(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* button = new QPushButton("8==D~~", this);
    button->setGeometry(100, 100, 100, 30);

    connect(button, &QPushButton::clicked, this, &QtDesignerWidget1::onButtonClick);

    show();
}

void QtDesignerWidget1::onButtonClick() {
    qDebug() << "OK!";
}
