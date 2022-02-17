// This file is a part of "Candle" application.
// This file was originally ported from "PointSegment.java" class
// of "Universal GcodeSender" application written by Will Winder
// (https://github.com/winder/Universal-G-Code-Sender)

// Copyright 2015-2016 Hayrullin Denis Ravilevich

#ifndef POINTSEGMENT_H
#define POINTSEGMENT_H

#include <QVector>
#include <QVector3D>
#include <QScopedPointer>

#include "arcproperties.h"
#include "basesegment.h"

class PointSegment : public BaseSegment
{
public:
    PointSegment() { }

    PointSegment(const PointSegment &ps) : BaseSegment(ps)
    {
        if (isArc()) {
            m_arcProperties.reset(new ArcProperties{ps.getRadius(), ps.center()});
        }
    }

    PointSegment(const QVector3D& p, int num) : BaseSegment(p, num) { }
    PointSegment(const QVector3D& p, int num, const QVector3D& center, double radius, bool clockwise) :
        BaseSegment(p, num),
        m_arcProperties(new ArcProperties{radius, center})
    {
        setIsArc(true);
        setIsClockwise(clockwise);
    }

    const QVector3D& point() const { return getPoint(); }
    QVector<double> points() const { return QVector<double>({ point().x(), point().y() }); }

    const QVector3D& center() const { return m_arcProperties ? m_arcProperties->center : point(); }

    double getRadius() const { return m_arcProperties ? m_arcProperties->radius : 0; }

private:
    QScopedPointer<ArcProperties> m_arcProperties;
};

#endif // POINTSEGMENT_H
