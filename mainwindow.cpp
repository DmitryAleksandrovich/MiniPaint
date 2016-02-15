#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Scene* scene = new Scene(this);
    scene->setSceneRect(-10, -10, 780, 500);
    QGraphicsView* view = new QGraphicsView(this);
    view->setScene(scene);
    setCentralWidget(view);

}

MainWindow::~MainWindow()
{
    delete ui;
}
