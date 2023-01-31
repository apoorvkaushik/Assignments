#include <iostream>
using namespace std;

int main()
{
    int days;

    cout << "How much late the book is returned? (in Days): ";
    cin >> days;

    if (days > 0)
    {
    if (days <= 5)
    {
        cout << "Fine is 50 paise";
    }
    else if (days <= 10)
    {
        cout << "Fine is 1 rupees";
    }
    else if (days <= 30)
    {
        cout << "Fine is 5 rupees";
    }
    else
    {
        cout << "Membership is Cancelled";
    }
    }
    else
    {
        cout << "Error: Invaild Value";
    }
}