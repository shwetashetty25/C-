#include <iostream>
using namespace std;

int main()
{
    // outer loop
    for (int i = 1; i <= 2; i++)
    {
        cout << "Outer : " << i << " \n"; // execute 2 times
        // inner loop
        for (int j = 1; j <= 3; j++)
        {
            cout << " Inner:" << j << "\n"; // executes 6 times(2*3)
        }
    }
    return 0;
}