#include <fstream>
#include "../headers/Writer.h"

Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}

void Writer::write(std::string filePath, std::vector<Triangle> &triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);

  for (Triangle triangle : triangles)
  {
    std::string str = std::to_string(triangle.p1().x()) + " " + std::to_string(triangle.p1().y()) + " " + std::to_string(triangle.p1().z()) + "\n";
    dataFile << str;
    dataFile << triangle.p2().x() << " " << triangle.p2().y() << " " << triangle.p2().z() << std::endl;
    dataFile << triangle.p3().x() << " " << triangle.p3().y() << " " << triangle.p3().z() << std::endl;
    dataFile << triangle.p1().x() << " " << triangle.p1().y() << " " << triangle.p1().z() << std::endl;
  }
  dataFile.close();
};