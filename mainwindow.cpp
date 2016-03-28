#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new Scene(new Rectangle, this); // Create scene for rendering figures
    scene->setSceneRect(0, 0, MainWindow::width(), MainWindow::height());
    QGraphicsView* view = new QGraphicsView(this);
    view->setScene(scene); // Set the scene
    setCentralWidget(view); // Set the widget on the full screen
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Scene redraws when the window is resized*/
void MainWindow::resizeEvent(QResizeEvent* event)
{
    scene->setSceneRect(0,0, MainWindow::width(), MainWindow::height());
    QMainWindow::resizeEvent(event);
}

void MainWindow::on_actionCreateRectangle_triggered()
{
    scene->SetFigure(rectangle);
}

void MainWindow::on_actionCreateTriangle_triggered()
{
    scene->SetFigure(triangle);
}

void MainWindow::on_actionCreateEllipse_triggered()
{
    scene->SetFigure(ellips);
}

void MainWindow::on_actionClearScreen_triggered()
{
    scene->clear();
    scene->update(0, 0, MainWindow::width(), MainWindow::height());
}
