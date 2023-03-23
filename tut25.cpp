//ARRAY OF OBJECTS AND PASSING OBJECTS AS A FUNCTION ARGUMENTS IN C++

#include<iostream>
using namespace std;

class Employee{
    int Id;
    int salary;
    public:
    void setId(void){
        cout<<"Enter the id "<<endl;
        cin>>Id;
    }
    void getId(void){
        cout<<"The Id of this Employee is " <<Id<<endl;
    }

};

int main(){
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();

    //Another method (Arry in object)if many objects (employee) are there 

    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
         fb[i].setId();
         fb[i].getId();
    }
    
    

    return 0;
}