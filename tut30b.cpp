/* ANOTHER EXAMPLE OF PARAMETERIZED AND DEFAULT CONSTRUCTOR */

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public: 
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void PrintData()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

// QUIZ = Create a function(HINT= make it a friend funciton) which takes two point objects 
// and computes the distance between those two points

int main()

{

    Point P(1, 1);
    P.PrintData();

    Point Q(4, 6);
    Q.PrintData();

    return 0;
}