#pragma once
#include "Point3D.h"

class Triangle
{
public:
    Triangle(Point3D p1, Point3D p2, Point3D p3);
    ~Triangle();

    Point3D p1();
    Point3D p2();
    Point3D p3();
    double perimeter() const;

private:
    Point3D mP1;
    Point3D mP2;
    Point3D mP3;
    double mPerimeter;

    void setPerimeter();
    double getDist(Point3D p1, Point3D p2);
};

bool operator<(const Triangle &t1, const Triangle &t2);
