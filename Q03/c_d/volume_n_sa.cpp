#include <iostream>
using namespace std;

int main()
{
    const float pie = 3.14;
    float r, h, volume, sarea;

    cout << "Enter Radius of Cylinder: ";
    cin >> r;

    cout << "Enter Height of Cylinder: ";
    cin >> h;

    volume = pie * r * r * h;
    sarea = (2 * pie * r * h)+ (2 * pie * r * r);

    cout << "Volume of this Cylinder is " << volume << endl;
    cout << "Surface Area of this Cylinder is " << sarea << endl;
}