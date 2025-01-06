// create 2*2 matrix using two dimensional array:
#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2];

    cout << "Enter elements matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Output " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}