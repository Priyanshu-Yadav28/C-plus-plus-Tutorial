//FUNCTIONS AND FUNCTIONS PROTOTYPES 

#include<iostream> 
using namespace std;

int sum(int a, int b);

void g(void);

int main(){
   int num1, num2;
   cout<<"Enter the value of num 1"<<endl;
   cin>>num1;
   cout<<"Enter the value of num 2"<<endl;
   cin>>num2;
   // num1 and num2 are actual parameteres 

   cout<<"The sum is "<<sum(num1,num2);
   g();

    
    return 0;
}
//function prototyping 
int sum(int a, int b){

    int c = a+b;
    return c;
}

void g(){
    cout<<endl<<"Hello, Good Morning"<<endl;

}
