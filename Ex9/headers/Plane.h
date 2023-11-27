#pragma once
#include<list>
#include"Point3D.h"
#include"Triangle.h"
 
class Plane
{
    public:
        Plane();
        Plane(Point3D normallist, Point3D planePoint3D);
        ~Plane();
        Point3D getNormallist();
        std::list<Point3D> getPlanePoint3D();
        std::list<Point3D> getPointProjectionOnPlane(std::list<Point3D> points);
        
    private:
       void  getPlaneParameters();
 
    private:
        Point3D mNormallist;
        std::list<Point3D> mPlanePoint3D;

};