#include <iostream>
using namespace std;

int main()
{
    int num = 0, n = 1;

    for (int i = 0; num < 1000; i++) 
    {
        cout << num << endl;
        num = num + n;
        n = num - n;
    }
}