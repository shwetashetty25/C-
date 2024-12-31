#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass(int value) : data(value)
    {
        cout << "Parameterized constructor called: " << data << endl;
    }
    MyClass(const MyClass &obj)
    {
        data = obj.data;
        cout << "Copy constructor called: " << data << endl;
    }
    void display() const
    {
        cout << "Data: " << data << endl;
    }
};
int main()
{
    MyClass obj1(10);
    obj1.display();

    MyClass obj2 = obj1;
    obj2.display();

    return 0;
}