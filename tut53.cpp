// THIS POINTOR IN C++.
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setData(int a);
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // this IS A KEYWORD WHICH IS A POINTOR IT POINTS TO THE OBJECT WHICH INVOKES THE MEMBER 
    // FUNCTION. 
    A a;
    // A a.setData(4).getData();
    a.setData(4);
    a.getData();

    return 0;
}
