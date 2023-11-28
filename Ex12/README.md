# Assignment 12 - Implementation of Virtual Functions and Inheritance

## Overview

This assignment involves the Object-Oriented Programming (OOP) concepts of **Inheritance** and the use of `virtual` functions. The classes involved are `Point3D`, `Triangle`, and `Triangulation`. The `print()` function is declared as virtual in these classes to demonstrate polymorphic behavior.

## Implementation Steps

1. **Declaration of Virtual Function:**
   - Declared the `print()` function as virtual in the `Point3D`, `Triangle`, and `Triangulation` classes.

2. **Inheritance:**
   - `Triangle` inherits from the `Point3D` class.
   - `Triangulation` inherits from the `Triangle` class.

3. **Definition of Virtual Function:**
   - Defined the `print()` function in the `Point3D`, `Triangle`, and `Triangulation` classes.

4. **Function in Main:**
   - Defined a function in `main` that takes a `Point3D` object as an argument.

5. **Object Creation:**
   - Created objects of `Point3D`, `Triangle`, and `Triangulation`.

6. **Polymorphic Behavior:**
   - Objects are passed to the `printClassName()` function to print the class name, showcasing polymorphic behavior.
