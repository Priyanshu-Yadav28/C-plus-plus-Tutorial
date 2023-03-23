//POINTERS IN C++

#include <iostream>
using namespace std;

int main()
{
    //What is a pointor?--->data type which holds the address of other data types
    int a = 3;
    int* b = &a;
    //&--->(address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl; //both are same and will give address of a

    //*--->(value at operator)Dereference operator
    cout << "The value at address of b is " << *b << endl;

    // //Pointer to Pointor
    // int** c =&b;
    // cout<<"The address of b is "<<&b<<endl;
    // cout<<"The address of b is "<<c<<endl;
    // cout<<"The value at address of c is "<<*c<<endl;
    // cout<<"The value at address value__at(value at(c)) is "<<**c<<endl;

    return 0;
}