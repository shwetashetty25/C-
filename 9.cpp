//9.WAP TO DEMONSTRATE DESTURCTOR IN C++:
#include <iostream>
using namespace std;
class Demo
{
private:
    int *data;
    int size;

public:
    Demo(int s)
    {
        size = s;
        data = new int[size];
        cout << "Constructor: Allocated memory for " << size << " integers." << endl;
    }
    ~Demo()
    {
        delete[] data;
        cout << "Destructor: Released memory." << endl;
    }
    void fillData()
    {
        for (int i = 0; i < size; i++)
        {
            data[i] = i + 1;
        }
    }
    void displayData() const
    {
        cout << "Data: ";
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    {
        Demo obj(5);
        obj.fillData();
        obj.displayData();
    }
    cout << "End of main function." << endl;
    return 0;
}