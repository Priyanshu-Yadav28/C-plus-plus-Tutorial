// VIRTUAL BASE CLASS, CODE DEMONSTRATION IN C++.
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void Print_number(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void Print_marks(void)
    {
        cout << "Your result is here " << endl
             << "Maths:" << maths << endl
             << "Physics:" << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        Print_number();
        Print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};
int main()
{
    Result harry;
    harry.set_number(420);
    harry.set_marks(70.2, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}