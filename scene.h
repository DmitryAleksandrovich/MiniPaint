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

enum
{
    rectangle = 1,
    triangle,
    ellips
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
    float startCoordSceneX; // Coord X for resizing
    float startCoordSceneY; // Coord Y for resizing
    float setScreenPosX; // Coord X for scale
    float setScreenPosY; // Coord Y for scale
    enum{vScale = 2};
public:
    void SetFigure(int idFigure);
};

#endif // SCENE_H
