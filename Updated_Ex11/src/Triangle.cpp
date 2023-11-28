#include <math.h>
#include "../headers/Triangle.h"

Triangle::Triangle(Point3D p1, Point3D p2, Point3D p3)
    : mP1(0, 0, 0),
      mP2(0, 0, 0),
      mP3(0, 0, 0)
{
    mP1 = p1;
    mP2 = p2;
    mP3 = p3;

    setPerimeter();
}

Triangle::~Triangle()
{
}

Point3D Triangle::p1()
{
    return mP1;
}

Point3D Triangle::p2()
{
    return mP2;
}

Point3D Triangle::p3()
{
    return mP3;
}

double Triangle::perimeter() const
{
    return mPerimeter;
}

double Triangle::getDist(Point3D p1, Point3D p2)
{
    double dist = sqrt(pow((p1.x() - p2.x()), 2.0) + pow((p1.y() - p2.y()), 2.0) + pow((p1.z() - p2.z()), 2.0));
    return dist;
}

void Triangle::setPerimeter()
{
    double a = getDist(mP1, mP2);
    double b = getDist(mP1, mP3);
    double c = getDist(mP2, mP3);

    mPerimeter = a + b + c;
}

bool operator<(const Triangle &t1, const Triangle &t2)
{
    return t1.perimeter() < t2.perimeter();
}