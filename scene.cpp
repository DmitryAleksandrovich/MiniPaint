#include "scene.h"
#include "rectangle.h"
#include "triangle.h"
#include "ellipse.h"

Scene::Scene(QObject *parent) : QGraphicsScene(parent), shapeName(1), mode(isDraw)
{
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    if(((event->scenePos().x() >= setScreenPosX) && event->scenePos().x() <= setScreenPosX+2) &&
          ((event->scenePos().y() >= setScreenPosY) && event->scenePos().y() <= setScreenPosY+2))
    {
        mode = isScale;
    }
    else
    {
        mode = isDraw;
    }
    if(mode == isDraw)
    {
        switch (shapeName)
        {
        case 1:
            item = new Rectangle(this);
            break;
        case 2:
            item = new Triangle(this);
            break;
        case 3:
            item = new Ellipse(this);
            break;
        default:
            break;
        }
        item->setPos(event->scenePos());
        startCoordSceneX = event->scenePos().x();
        startCoordSceneY = event->scenePos().y();
        addItem(item);
    }
}

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    setScreenPosX = event->scenePos().x();
    setScreenPosY = event->scenePos().y();
    item->setSecondX(event->scenePos().x() - startCoordSceneX);
    item->setSecondY(event->scenePos().y() - startCoordSceneY);
    update(QRectF(0,0,width(), height()));
}

void Scene::SetFigure(int idFigure)
{
    shapeName = idFigure;
}
