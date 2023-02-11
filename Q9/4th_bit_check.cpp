#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num & (1 << 4))
        cout << "ON";
    else
        cout << "OFF";
}