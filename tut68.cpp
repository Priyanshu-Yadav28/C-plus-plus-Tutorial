// MEMBER FUNCTION TEMPLATES AND OVERLOADING TEMPLATE FUNCTION IN C++. 
#include<iostream>
using namespace std;

template <class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data = a;
    }

    void display();
};

template<class T>
void Harry<T>::display(){
    cout<<data<<endl;
} 

int func(int a){
    cout<<"This is func() "<<a<<endl;
}
template<class T> 
int func(T a){
    cout<<"This is templatized func() "<<a<<endl;
}

int main(){
    // Harry<float> h(5.7);
    // Harry<char> h('z');
    // Harry<float> h(5.9);
    // cout<<h.data<<endl;
    // h.display();
    func(4);//  EXACT MATCH TAKES THE HIGHEST PRIORITY. 
    


    return 0;
}