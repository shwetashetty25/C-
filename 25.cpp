// WAP to make a simple calculator using control structure
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "Calc" << endl;
    cout << "1. Add" << endl;
    cout << "2. Sub" << endl;
    cout << "3. Mul" << endl;
    cout << "4. Div" << endl;
    cout << "Choose (1-4): ";
    cin >> choice;

    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;

    switch (choice)
    {
    case 1:
        cout << "Result: " << a + b << endl;
        break;
    case 2:
        cout << "Result: " << a - b << endl;
        break;
    case 3:
        cout << "Result: " << a * b << endl;
        break;
    case 4:
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error" << endl;
        break;
    default:
        cout << "Error" << endl;
    }

    return 0;
}