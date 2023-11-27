#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"
#include "headers/Reflection.h"
 
int main()
{
    //get original shape points
    std::vector<Triangle> triangles;
    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    //plot original shape points
    Writer writeGeometry;
    writeGeometry.write("originalShape.txt", triangles);

    //get reflection about plane
    Plane refPlane;
    Reflection reflectShape;
    reflectShape.reflect(triangles, refPlane);
    std::vector<Triangle> reflectedTriangles = reflectShape.getReflectedTriangles();

    //plot reflection about plane
    writeGeometry.write("reflectedShape.txt", reflectedTriangles);
 
    //get bounding box points
    std::vector<Triangle> shapeTriangles;
    readShape.getTriangles(shapeTriangles);
    BBox shapeBoundingBox(shapeTriangles);
    Reader readBoundingBoxOfCube("shapeBoundingBox.txt");

    //project bounding box points on the plane
    std::vector<Point3D> boundingBoxPoints;
    readBoundingBoxOfCube.getPoints(boundingBoxPoints);
    std::vector<Point3D> planeVector = refPlane.getPointProjectionOnPlane(boundingBoxPoints);
    
    //plot plane
    writeGeometry.write("plane.txt", planeVector);
}