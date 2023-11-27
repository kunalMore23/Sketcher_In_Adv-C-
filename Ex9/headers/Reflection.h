#pragma once
#include<list>
#include"Plane.h"
#include "Triangle.h"
 
class Reflection
{
    public:
        Reflection();
        ~Reflection();
 
        void reflect(std::list<Triangle>& triangles, Plane refPlane);
        std::list<Triangle> getReflectedTriangles();
 
    private:
        std::list<Triangle> mReflectedTriangles;
};