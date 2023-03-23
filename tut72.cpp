// LISTS IN STL N C++. 
#include<iostream>
#include<list>
using namespace std;


void display(list<int> &lst){
    list<int>:: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; // LIST OF ZERO LENGTH 
    list1.push_back(5);   
    list1.push_back(7);   
    list1.push_back(1);   
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    // REMOVING ELEMETNS FROM THE LIST 
    // list1.pop_back();
    // list1.pop_back();    
    // // display(list1);
    
    // list1.pop_front();
    // display(list1);

    // list1.remove(9);
    // display(list1);

    // SORTING THE LIST 
    // list1.sort();
    // display(list1);

    //REVERSING THE LIST 
    list1.reverse();
    display(list1);   
    display(list1);   

    

    // Anoter method instead of display
    // list<int>:: iterator itr;
    // itr = list1.begin();
    // cout<< *itr<<" ";
    // itr++;

    // cout<< *itr<<" ";
    // itr++;

    // cout<< *itr<<" ";
    // itr++;

    // cout<< *itr<<" ";
    // itr++;

    // cout<< *itr<<" ";
    // itr++;

    list<int> list2(3); // LIST OF THREE LENGTH 
    list<int> :: iterator iter;
    iter = list2.begin();

    *iter = 45;
    iter++;

    *iter = 6;
    iter++;

    *iter = 9;
    iter++;
    display(list2);
    
    // MERGING THE LIST 
    list1.merge(list2);
    cout<<"List1 After Merging: "<<endl;
    display(list1);
   


    return 0;
}