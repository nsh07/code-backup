#include <iostream>
using namespace std;
/*
Inheritance:
student ----> test [Done]
student ----> sports [Done]
test ----> result [Done]
sports ----> result [Done]
*/
class student {
   protected:
    int roll_number;

   public:
    void set_rollnumber(int n) { roll_number = n; }
    void get_rollnumber(void) {
        cout << "Your roll number is " << roll_number << endl;
    }
};

// class test :  public virtual student// both are right
class test : virtual public student {
   protected:
    float maths, physics;

   public:
    void set_marks(float n1, float n2) {
        maths = n1;
        physics = n2;
    }
    void get_marks(void) {
        cout << "Your marks in maths is " << maths << endl;
        cout << "Your marks in physics is " << physics << endl;
    }
};
class sports : virtual public student {
   protected:
    float s_marks;

   public:
    void set_s_marks(int n) { s_marks = n; }
    void get_s_marks(void) {
        cout << "Your marks in sports is " << s_marks << endl;
    }
};
class result : public test, public sports {
   private:
    float marks;

   public:
    void displaymarks() {
        marks = maths + physics + s_marks;
        get_rollnumber();
        get_marks();
        get_s_marks();
        cout << "The total marks of roll number " << roll_number << " is "
             << marks << endl;
    }
};

int main() {
    result suraj;
    suraj.set_rollnumber(79);
    suraj.set_marks(78.5, 79.85);
    suraj.set_s_marks(9);
    suraj.displaymarks();

    return 0;
}