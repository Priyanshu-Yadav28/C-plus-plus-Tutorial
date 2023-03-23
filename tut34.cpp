//COPY CONSTRUCTOR IN C++
#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    //WHEN NO COPY CONSTRUCTOR IS FOUND, COMPILER SUPPLIES IT'S OWN COPY CONSTRUCTOR 
    Number(Number & obj){//COPY CONSTRUCTOR CREATED 
        cout<<" copy constructor called !!! "<<endl;
        a = obj.a;
    }
    void displady(){
        cout<<"The number for this object is "<< a <<endl;
    }
};

int main(){
    Number x, y, z(45), z2;
    x.displady();
    y.displady();
    z.displady();
    
    // if z1 should exactly resemble as like x, y or z
    Number z1(z); // COPY CONSTRUCTOR WILL BE INVOKED
    z1.displady();

    z2 = z; // COPY CONSTRUCTOR WILL NOT BE INVOKED (AS Z2 IS ALREADY CREATED AS AN OBJECT)

    Number z3 = z; //COPY CONSTRUCTOR WILL BE INVOKED 
    z.displady(); 

    return 0;
}