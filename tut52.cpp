// ARRAY OF OBJECTS USING POINTERS IN C++.

#include <iostream>
using namespace std;

class ShopItem
{
private:
    int Id;
    float Price;

public:
    void setData(int a, int b)
    {
        Id = a;
        Price = b;
    }
    void getData()
    {
        cout << "Code for this item is " << Id << endl;
        cout << "The price of this item is " << Price << endl;
    }
};
int main()
{
    int size = 3;
    int p, i;
    float q;

    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. GENERAL STORE ITEM 
    // 2. VEGGIES ITEM 
    // 3. HARDWARE ITEM

    //      1  2  3
    //      v
    //      |
    //      |
    //      | 
    //     ptr
    //    ptrTemp  
    ShopItem *ptr = new ShopItem[size];
    ShopItem *PtrTemp = ptr;
    for ( i = 0; i < size; i++)
    {
        cout<<"Id and price of this item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).getData(p,q);
        ptr->setData(p, q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout<<"Item Number "<<i+1<<endl;
        PtrTemp->getData();
        PtrTemp++;
    }
    
    

    return 0;
}