#pragma once
#include <vector>
#include <map>
#include "BBox.h"

class Triangulation
{

public:
    Triangulation(std::vector<Triangle> triangles);
    ~Triangulation();

    std::vector<Triangle> getTriangles();
    std::multimap<Triangle, double> getPerimeter();
    void printPerimeter();

private:
    std::vector<Triangle> mTriangles;
    std::multimap<Triangle, double> tPerimeter;
    BBox mBBox;

    void setPerimeter();
    void printTriangle(Triangle triangle);
};
