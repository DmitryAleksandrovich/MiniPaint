#ifndef SHAPE_H
#define SHAPE_H
#include <QPainter>
#include <QGraphicsItem>

class Shape : public QObject, public QGraphicsItem
{
public:
    Shape(QObject *parent = 0);
    QRectF boundingRect() const override; // The function defines the outer bounds of the item as a rectangle
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
    enum Coord
    {
        firstCoord = 1,
        secondCoord
    };
};

#endif // SHAPE_H
