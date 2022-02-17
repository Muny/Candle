// This file is a part of "Candle" application.
// This file was originally ported from "GcodeViewParse.java" class
// of "Universal GcodeSender" application written by Will Winder
// (https://github.com/winder/Universal-G-Code-Sender)

// Copyright 2015-2016 Hayrullin Denis Ravilevich

#ifndef GCODEVIEWPARSE_H
#define GCODEVIEWPARSE_H

#include <QObject>
#include <QVector3D>
#include <QVector2D>
#include "linesegment.h"
#include "gcodeparser.h"
#include "utils/util.h"

class GcodeViewParse : public QObject
{
    Q_OBJECT
public:
    explicit GcodeViewParse(QObject *parent = 0);
    ~GcodeViewParse();

    const QVector3D &getMinimumExtremes() const { return m_min; }
    const QVector3D &getMaximumExtremes() const { return m_max; }

    double getMinLength() const;
    QSize getResolution() const;
    QList<LineSegment*> toObjRedux(const QList<QString>& gcode, double arcPrecision, bool arcDegreeMode);
    const QList<LineSegment*>& getLineSegmentList() const { return m_lines; }
    const QList<LineSegment*>& getLinesFromParser(const GcodeParser& gp, double arcPrecision, bool arcDegreeMode);

    QList<LineSegment*>& getLines() { return m_lines; }
    const QVector<QList<int>> &getLinesIndexes() const { return m_lineIndexes; }

    void reset();

signals:

public slots:

private:
    bool absoluteMode;
    bool absoluteIJK;

    // Parsed object
    QVector3D m_min, m_max;
    double m_minLength;
    QList<LineSegment*> m_lines;
    QVector<QList<int>> m_lineIndexes;

    // Parsing state.
    QVector3D lastPoint;
    int currentLine; // for assigning line numbers to segments.

    // Debug
    bool debug;
    void testExtremes(const QVector3D& p3d);
    void testExtremes(double x, double y, double z);
    void testLength(const QVector3D &start, const QVector3D &end);
};

#endif // GCODEVIEWPARSE_H
