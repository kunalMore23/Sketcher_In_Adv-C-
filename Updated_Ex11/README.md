# Assignment 11x - Use of `std::multimap` Container in C++ STL

## Overview

This assignment focuses on the utilization of the `std::multimap` container in C++ STL. In the `/headers/Triangulation.h` file, a `std::multimap<Triangle, double> tPerimeter` is declared to store pairs of `Triangle` objects and their perimeters. The container is populated using the `void Triangulation::setPerimeter()` function. Additionally, two methods are available to retrieve and print the perimeters:

**Imp Changes**
   -The thing with the `std::map` was that it doesn't accept duplicate key values.
   -But `std::multimap` does that and as we don't know how compiler looks at the `class Triangle` triangle object.
   -But it confuses the triangles as the same. 
   -So it is important to use multimap so that we remove the one confusion occuring that it should be unique.

1. **Print Perimeters:**
   - Method: `void Triangulation::printPerimeter()`
   - Prints the stored perimeters of triangles to the console.

2. **Get Perimeters:**
   - Method: `std::map<Triangle, double> Triangulation::getPerimeter()`
   - Returns the entire `std::map` containing triangles and their perimeters.

## Functionality

1. **Declaration:**
   - File: `/headers/Triangulation.h`
   - Declaration of `std::multimap<Triangle, double> tPerimeter`.

2. **Population:**
   - Method: `void Triangulation::setPerimeter()`
   - Populates the `std::multimap` container with pairs of `Triangle` objects and their perimeters.

3. **Print Perimeters:**
   - Method: `void Triangulation::printPerimeter()`
   - Prints the stored perimeters of triangles to the console.

4. **Get Perimeters:**
   - Method: `std::map<Triangle, double> Triangulation::getPerimeter()`
   - Returns the entire `std::map` containing triangles and their perimeters.

## Usage

1. **Instantiate Triangulation:**
   - Instantiate a `Triangulation` object, e.g., `Triangulation triangulation(triangles);`.

2. **Print Perimeters:**
   - Call the `printPerimeter` method to print the stored perimeters.
     ```cpp
     // Example
     triangulation.printPerimeter();
     ```

3. **Get Perimeters:**
   - Call the `getPerimeter` method to retrieve the entire `std::map` containing triangles and their perimeters.
## Testing in `main.cpp`

```cpp
// main.cpp

#include "Triangulation.h"

int main() {
    // Create a vector of triangles
    std::vector<Triangle> triangles;

    // Create a Triangulation object
    Triangulation triangulation(triangles);

    // Print perimeters
    triangulation.printPerimeter();

    return 0;
}
