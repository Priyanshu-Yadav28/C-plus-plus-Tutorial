// EXERCISE ON INHERITENCE IN C++.
/* 
 CREATE TWO CLASSES: 

 1. SimpleCalculator - Takes input of 2 numbers using a utility function 
 and performs + , -, *, / and displays the results using another function.
 2. ScientificCalculator -  Takes input of 2 numbers using a utility function 
 and performs any four scientific operations 
 and displays the results using another function.

 CREATE ANOTHER CLASS HybridCalculator and inherit it uisng these two classes
 and answer the following questions 
  Q1. WHAT TYPE OF INHERITANCE ARE YOU USING ?
  Q2. WHICH MODE OF INHERITANCE ARE YOU USING ?
  Q3. CREATE AN OBJECT OF HybridCalculator AND DISPALAY RESULT OF SIMPLE AND
  SCIENTIFIC CALCULATOR . 
  Q4. HOW IS CODE REUSABILITY IMPLENTED ? */

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    public:
    int a, b;
    void getData_simplecalc(){
        cout<<"Enter the  value of a "<<endl;
        cin>>a;
        cout<<"Enter the value of b "<<endl;
        cin>>b;
    }
    void printdata1(){
        cout<<"The value of a + b is "<<a + b<<endl;
        cout<<"The value of a - b is "<<a - b<<endl;
        cout<<"The value of a * b is "<<a * b<<endl;
        cout<<"The value of a / b is "<<a / b<<endl;
    }
    };

    class ScientificCalculator{
        public:
        int a , b;
        void getData_scientifccalc(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;
        }
        void printdata2(){
            cout<<"The vlaue of sin a is "<<sin(a)<<endl;
            cout<<"The vlaue of cos a is "<<cos(a)<<endl;
            cout<<"The vlaue of tan a is "<<tan(a)<<endl;
            cout<<"The vlaue of exp a is "<<exp(a)<<endl;
        }
    };
    class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

    };
int main(){
    HybridCalculator h;
    h.getData_simplecalc();
    h.printdata1();
    h.getData_scientifccalc();
    h.printdata2();
    
    return 0;
}