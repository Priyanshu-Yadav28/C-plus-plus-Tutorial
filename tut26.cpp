//FRIEND FUNCTIONS IN C++
#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    // BELOW LINE MEANS THAT NON MEMBER SUMCOMPLEX FUNCTION IS ALLOWED TO DO 
    //ANYTHING WITH THE PRIVATE CLASS 
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main (){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}

/* PROPERTIES OF FRIEND FUNCTION 

1. Not in the scope of class
2. since it is not in the scope of class, it cannot be called from the object of that class
so c1.sumcomplex() is invalid .

3. can be invoked without any help of object 
4. usually contains object as argument
5. can be declared inside the public or private section of class 
6. It cannot access the members directly by their names and need object_name.member_name
to access any member. 
*/