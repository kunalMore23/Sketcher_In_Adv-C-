#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

void printClassName(Point3D point)
{
    point.print();
}

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);

    Point3D point;
    Triangle triangle;
    Triangulation triangul;
    printClassName(point);
    printClassName(triangle);
    printClassName(triangul);

    std::cout<<"Press enter to exit\n";
}