# Assignment 11 - Use of `std::map` Container in C++ STL

## Overview

This assignment focuses on the utilization of the `std::map` container in C++ STL. In the `/headers/Triangulation.h` file, a `std::map<Triangle, double> tPerimeter` is declared to store pairs of `Triangle` objects and their perimeters. The container is populated using the `void Triangulation::setPerimeter()` function. Additionally, two methods are available to retrieve and print the perimeters:

1. **Print Perimeters:**
   - Method: `void Triangulation::printPerimeter()`
   - Prints the stored perimeters of triangles to the console.

2. **Get Perimeters:**
   - Method: `std::map<Triangle, double> Triangulation::getPerimeter()`
   - Returns the entire `std::map` containing triangles and their perimeters.

## Functionality

1. **Declaration:**
   - File: `/headers/Triangulation.h`
   - Declaration of `std::map<Triangle, double> tPerimeter`.

2. **Population:**
   - Method: `void Triangulation::setPerimeter()`
   - Populates the `std::map` container with pairs of `Triangle` objects and their perimeters.

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