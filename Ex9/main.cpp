#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"
#include "headers/Reflection.h"
 
int main()
{
    //get original shape points
    std::list<Triangle> triangles;
    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    //plot original shape points
    Writer writeGeometry;
    writeGeometry.write("originalShape.txt", triangles);

    //get reflection about plane
    Plane refPlane;
    Reflection reflectShape;
    reflectShape.reflect(triangles, refPlane);
    std::list<Triangle> reflectedTriangles = reflectShape.getReflectedTriangles();

    //plot reflection about plane
    writeGeometry.write("reflectedShape.txt", reflectedTriangles);
 
    //get bounding box points
    std::list<Triangle> shapeTriangles;
    readShape.getTriangles(shapeTriangles);
    BBox shapeBoundingBox(shapeTriangles);
    Reader readBoundingBoxOfCube("shapeBoundingBox.txt");

    //project bounding box points on the plane
    std::list<Point3D> boundingBoxPoints;
    readBoundingBoxOfCube.getPoints(boundingBoxPoints);
    std::list<Point3D> planelist = refPlane.getPointProjectionOnPlane(boundingBoxPoints);
    
    //plot plane
    writeGeometry.write("plane.txt", planelist);
}