#include <iostream>

using namespace std;

int main ()
{  
    int num, div, sum = 0;

    cout << "Enter a Number to check if it is Perfect or not: ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        div = num % i;

        if (div == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        cout << num <<" is a perfect number." << endl;
    }
    else
    {
        cout << num <<" is not a perfect number." << endl;
    }
}