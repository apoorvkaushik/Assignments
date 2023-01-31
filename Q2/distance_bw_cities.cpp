#include <iostream>
using namespace std;

int main()
{
    float diskm, dism, disf, disi, discm;

    cout << "Enter distance b/w two cities(in km): ";
    cin >> diskm;

    dism = diskm * 1000;
    disf = diskm * 3280.8399;
    disi = diskm * 39379.0787;
    discm = diskm * 100000;

    cout << "Distance in Meters: " << dism << endl;
    cout << "Distance in Foot: " << disf << endl;
    cout << "Distance in Inch: " << disi << endl;
    cout << "Distance in Centimeters: " << discm << endl;
}