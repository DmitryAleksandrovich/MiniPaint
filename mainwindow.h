#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QAction>
#include <QResizeEvent>
#include "scene.h"
#include "rectangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void resizeEvent(QResizeEvent* event);
private:
    Ui::MainWindow *ui;
    Scene* scene;
private slots:
    void on_actionCreateRectangle_triggered();
    void on_actionCreateTriangle_triggered();
    void on_actionCreateEllipse_triggered();
    void on_actionClearScreen_triggered();
};

#endif // MAINWINDOW_H
