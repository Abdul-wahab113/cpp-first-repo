#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int product(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int remainder(int a, int b)
{
    return a % b;
}

void even(int a, int b)
{
    if (a % 2 == 0)
    {
        cout << a << " is a even number " << endl;
    }

    else
        cout << b << " is a even number " << endl;
}

void odd(int a, int b)
{
    if (a % 2 != 0)
    {
        cout << a << " is a odd number " << endl;
    }

    else
        cout << b << " is a odd number " << endl;
}

int main()
{
    int num1, num2, choice;
    int result = 0;

    while (choice != 6)
    {

        cout << "Enter 1st number :" << endl;
        cin >> num1;
        cout << "Enter 2nd number :" << endl;
        cin >> num2;

        cout << "____________________________________" << endl;
        cout << "1.Sum" << endl;
        cout << "2.Product" << endl;
        cout << "3.Division" << endl;
        cout << "4.Remainder" << endl;
        cout << "5.Even" << endl;
        cout << "6.Odd" << endl;
        cout << "Enter your choice :" << endl;
        cout << "____________________________________" << endl;
        cin >> choice;

        if (choice == 1)
        {
            result = sum(num1, num2);
            cout << "The sum of " << num1 << " and " << num2 << " is :" << result << endl;
        }

        else if (choice == 2)
        {
            result = product(num1, num2);
            cout << "The product of " << num1 << " and " << num2 << " is :" << result << endl;
        }

        else if (choice == 3)
        {
            result = division(num1, num2);
            cout << "The division of " << num1 << " and " << num2 << " is :" << result << endl;
        }

        else if (choice == 4)
        {
            result = remainder(num1, num2);
            cout << "The remainder of " << num1 << " and " << num2 << " is :" << result << endl;
        }

        else if (choice == 5)
        {
            even(num1, num2);
        }

        else if (choice == 6)
        {
            odd(num1, num2);
        }

        else
            cout << "Invalid input " << endl;
    }

    return 0;
}