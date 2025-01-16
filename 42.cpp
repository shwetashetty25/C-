// Create string using string class (user input) and perform following function: 1. calucalte length 2. copy into another string variable i.e str2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;

    cout << "Enter string: ";
    getline(cin, str1);

    cout << "Length of the string: " << str1.length() << endl;
    cout << "Copied string: " << str1 << endl;

    return 0;
}