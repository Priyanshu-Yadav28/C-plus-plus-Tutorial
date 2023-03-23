// INITILIZATION LIST IN CONSTRUCTORS IN C++.
#include<iostream>
using namespace std;
/*
SYNTAX FOR INITILIZATION LIST IN CONSTRUCTOR:

constructor(argument-list): Initilization-section{
    assingment + other codes;
}
*/

/*class Test{
    int a;
    int b;
    public:
    Test(int i, int j): a(i), b(j){Cosntructor-body}
};
*/
class Test{
    int a;
    int b;
    public:
    //Test(int i, int j): a(i), b(j)
    // Test(int i, int j): a(i), b(i+j)
    // Test(int i, int j): a(i), b(2 * j)
    // Test(int i, int j): a(i), b(a+j)
   // Test(int i, int j): b(j), a(i+b)//RED FLAG -> This will throw an error because a will be
    // intilized first as we have declared a first in private member and if we delcare b first
    // and then run this code again the proagram will run without any problem
    Test(int i, int j): a(i) 
    {
        b = j;
      cout<<"Constructor Executed"<<endl;
      cout<<"The value of a is "<<a<<endl;
      cout<<"The value of b is "<<b<<endl;
        
    }
};

int main(){
    Test t(2, 6);


    return 0;
}