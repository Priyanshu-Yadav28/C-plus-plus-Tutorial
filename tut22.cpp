//NESTING OF MEMBER FUNCTION 

#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read()
{
    cout << "Enter your binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin();//Nesting of member function 
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying your binary number " << endl;
    {
        for (int i = 0; i < s.length(); i++)
            cout << s.at(i);
        cout << endl;
    }
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin(); the functin is nested under ones compliment 
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}


//OOPs- Classes and objects

//C++---> initially called --> C with classes by stroustroup
//class --> extension of structures (in c)
//structures had limitations
//             --->  members are public
//             --->  No methods
//classe------> structures + more
//classes----> can have methods and properties
//classes-----> can make few members as private & few as public
//Structures in c++ are typedefed
// You can declare objects along with the class declaration like this :
/*class Employee{
    Class definition
    hary, rohan, lovish;
};*/
//harry.salary = 8 makes no sense if salary is private
