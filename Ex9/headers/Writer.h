#pragma once
#include<list>
#include<string>
#include "Triangle.h"
class Writer
{
public:
    Writer();
    ~Writer();

    void write(std::string filePath ,std::list<Triangle>& triangles);
    void write(std::string filePath, std::list<Point3D>&Points);
};