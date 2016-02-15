#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* dialog = new MainWindow;

    dialog->show();

    /*MyWindow* window = new MyWindow();
    window->show();
    strin* st = new strin();
    QObject::connect(window, SIGNAL(Simple(QString)), st, SLOT(Simple(QString)));
    QObject::connect(window, SIGNAL(UpperRegister(QString)), st, SLOT(UpperRegister(QString)));

    QSpinBox* sb = new QSpinBox;
    QSlider* sl = new QSlider(Qt::Horizontal);
    sb->setMaximum(100);
    sl->setMaximum(100);
    QWidget* window = new QWidget;

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(sb);
    layout->addWidget(sl);
    window->setLayout(layout);

    window->show();
    QObject::connect(sb, SIGNAL(valueChanged(int)), sl, SLOT(setValue(int)));
    QObject::connect(sl, SIGNAL(valueChanged(int)), sb, SLOT(setValue(int)));*/

    return a.exec();
}
