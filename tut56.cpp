// VIRTUAL FUNCTIONS IN C++. 
#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_Base = 1;
    virtual void display(){     // by inserting virtual keyword this function won't be called 
        cout<<"1 Displaying BaseClass variable var_Base "<<var_Base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_Derived;
    void display(){
        cout<<"2 Displaying BaseClass variable var_Base "<<var_Base<<endl;
        cout<<"2 Displaying DerivedClass variables var_derived "<<var_Derived<<endl;
    }
};

int main()
{
    BaseClass* base_class_pointor;
    BaseClass obj_base1;
    DerivedClass obj_derived;
    base_class_pointor = & obj_derived;

    base_class_pointor->display();


    return 0;
}