//OBJECTS MEMORY ALLOCATION AND USING ARRAYS IN CLASSES 

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter itemprice " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item ID with " << itemId[i] << "is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

   
    return 0;
}