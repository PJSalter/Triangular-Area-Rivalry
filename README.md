# Triangular Area Rivalry

## 1. Introduction

"Triangular Area Rivalry" is a C++ project that allows you to compare the areas of two triangles. It's implemented using the Triangle class, which provides methods to set the base and height of a triangle, calculate its area, and print its information.

## 2. Usage

To use the "Triangular Area Rivalry" project, follow these steps:

1. Compile the project with a C++ compiler (e.g., g++).

```
g++ main.cpp Triangle.cpp -o triangular-area-rivalry

```

2. Run the executable:

```
./triangular-area-rivalry
```

3. Input the base and height values for two triangles when prompted.

4. The program will determine which triangle has a larger area and display the results.

## 3. Classes

#### Triangle

The Triangle class represents a triangle. It provides the following methods:

- `void SetBase(double userBase)`: Set the base of the triangle.
- `void SetHeight(double userHeight)`: Set the height of the triangle.
- `double GetArea() const`: Calculate and return the area of the triangle.
- `void PrintInfo() const`: Print the base, height, and area of the triangle.

## 4. Example

Here is an example of how to use the "Triangular Area Rivalry" project:

```
#include <iostream>
#include "Triangle.h"
using namespace std;

int main(int argc, const char* argv[]) {
   Triangle triangle1;
   Triangle triangle2;

   double base1, height1, base2, height2;

   // Read and set base and height for triangle1
   cin >> base1 >> height1;
   triangle1.SetBase(base1);
   triangle1.SetHeight(height1);

   // Read and set base and height for triangle2
   cin >> base2 >> height2;
   triangle2.SetBase(base2);
   triangle2.SetHeight(height2);

   // Determine which triangle has a larger area
   double area1 = triangle1.GetArea();
   double area2 = triangle2.GetArea();

   cout << "Triangle with larger area:" << endl;

   if (area1 > area2) {
      triangle1.PrintInfo();
   } else {
      triangle2.PrintInfo();
   }

   return 0;
}

```

✨ Authored by: [Peter Salter](https://github.com/PJSalter) 🤩
