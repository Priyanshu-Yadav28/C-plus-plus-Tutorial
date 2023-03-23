// FILE I/O IN C++_READ_WRITE IN SAME PROAGRAM AND CLOSING FILES IN C++. 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // connecting our file with houtstream

    // string name;
    // creating a name string and filling it with string entered by the user. 

    // ofstream hout("sample60.txt");
    // cout<<"Enter your name "<<endl;
    // cin>>name;
    // writing a string to the file 

    // hout<<"My name is " + name<<endl;
    // hout.close();


    string content;
    ifstream hif("sample60.txt"); 
    hif>>content;
    cout<<"The content of this file is: " <<content<<endl;
    getline(hif, content);
    hif.close();
    


    return 0;
}