#include <iostream>
using namespace std;

int main()
{
    int num = 0, n = 1, range;
    cout << "Enter range: ";
    cin >> range;
    for (int i = 0; num < range; i++) 
    {
        cout << num << endl;
        num = num + n;
        n = num - n;
    }
}