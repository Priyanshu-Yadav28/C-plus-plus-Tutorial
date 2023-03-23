// REVISITING POINTERS_NEW AND DELETED KEYWORD IN C++.
#include <iostream>
using namespace std;

int main()
{
    //BASIC EXAMPLE (POINTOR)
    int a = 4;
    int *ptr = &a;
    // *ptr = 200;
    cout << "The value of a is " << *(ptr) << endl;

    // NEW OPERATOR OR KEYWORD
    // int *p = new int(40);
    float *p = new float(40.78);

    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3]; //{10, 20, 30};
    arr[0] = 10;
    *(arr + 1) = 20;  // *arr[2] = 20;
    arr[2] = 30;

    // delete []arr;    --> DELETES ALL THE DATA IN THE ARRAY (CONTIGUOUS MEMORY LOCATION)
    cout << "The value of arr [0] is " << arr[0] << endl;
    cout << "The value of arr [1] is " << arr[1] << endl;
    cout << "The value of arr [2] is " << arr[2] << endl;

    // DELETE OPETATOR OR KEYWORD
    return 0;
}