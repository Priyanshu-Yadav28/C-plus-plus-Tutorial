// PARAMETERIZED AND DEFAULT CONSTRUCTORS 

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int, int );
    void PrintNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex::Complex(int x, int y){//THIS IS A PARAMETERIZED CONSTRUCTOR AS IT TAKES TWO OR SOME ARGUMENT
    a = x;
    b = y;
    //cout<<"Hello World";
}

int main(){
    /* THERE ARE TWO WAYS TO INVOKE A FUNCTION 
    1. IMLICIT CALL 
    2. EXPLICT CALL  */

    //IMPLICIT CALL
    Complex a(4, 6);
    a.PrintNumber();

    //EXPLICT CALL 
    Complex b = Complex(5, 7);
    b.PrintNumber(); 

    return 0;
} 