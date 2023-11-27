#include "../headers/Triangulation.h"

Triangulation::Triangulation(std::list<Triangle> triangles)
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

std::list<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}