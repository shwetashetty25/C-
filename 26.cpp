// Implement a simple calculator with basic Operations
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char d;

    cout << "number1: ";
    cin >> a;
    cout << "+, -, *, / : ";
    cin >> d;
    cout << "number2: ";
    cin >> b;

    switch (d)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        if (b != 0)
            c = a / b;
        else
        {
            cout << "Error";
            return 1;
        }
        break;
    default:
        cout << "Error";
        return 1;
    }

    cout << "Result: " << c << endl;

    return 0;
}