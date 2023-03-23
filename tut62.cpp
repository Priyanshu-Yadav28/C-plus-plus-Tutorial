// FILE I/O IN C++ using OPEN() AND EOF() FUNCTIONS IN C++.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // opening a file using open() member function and writing in it:

    ofstream out;
    out.open("sample60.txt");
    out<<"Hello this is me "<<endl;
    out<<"Hi im here "<<endl;
    out<<"scout is the best "<<endl;
    out<<"Im the best "<<endl;  
    out.close();

    // opening a file using open() member function and reading in it:
    ifstream in;
    in.open("sample60.txt");
    string st;
    // in>>st, st2;
    // cout<<st; 
    while (in.eof() ==0)
    {
        getline(in, st);
        cout<<st;
    }
    
    in.close(); 


    return 0;
}