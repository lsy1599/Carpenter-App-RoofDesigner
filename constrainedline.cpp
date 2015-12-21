#include "constrainedline.h"
#include <QDebug>

ConstrainedLine::ConstrainedLine(ConstrainedPoint* start, ConstrainedPoint* end)
{
    this->horizontal = false;
    this->vertical = false;
    this->start = start;
    this->end = end;
    this->distanceFixed = false;
}

ConstrainedLine* ConstrainedLine::horizontallyConstrained() {
    qDebug() << "horizontal constrained";
    this->horizontal = true;
    return this;
}

ConstrainedLine* ConstrainedLine::verticallyConstrained() {
    qDebug() << "vertical constrained";
    this->vertical = true;
    return this;
}

ConstrainedLine::operator QString() const {
    return "Line";
}

bool ConstrainedLine::isVerticallyConstrained() {
    return this->vertical;
}

bool ConstrainedLine::isHorizontalConstrained() {
    return this->horizontal;
}

bool ConstrainedLine::isDistanceFixed() {
    return this->distanceFixed;
}

ConstrainedLine* ConstrainedLine::setDesiredDistance(float distance) {
    this->distanceFixed = true;
    this->desiredDistance = distance;
    return this;
}

float ConstrainedLine::getDesiredDistance() {
    return this->desiredDistance;
}