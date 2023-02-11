#include <iostream>

using namespace std;

int main()
{
    int num = 1;

    int& ref = num;

    ref = 5;
    cout << "num = " << num << endl;

    num = 10;
    cout << "ref = " << ref << endl;
}