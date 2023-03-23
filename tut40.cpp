// MULTILEVEL INHERITENCE IN C++.
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display(void)
    {
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
/* 
NOTES:
        IF WE ARE INHERITING B FROM A AND C FORM B:[A------>B----->C]
1. A IS THE BASE CLASS FOR B AND B IS THE BASE CLASS FOR C
2. A---->B---->C IS CALLED INHERITENCE PATH  
 */

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.get_roll_number();
    harry.set_marks(90, 90);
    harry.get_marks();
    harry.display();

    return 0;
}