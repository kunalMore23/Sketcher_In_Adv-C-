#include <iostream>
#include <iterator>
#include <math.h>
#include "../headers/Triangulation.h"

using namespace std;

Triangulation::Triangulation(std::vector<Triangle> triangles)
    : mBBox(triangles)
{
    mTriangles = triangles;
}

Triangulation::~Triangulation()
{
}

std::vector<Triangle> Triangulation::getTriangles()
{
    return mTriangles;
}

std::multimap<Triangle, double>Triangulation::getPerimeter()
{
    return tPerimeter;
}

void Triangulation::printTriangle(Triangle triangle)
{
    std::cout << "(" << triangle.p1().x() << "," << triangle.p1().y() << "," << triangle.p1().z() << ")\t";
    std::cout << "(" << triangle.p2().x() << "," << triangle.p2().y() << "," << triangle.p2().z() << ")\t";
    std::cout << "(" << triangle.p3().x() << "," << triangle.p3().y() << "," << triangle.p3().z() << ")\t";
}

void Triangulation::printPerimeter()
{
    setPerimeter();
    int i{0};

    std::cout << "Size of map is" << tPerimeter.size() << std::endl;
    std::cout << "Size of vector is" << mTriangles.size() << std::endl;

    std::map<Triangle, double>::iterator pair;
    for (pair = tPerimeter.begin(); pair != tPerimeter.end(); pair++)
    {
        std::cout << "[Triangle-" << i << "\t";
        printTriangle(pair->first);
        std::cout << "\tPerimeter = " << pair->second << "]" << std::endl;
        i++;
    }
}

void Triangulation::setPerimeter()
{
    std::vector<Triangle>::iterator triangle;
    for (triangle = mTriangles.begin(); triangle != mTriangles.end(); triangle++)
    {
        std::cout << "Size of map is" << tPerimeter.size() << std::endl;
        double perimeter = triangle->perimeter();
        tPerimeter.insert({*triangle, perimeter});
    }
    
}
