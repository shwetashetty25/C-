// fibonacci series using recursion in c++
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int terms;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> terms;
    if (terms < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}