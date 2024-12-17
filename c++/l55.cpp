#include <iostream>
using namespace std;

class baseClass {
   public:
    int Var_base;
    void display() {
        cout << "Dispalying Base class variable var_base  " << Var_base << endl;
    }
};
class derivedClass : public baseClass {
   public:
    int Var_derived;
    void display() {
        cout << "Dispalying Base class variable var_base " << Var_base << endl;
        cout << "Dispalying derived  class variable var_base " << Var_derived
             << endl;
    }
};
int main() {
    baseClass obj_base;
    derivedClass obj_derived;
    baseClass* baseClass_pointer;
    // Pointing base class pointer to derived class object
    baseClass_pointer = &obj_derived;
    baseClass_pointer->Var_base = 35;
    // baseClass_pointer->var_derived = 75;// Will throw an error
    baseClass_pointer->display();

    baseClass_pointer->Var_base = 78;
    baseClass_pointer->display();

    derivedClass* derivedClass_pointer;
    derivedClass_pointer =
        &obj_derived;  // Pointing derived class pointer to derived class object
    derivedClass_pointer->Var_derived = 789;
    derivedClass_pointer->display();

    // derivedClass_pointer = &obj_base;  // this will  not allowed
    return 0;
}