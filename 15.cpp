#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    // The statement increment 1
    cout << "x++ is"<< x++ << endl;
    // The statement incremented 1
    // from already incremented 1
    // statement resulting in
    // incremented of 2
    cout << "++x is" << ++x << endl;
    int y = 10;
    // This statement decremented 1
    cout << "y-- is" << y-- << endl;
    // This statement incremented 1
    // from already incremented
    // statement resulting in
    // decrementing of 2
    cout << "--y is" << --y << endl;
    return 0;
}