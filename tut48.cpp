// CONSTRUCTORS USE IN INHERITANCE IN C++.
#include <iostream>
using namespace std;
/*
CASE 1. 
class B :public A{
    // order of exicution of constructor --> first A() then B()
}

CASE 2. 

class A:public B, public C{
    // order of exicution of constructor --> first B() then C() then A()
}

CASE 3. 

class A: public c, virtual public B {
    // Order of exicution of constructor --> first B() then C() then A().
}
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 constructor called " << endl;
    }
    void Print_Base1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 constructor called " << endl;
    }
    void Print_Base2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class consrructor called" << endl;
    }

    void PrintData_Derived(void)
    {
        cout << "The value of derived 1 is " << derived1 << endl;
        cout << "The value of derived 2 is " << derived2 << endl;
    }
};

int main()
{
    Derived harry(1, 2, 3, 4);
    harry.Print_Base1();
    harry.Print_Base2();
    harry.PrintData_Derived();

    return 0;
}