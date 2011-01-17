#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel* label = new QLabel( "<big>Hellow</big>Qt" , &w );
    w.show();
    return a.exec();
}
