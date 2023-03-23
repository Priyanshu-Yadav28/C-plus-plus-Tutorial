//HEADER FILES AND OPERARTORS IN C++

// there are two types of header files:
// 1.System header files: It comes with the compiler 

#include<iostream>

// 2. User defined header files: It is written by the Proagrammer
//#inlclude"this.h"// ------->this will throw an error if this.h is not present in the current directory.
using namespace std;

int main(){
    int a=4, b=5;

cout<<"operators in c++:"<<endl;


cout<<"Following are the types of operators in c++"<<endl;

cout<<" 1.Aritmatic opetators "<<endl;

cout<<"the value of a + b is "<<a+b<<endl;
cout<<"the value of a - b is "<<a-b<<endl;
cout<<"the value of a * b is "<<a*b<<endl;
cout<<"the value of a / b is "<<a/b<<endl;
cout<<"the value of a % b is "<<a%b<<endl;
cout<<"the value of a ++ is "<<a++<<endl;
cout<<"the value of a -- is "<<a--<<endl;
cout<<"the value of ++a is "<<++a<<endl;
cout<<"the value of --a is "<<--a<<endl;

// 2.Assignment Oprtators: used to assign values to variables
//int a=3, b=9;
//char d='d';

//3.comparison operators
cout<<"Following are the types of comparison oprerators in c++"<<endl;
cout<<"The value of a== b is "<<(a==b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;
cout<<"The value of a > b is "<<(a>=b)<<endl;
cout<<"The value of a < b is "<<(a<=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;

//4.Logical operators
// cout<<"Following are the logical operators in c++"<<endl;
// cout<<"The value of this logical and operator ((a==b)) && (a<b)) is:"<<((a==b) && (a<b))
// <<endl;
// cout<<"The value of this logical or operator ((a==b) || ((a<b)) is:"<<((a==b) || (a<b))
// <<endl;
//cout<<"The value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl;

return 0;
};
