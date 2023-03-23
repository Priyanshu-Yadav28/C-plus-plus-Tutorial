//STATIC DATA MEMBERS AND STATC DATA MEMBER FUNCTIONS 
#include <iostream>
using namespace std;

class Employee
{
        int id;
    static int count;//Count is the static data member of the class;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void) // STATIC DATA MEMBER FUNCTIONS
    {
        /*cout<<id; ----> This will throw an error because static member
        functon has access only to static member functon and static member variable *////////
        
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count = 1000;//Default vlaue is always 0;
//count is the static data member of class Employee
int main()
{
    Employee harry, lovish, shubham;

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    lovish.setdata();
    lovish.getdata();
    Employee::getcount();

    shubham.setdata();
    shubham.getdata();
    Employee::getcount();   
             
    return 0;
}