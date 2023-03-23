// PROTECTED ACCESS MODIFIRES IN C++. 
#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    
    public:
    int b;
};

class Derived : Base{

};
/* 
                       | PUBLIC DECLARATION  |    PRIVATE DECLARATION |   PROTECTED DECLARATION  
-----------------------|---------------------|------------------------|------------------------
1. PRIVATE MEMBERS:    |    Not inherited    |      Note inherited    |      Not inherited 
-----------------------|---------------------|------------------------|-----------------------
2. PROTECTED MEMBERS:  |     Protected       |        Private         |       Protected 
-----------------------|---------------------|------------------------|--------------------
3. PUBLIC MEMBERS:     |     Public          |         Public         |        Public      
*/

int main(){
    Base b;
    Derived d;
    //cout<<b.a;
    
    return 0;
}