#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <iostream>
#include "QtDesignerWidget1.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    // ����������
    QMainWindow mainWindow;
    mainWindow.setGeometry(100, 100, 600, 400);

    // ���� QtDesignerWidget1 ����
    QtDesignerWidget1* designerWidget = new QtDesignerWidget1(&mainWindow);
    // �� QtDesignerWidget1 ���Ϊ�����ڵ����Ĳ���
    mainWindow.setCentralWidget(designerWidget);

    //// ������ť
    //QPushButton button("Click me", &mainWindow);
    //button.setGeometry(100, 100, 100, 30);

    //// ���Ӱ�ť�ĵ���¼�
    //QObject::connect(&button, &QPushButton::clicked, [&]() {
    //    std::cout << "Button clicked!" << std::endl;
    //    });

    // ��ʾ������
    mainWindow.show();

    // ����Ӧ�ó����¼�ѭ��
    return app.exec();
}
