// This file is a part of "Candle" application.
// This file was originally ported from "LineSegment.java" class
// of "Universal GcodeSender" application written by Will Winder
// (https://github.com/winder/Universal-G-Code-Sender)

// Copyright 2015-2016 Hayrullin Denis Ravilevich

#include "linesegment.h"
#include <QDebug>

QList<QVector3D> LineSegment::getPointArray() const
{
    QList<QVector3D> pointarr;
    pointarr.append(getPoint());
    pointarr.append(m_second);
    return pointarr;
}

QList<double> LineSegment::getPoints() const
{
    QList<double> points;
    points.append(getPoint().x());
    points.append(getPoint().y());
    points.append(getPoint().z());
    points.append(m_second.x());
    points.append(m_second.y());
    points.append(m_second.z());
    return points;
}

bool LineSegment::contains(const QVector3D &point) const
{
    double delta;
    QVector3D line = getEnd() - getStart();
    QVector3D pt = point - getStart();

    delta = (line - pt).length() - (line.length() - pt.length());

    return delta < 0.01;
}


