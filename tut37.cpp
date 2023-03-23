// INHERITANCE SYNTAX AND VISIBILITY MODE IN C++
#include <iostream>
using namespace std;

//BASE CLASS
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId) //COSNTRUCTOR
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
//DERIVED CLASS SYNTAX
/* class {{derived-class-name}} : {{visibility-mode  }} {{base-class-name}}
{
    class members / methods / etc.
}
NOTE:
1. DEFAULT VISIBILITY MODE IS PRIVATE
2. PUBLIC VISIBILITY MODE :PUBLIC MEMBERS OF BASE CLASS BECOMES PUBLIC MEMBERS OF DERIVED CLASS
3. PRIVATE VISIBILITY MODE: PUBLIC MEMBERS OF BASE CLASS BECOMES PRIVATE MEMBERS OF DERIVED CLASS 
4. PRIVATE MEMBERS ARE NEVER INHERITED
*/

//CREATING A PROGRAMMER CLASS DERIVED FROM EMPLOYEE BASE CLASS
class programmer : public Employee
{
public:
    int languageCode;
    programmer(int inpId)
    {
        id = inpId;
    int languageCode = 9;
    }


    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getdata();

    return 0;
}
