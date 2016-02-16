#ifndef SHAPE_H
#define SHAPE_H
#include <QPainter>
#include <QPoint>
#include <QSize>
#include <QRect>
#include <QPaintEvent>
#include <QWidget>
#include <QGraphicsItem>

class Shape : public QObject, public QGraphicsItem
{
public:
    Shape(QObject *parent = 0);
    QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*) = 0;
    void setSecondX(float sX);
    void setSecondY(float sY);
    float getFirstX() const;
    float getFirstY() const;
    float getSecondX() const;
    float getSecondY() const;
private:
    float firstX;
    float firstY;
    float secondX;
    float secondY;
};

#endif // SHAPE_H
