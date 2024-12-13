// multilevel inhertitance
// ----- Notes----
/*
if we are inherting B from A and C from B : [  A---->B---->C ]
1. A is the base class for B and B is the base class for C.
2. A---->B---->C  is called Inheritance path.

*/

#include <iostream>
using namespace std;
class student {
   protected:
    int rollnumber;

   public:
    void set_rollnumber(int n);
    void get_rollnumber(void);
};
void student ::set_rollnumber(int n) { rollnumber = n; }

void student::get_rollnumber(void) {
    cout << "The roll number is " << rollnumber << endl;
}

class marks : public student {
   protected:
    float maths;
    float physics;

   public:
    void setmarks(float n1, float n2);
    void getmarks(void);
};
void marks ::setmarks(float n1, float n2) {
    maths = n1;
    physics = n2;
}
void marks ::getmarks() {
    cout << "The marks of mathematics is " << maths << endl;
    cout << "The marks of physics is " << physics << endl;
}

class result : public marks {
    float percentage;

   public:
    void display(void) {
        get_rollnumber();
        getmarks();
        cout << "The pecentage of student is  is " << (maths + physics) / 2
             << "%" << endl;
    }
};

int main() {
    result r1;
    r1.set_rollnumber(21);
    r1.setmarks(98.0, 97.5);
    r1.display();

    return 0;
}