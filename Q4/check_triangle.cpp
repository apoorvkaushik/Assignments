#include <iostream>
using namespace std;

int main()
{
    int angle1, angle2, angle3;
    
    cout << "Enter Angle of the Triangle: " << endl;

    cout << "Angle 1: ";
    cin >> angle1;
    cout << "Angle 2: ";
    cin >> angle2;
    cout << "Angle 3: ";
    cin >> angle3;

    if (angle1 + angle2 + angle3 == 180)
    {
        if (angle1 == 60 && angle2 == 60 && angle3 == 60)
        {
            cout << "The Triangle is a Equilateral triangle" << endl;
        }
        else if (angle1 != angle2 && angle2 != angle3 && angle1 != angle3)
        {
            cout << "The Triangle is a Scalene triangle" << endl;
        }
        else
        {
            cout << "The Tringle is a Isosceles" << endl;
        }
        if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        {
            cout << "The Triangle is a Right Angled Triangle" << endl;
        }
    }
    else
    {
        cout << "The Triangle Provided is Impossible" << endl;
        cout << "Re-Run the Program" << endl;
    }
}