#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

#include "../headers/Plane.h"

Plane::Plane()
    : mNormallist(0, 0, 0)
{
    getPlaneParameters();
}

Plane::Plane(Point3D normallist, Point3D planePoint3D)
    : mNormallist(normallist)
{
    this->mPlanePoint3D.push_back(planePoint3D);
}

Plane::~Plane()
{
}

void Plane::getPlaneParameters()
{
    double vX, vY, vZ, pX, pY, pZ;

    std::string printMsg = "Enter Normal list :";

    std::cout << printMsg << std::endl;
    std::cout << "Enter vX :" << std::endl;
    std::cin >> vX;

    std::cout << "Enter vY :" << std::endl;
    std::cin >> vY;

    std::cout << "Enter vZ :" << std::endl;
    std::cin >> vZ;

    mNormallist = Point3D(vX, vY, vZ);

    std::cout << "Enter Point on the plane :" << std::endl;
    std::cout << "Enter pX :" << std::endl;
    std::cin >> pX;

    std::cout << "Enter pY :" << std::endl;
    std::cin >> pY;

    std::cout << "Enter pZ :" << std::endl;
    std::cin >> pZ;
    mPlanePoint3D.push_back(Point3D(vX, vY, vZ));
}

Point3D Plane::getNormallist()
{
    return mNormallist;
}

std::list<Point3D> Plane::getPlanePoint3D()
{
    return mPlanePoint3D;
}

std::list<Point3D> Plane::getPointProjectionOnPlane(std::list<Point3D> points)
{
    std::list<Point3D> returnPoints;
    const double a = mNormallist.x();
    const double b = mNormallist.y();
    const double c = mNormallist.z();
    const double div = sqrt(pow(a, 2.0) + pow(b, 2.0) + pow(c, 2.0));

    Point3D normalised_unit_list(a / div, b / div, c / div);

    for (auto point : points)
    {
        double tx = point.x();
        double ty = point.y();
        double tz = point.z();

        double x1 = mPlanePoint3D[0].x(), y1 = mPlanePoint3D[0].y(), z1 = mPlanePoint3D[0].z();
        double dist = abs(((a * tx) + (b * ty) + (c * tz) - (a * x1) - (b * y1) - (c * z1)) / (div));
        Point3D pPoint = Point3D((tx + (dist * normalised_unit_list.x())), (ty + (dist * normalised_unit_list.y())), (tz + (dist * normalised_unit_list.z())));
        returnPoints.push_back(pPoint);
    }
    return returnPoints;
}