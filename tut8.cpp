//CONSTANTS, MANIPULATORS AND OPERATOR PRECEDENCE IN C++

#include<iostream>
#include<iomanip>//THIS CONTAINS MANIPULATORS WHICH RUNS SETW FUNCTION

using namespace std;

int main(){
// int a =34;
// cout<<"The value of a was: "<<a<<endl;
// a = 45;
// cout<<"The value of a is: "<<a<<endl;

// *********constants in C++***************
//const int a = 3;

//cout<<"The value of a was: "<<a<<endl;
//a = 45;//You will get an error because a is a constant
//cout<<"The value of a is: "<<a<<endl;

// ****************Manipulators in C++***************
//  int a = 3, b = 78, c=1233;
//  cout<<"The vlaue of a without setw is: "<<a<<endl;
//  cout<<"The vlaue of b without setw is: "<<b<<endl;
//  cout<<"The vlaue of c without setw is: "<<c<<endl; 
 
//  cout<<"The vlaue of a is: "<<setw(4)<<a<<endl; 
//  cout<<"The vlaue of b is: "<<setw(4)<<b<<endl; 
//  cout<<"The vlaue of c is: "<<setw(4)<<c<<endl; 

 // *********************Operator Precedence****************
 //www.cppreference/operator precedence.com

int a =3, b=4;
//int c = (a*5)+b;
int c =((((a*5)+b)-45)+87);
cout<<c;

return 0;
}