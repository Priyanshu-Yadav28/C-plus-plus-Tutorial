// POINTERS TO OBJECTS AND ARROW OPERATOR IN C++. 
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void setData(int a, int b){
        real = a; 
        imaginary = b;
    }
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary is "<<imaginary<<endl;
    }
};
int main(){
    //METHOD 1. 
    
    // Complex c1;
    // c1.setData(4, 55);
    // c1.getData();

    // METHOD 2. USING POINTERS

    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(1, 22);
    // (*ptr).getData();

    // METHOD 3. 

    // Complex *ptr = new Complex;
    // (*ptr).setData(2, 32);
    // (*ptr).getData();

    //(*ptr).setData(2, 32); is exactly same as 
    // METHOD 4. ----> ARROW OPERATOR. 
    
     Complex *ptr = new Complex;
     ptr->setData(1,22);
     ptr->getData();
    
    // ARROW OF OBJECTS .

     Complex *ptr1 = new Complex[3];
     ptr1->setData(1, 100);
     ptr1->getData();

    //  ptr1->setData(1, 200);
    //  ptr1->getData();

    //  ptr1->setData(1, 300);
    //  ptr1->getData();

    //  ptr1->setData(1, 400);
    //  ptr1->getData();



    return 0;
}