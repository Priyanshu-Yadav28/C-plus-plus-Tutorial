// MAP IN STL IN C++
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 58;
    marksMap["Rohan"] = 2;
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is : "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is "<<marksMap.empty();

    return 0;
}