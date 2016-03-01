#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new Scene(this);
    scene->setSceneRect(0, 0, MainWindow::width(), MainWindow::height());
    QGraphicsView* view = new QGraphicsView(this);
    view->setScene(scene);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    scene->setSceneRect(0,0, MainWindow::width(), MainWindow::height());
    QMainWindow::resizeEvent(event);
}

void MainWindow::on_actionCreateRectangle_triggered()
{
    scene->SetFigure(Scene::rectangle);
}

void MainWindow::on_actionCreateTriangle_triggered()
{
    scene->SetFigure(Scene::triangle);
}

void MainWindow::on_actionCreateEllipse_triggered()
{
    scene->SetFigure(Scene::ellips);
}

void MainWindow::on_actionClearScreen_triggered()
{
    scene->clear();
    scene->update(0, 0, MainWindow::width(), MainWindow::height());
}
