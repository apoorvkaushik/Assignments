#include <iostream>
using namespace std;

int main()
{
    const float pie = 3.14;
    float r, volume;

    cout << "Enter Radius of Sphere: ";
    cin >> r;

    volume = 4/3 * pie * r * r * r;

    cout << "Volume of this Sphere: " << volume << endl;
}