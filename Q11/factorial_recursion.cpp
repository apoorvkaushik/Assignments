#include <iostream>

using namespace std;

int factorial(int);

int main()
{
    int num;

    cout << "Enter the Number which you want Factorial of : ";
    cin >> num;

    cout << "The Factorial of this number is " << factorial(num) << endl;
}

int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
    {
        return num * factorial(num - 1);
    }
}