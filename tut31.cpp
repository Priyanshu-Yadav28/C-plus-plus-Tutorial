// CONSTRUCTOR OVERLOADING IN C++

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    { 
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void PrintNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 5);
    c1.PrintNumber();

    Complex c2(1);
    c2.PrintNumber();

    Complex c3;
    c3.PrintNumber();

    return 0;
}
