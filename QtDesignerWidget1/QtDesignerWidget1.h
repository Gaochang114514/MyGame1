#pragma once
#ifndef QTDESIGNERWIDGET1_H
#define QTDESIGNERWIDGET1_H
#include <QtWidgets/QWidget>
#include <qpushbutton.h>

class QtDesignerWidget1 : public QWidget
{
    Q_OBJECT

public:
    explicit QtDesignerWidget1(QWidget *parent = nullptr);

private slots:
    void onButtonClick();

private:
    QPushButton* button;
};

#endif