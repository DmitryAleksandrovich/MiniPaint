#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* dialog = new MainWindow;

    dialog->show();

    return a.exec();
}
