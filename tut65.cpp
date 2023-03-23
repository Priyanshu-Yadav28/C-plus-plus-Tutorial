// TEMPLATES WITH MULTIPLE PARAMETERS IN C++. 
#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERES(ONE, TWO OR MORE THAN TWO)
template <class T1, class T2...(comma seperated)>
class nameofclass{
    // body
}
*/

template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }    
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main(){
    myclass<float, char> obj(1.8, 'C');     
    obj.display();


    return 0;
}