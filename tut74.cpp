// FUNCITON OBJECTS IN STL IN C++. 
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // FUNCTION OBJECTS: Function wrapped in a class so that it is availabe like an object. 
    int arr[] = {1, 73, 4, 2, 54, 16};
    // sort(arr, arr+5);// ----> sorts the array in ascending order 
    sort(arr, arr+5, greater<int>());// --> sorts the arry in descending order with function object greater 
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    
    

    return 0;
}