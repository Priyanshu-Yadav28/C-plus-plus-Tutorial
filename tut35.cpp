//DESTRUCTORS IN C++
#include <iostream>
using namespace std;

// DESTRUCTOR NEVER TAKES AN ARGUMENT NOR DOES IT RETURNS ANY VALUE

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    //DESTRUCTOR
    ~num()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1" << endl;

    num n1;
    {
        cout << "Entering this block " << endl;
        cout << "Creating two more objects " << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main " << endl;
    return 0;
}