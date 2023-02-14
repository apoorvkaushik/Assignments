#include <iostream>

using namespace std;

int main()
{
    int num;

    for (int i = 2; i <= 300; i++)
    {
        num = 0;

        for (int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                num = 1;
            }
        }

        if (num == 0)
        {
            cout << i << "\t";
        }
    }
}