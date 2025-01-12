// string comparison
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string greeting = "Hello World:";
    cout << greeting << endl;
    string name;
    cout << "Enter your name:";
    cin >> name;
    cout << name << endl;
    int length = greeting.length();
    cout << length << endl;
    string firstname = "Hi Shweta";
    string lastname = "How are you";
    string fullname = firstname + " " + lastname;
    cout << fullname << endl;
    string base = "Hello";
    cout << base << endl;
    base.append("World");
    cout << base << endl;

    // string comparison:
    string str1 = "apple";
    string str2 = "banana";
    if (str1 == str2)
    {
        cout << "String are not equal" << endl;
    }
    else
    {
        cout << "Strings are equal" << endl;
    }
    int result = str1.compare(str2);
    if (result == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else if (result < 0)
    {
        cout << "str1 comes before str2" << endl;
    }
}
