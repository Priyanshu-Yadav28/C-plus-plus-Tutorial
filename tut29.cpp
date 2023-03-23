//CONSTRUCTORS IN C++

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // CREATING A CONSTRUCTOR
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.

    Complex(void); //--------->CONSTRUCTOR DECLARATION

    void PrintNumber()
    {

        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

Complex::Complex(void)
{ // THIS IS A DEFAULT CONSTRUCTOR AS IT TAKES NO PARAMETERES
    a = 0;
    b = 0;
    //cout<<"Hello World"<<endl;
}

int main()
{
    Complex c1, c2, c3;

    c1.PrintNumber();
    c2.PrintNumber();
    c3.PrintNumber();

    return 0;

    /* CHARACTERSTICS OF CONSTRUCTOR 
    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever an object is created. 
    3. They cannot return values and do not have return type. 
    4. It can have default arguments. 
    5. We cannot refer to their address. 

    */
}