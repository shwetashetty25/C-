// Q5)WAP TO DEMONSTRATE VIRTUAL FUNCTION IN C++
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Base class display function" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived class display function" << endl;
    }
};
int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display();
    return 0;
}
