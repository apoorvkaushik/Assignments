#include <iostream>
using namespace std;

int main()
{
    const float pie = 3.14;
    float r, area, circum;

    cout << "Enter Radius of the Circle: ";
    cin >> r;

    area = pie * r * r;
    circum = 2 * pie * r;

    cout << "Area of this Circle is " << area << endl;
    cout << "Circumference of this Circle is " << circum << endl;
}