#include "scene.h"
#include "rectangle.h"
#include "triangle.h"
#include "ellipse.h"

Scene::Scene(Shape *sItem, QObject *parent) : QGraphicsScene(parent), shapeName(1), mode(isDraw),
    item(sItem)
{
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    if(((event->scenePos().x() >= setScreenPosX) && event->scenePos().x() <= setScreenPosX + vScale) &&
          ((event->scenePos().y() >= setScreenPosY) && event->scenePos().y() <= setScreenPosY + vScale))
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
        case rectangle:
            item = new Rectangle(this);
            break;
        case triangle:
            item = new Triangle(this);
            break;
        case ellips:
            item = new Ellipse(this);
            break;
        default:
            break;
        }
        item->setPos(event->scenePos());
        /* Remember the starting position. It's necessary for resizing*/
        startCoordSceneX = event->scenePos().x();
        startCoordSceneY = event->scenePos().y();
        addItem(item);
    }
}

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    /* Remember position X and Y for scale. */
    setScreenPosX = event->scenePos().x();
    setScreenPosY = event->scenePos().y();
    /* Resizeng the figure. */
    item->setSecondX(event->scenePos().x() - startCoordSceneX);
    item->setSecondY(event->scenePos().y() - startCoordSceneY);
    update(QRectF(0,0,width(), height()));
}

void Scene::SetFigure(int idFigure)
{
    shapeName = idFigure;
}
