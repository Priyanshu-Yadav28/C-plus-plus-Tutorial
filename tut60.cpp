// FILE I_O IN C++ READING AND WRITING FILES IN C++. 

#include<iostream>
#include<fstream>
//fstream gives us three classes to work with files in c++ they are:
/*
The useful classes for working with files in c++ are: 
1. fstreambase 
2. ifstream ------> derived from fstreambase . 
3. ofstream ------> derived from fstreambase .
*/

// In order to work with files in c++, you will have to open it, Primarily there are two ways to
// open a file 
//  1. Using the constructor 
//  2. Using the member function open() of the class   
using namespace std;

int main(){
    string st = " Harry Bhai ";
    string st2;

    // Opening file using constructor and wrinting in it .
    // ofstream out("sample60.txt"); // Write operation 
    // out<<st;

    // Opening file using constructor and reading in it.
    ifstream in("sample60b.txt");// Read operation 
    //in>>st2;
    getline(in, st2);
    // getline(in, st2);----> to print next line 
    cout<<st2;
    
    return 0;
}