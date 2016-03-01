#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include "shape.h"

enum Mode
{
    isDraw = 1,
    isScale
};

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    Scene(QObject *parent = 0);
private:
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
private:
    Shape* item;
    Mode mode;
    int shapeName;
    float startCoordSceneX;
    float startCoordSceneY;
    float setScreenPosX;
    float setScreenPosY;
    enum{vScale = 2};
public:
    enum{rectangle = 1};
    enum{triangle = 2};
    enum{ellips = 3};
public:
    void SetFigure(int idFigure);
};

#endif // SCENE_H
