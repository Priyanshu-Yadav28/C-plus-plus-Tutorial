// VECTORS IN STL(STANDARD TEMPLATE LIBRARY) IN C++ 
#include<iostream> 
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector " <<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";           
        // cout<<v.at(i)<<" ";           
    }
    cout<<endl;
    
}
int main(){
    // WAYS TO CREATE A VECTOR:
    vector<int> vec1; // ZERO LENGTH INTEGER VECTOR 
    int element, size = 5;
    // cout<<"Enter the size of the vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element to add to this vector "<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // vec1.pop_back(); // LAST ELEMENT WILL NOT BE DISPLAYED 

    // display(vec1);    
    
    // vector<int> ::iterator iter = vec1.begin();  --------> ITRATOR 
    // // vec1.insert(iter+1,3, 566);
    // display(vec1);

    vector<char> vec2(4); // 4-element character vector 
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); // 4-element character from vec2
    // display(vec3);
    vector<int>vec4(6,3); //6-element vector of 3s
    display(vec4);
    cout<<vec4.size();
    
    



    return 0;
}