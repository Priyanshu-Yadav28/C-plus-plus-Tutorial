//STRUCTURES, UNIONS AND ENUMS IN C++

#include<iostream> 
using namespace std;
//Struct data types(built in)
 typedef struct employee{
     int eId;
     char favchar;
     float salary;
} ep;

 union money
 {
     int rice;//4
     char car;//1
     float pounds;//4
} ;


int main(){
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    //Union data types (built in )-------{Provides better memory management}
    
    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;


    ep harry;
    struct employee shubham;
    struct employee rohandas;
    harry.eId =1;
    harry.favchar = 'c';
    harry. salary = 120000000;
    cout<<"The id is "<<harry.eId<<endl;
    cout<<"The fav char is "<<harry.favchar<<endl;
    cout<<"The salary is "<<harry.salary<<endl;


    return 0;

}