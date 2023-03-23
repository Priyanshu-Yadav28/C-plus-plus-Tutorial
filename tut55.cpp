// POINTORS TO DERIVED CLASS .
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_Base;
    void display()
    {
        cout << "Displaying BaseClass variable var_BaseClass  " << var_Base<<endl;
    }
};

class DerivedClass : public BaseClass
{
public:
int var_Derived;
    void display()
    {
        cout<<"Displaying BaseClass variable var_Base "<<var_Base<<endl;
        cout<<"Displaying DerivedClass variable var_Derived "<<var_Derived<<endl;
    }
};
int main()
{
    BaseClass *base_class_pointor;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointor = & obj_derived; // POINTING BASE CLASS POINTOR TO DERIVED CLASS

    base_class_pointor->var_Base = 34;
    // base_class_pointor->var_Derived = 998; //  will throw an error 
    base_class_pointor->display(); 

    base_class_pointor->var_Base = 3400;
    base_class_pointor->display();

    DerivedClass * derived_class_pointor;
    derived_class_pointor = & obj_derived;

    derived_class_pointor->var_Derived = 220;
    derived_class_pointor->display();

    return 0;
}
