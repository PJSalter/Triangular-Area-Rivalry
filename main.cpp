#include <iostream>
#include "Triangle.h"
using namespace std;

int main(int argc, const char *argv[])
{
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

    if (area1 > area2)
    {
        triangle1.PrintInfo();
    }
    else
    {
        triangle2.PrintInfo();
    }

    return 0;
}
