#include <iostream>

using namespace std;

int addition(int , int *);

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    // a is passed by value & b is passed by reference.
    cout << "Addition of these numbers is" << addition(a, &b) << endl;
}

int addition(int a, int *b)
{
    int add;

    add = a + *b;

    return add;
}