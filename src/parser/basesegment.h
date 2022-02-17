
#ifndef BASESEGMENT_H
#define BASESEGMENT_H

#include <QVector3D>

class BaseSegment
{
public:
    enum planes {
        XY,
        ZX,
        YZ
    };

    BaseSegment() :
        m_toolhead(0),
        m_speed(0),
        m_spindleSpeed(0),
        m_dwell(false),
        m_isZMovement(false),
        m_isArc(false),
        m_isClockwise(false),
        m_isFastTraverse(false),
        m_isMetric(true),
        m_isAbsolute(true),
        m_lineNumber(0),
        m_plane(XY)
    { }

    BaseSegment(const QVector3D& p, int num) :
        m_toolhead(0),
        m_speed(0),
        m_spindleSpeed(0),
        m_dwell(false),
        m_point(p),
        m_isZMovement(false),
        m_isArc(false),
        m_isClockwise(false),
        m_isFastTraverse(false),
        m_isMetric(true),
        m_isAbsolute(true),
        m_lineNumber(num),
        m_plane(XY)
    { }

    BaseSegment(const QVector3D& p, int num, const BaseSegment& bs) :
        m_toolhead(bs.m_toolhead),
        m_speed(bs.m_speed),
        m_spindleSpeed(bs.m_spindleSpeed),
        m_dwell(bs.m_dwell),
        m_point(p),
        m_isZMovement(bs.m_isZMovement),
        m_isArc(bs.m_isArc),
        m_isClockwise(bs.m_isClockwise),
        m_isFastTraverse(bs.m_isFastTraverse),
        m_isMetric(bs.m_isMetric),
        m_isAbsolute(bs.m_isAbsolute),
        m_lineNumber(num),
        m_plane(bs.m_plane)
    { }

    BaseSegment(const BaseSegment&) = default;

    int getLineNumber() const { return m_lineNumber; }

    const QVector3D &getPoint() const { return m_point; }
    void setPoint(const QVector3D& point) { m_point = point; }

    void setToolHead(int head) { m_toolhead = head; }
    int getToolhead() const { return m_toolhead; }

    void setSpeed(double s) { m_speed = s; }
    double getSpeed() const { return m_speed; }

    void setIsZMovement(bool isZ) { m_isZMovement = isZ; }
    bool isZMovement() const { return m_isZMovement; }

    void setIsArc(bool isA) { m_isArc = isA; }
    bool isArc() const { return m_isArc; }

    void setIsFastTraverse(bool isF) { m_isFastTraverse = isF; }
    bool isFastTraverse() const { return m_isFastTraverse; }

    bool isMetric() const { return m_isMetric; }
    void setIsMetric(bool isMetric) { m_isMetric = isMetric; }

    bool isAbsolute() const { return m_isAbsolute; }
    void setIsAbsolute(bool isAbsolute) { m_isAbsolute = isAbsolute; }

    double getSpindleSpeed() const { return m_spindleSpeed; }
    void setSpindleSpeed(double spindleSpeed) { m_spindleSpeed = spindleSpeed; }

    double getDwell() const { return m_dwell; }
    void setDwell(double dwell) { m_dwell = dwell; }

    bool isClockwise() const { return m_isClockwise; }
    void setIsClockwise(bool isClockwise) { m_isClockwise = isClockwise; }

    planes plane() const { return m_plane; }
    void setPlane(const planes &plane) { m_plane = plane; }

private:
    int m_toolhead;
    double m_speed;
    double m_spindleSpeed;
    double m_dwell;
    QVector3D m_point;

    bool m_isZMovement;
    bool m_isArc;
    bool m_isClockwise;
    bool m_isFastTraverse;
    bool m_isMetric;
    bool m_isAbsolute;
    int m_lineNumber;

    planes m_plane;
};

#endif // BASESEGMENT_H
