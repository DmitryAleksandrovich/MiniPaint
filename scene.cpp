#include "scene.h"
#include "rectangle.h"
#include "triangle.h"
#include "ellipse.h"

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{

}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    item = new Rectangle(this);
    item->setPos(event->scenePos());
    addItem(item);
    startCoordSceneX = event->scenePos().x();
    startCoordSceneY = event->scenePos().y();
}

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    item->setSecondX(event->scenePos().x() - startCoordSceneX);
    item->setSecondY(event->scenePos().y() - startCoordSceneY);
    update(QRectF(0,0,width(), height()));

}

