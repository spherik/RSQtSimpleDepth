#include "mainwindow.h"
#include <QApplication>

#pragma comment(lib, "advapi32")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
