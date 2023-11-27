
# Assignment 6 - Lambda Expression with Capture clause and mutable implementation

## Overview

This assignment involves utilizing a lambda expression in the `/src/Reader.cpp` file to define a function named `printFileNotFoundError`. The lambda expression returns a string which is referenced from the user function stack by using `&` reference operator in **Capture Clause**, also in order to change the string in the Lambda Expression we have to specify `mutable` keyword, and this string is then outputted to the user with `std::cout`.

## Updated Function Definition

1. **Function File:**
   - Function Definition: `/src/Reader.cpp` funtion `void Reader::getTriangles(std::vector<Triangle> &triangles)
`
   - **Code snippet** 
   ```
   auto printFileNotFoundError = [&msg]() mutable
    {
        msg = "Error! File Not Found!";
        return msg;
    };
    ```
2. **Lambda Expression:**
   - Define a lambda expression named `printFileNotFoundError` with capture clause as `[&msg]`.
   - We used mutable keyword in order to specify that the variables in the capture clause be `mutable` not `const`.
   - Due to mutable keyword the value of string got changed from `std::string msg = "File error"`  to `std::msg = "Error! File Not Found!"`
   - The lambda expression returns a string indicating a file not found error.

## Usage

1. **Lambda Expression in Action:**
   - Defined `std::string msg = "File error`
   - Call the lambda expression `printFileNotFoundError` in the `Reader.cpp` file.

2. **Output to User:**
   - Use `std::cout` to output the string returned by the lambda expression.
   - The output will be changed to `"Error! File not Found!`.

