#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <iostream>
#include "QtDesignerWidget1.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    // 创建主窗口
    QMainWindow mainWindow;
    mainWindow.setGeometry(100, 100, 600, 400);

    // 创建 QtDesignerWidget1 对象
    QtDesignerWidget1* designerWidget = new QtDesignerWidget1(&mainWindow);
    // 将 QtDesignerWidget1 添加为主窗口的中心部件
    mainWindow.setCentralWidget(designerWidget);

    //// 创建按钮
    //QPushButton button("Click me", &mainWindow);
    //button.setGeometry(100, 100, 100, 30);

    //// 连接按钮的点击事件
    //QObject::connect(&button, &QPushButton::clicked, [&]() {
    //    std::cout << "Button clicked!" << std::endl;
    //    });

    // 显示主窗口
    mainWindow.show();

    // 运行应用程序事件循环
    return app.exec();
}
