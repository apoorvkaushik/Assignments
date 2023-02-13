#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter the Number to find that the 4th bit On or Off: ";
    cin >> num;

    if (num & (1 << 4))
        cout << "The 4th Bit is ON(1)";
    else
        cout << "The 4th Bit is OFF(0)";
}