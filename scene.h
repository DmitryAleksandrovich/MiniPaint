#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include "shape.h"

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
    float startCoordSceneX;
    float startCoordSceneY;
};

#endif // SCENE_H
