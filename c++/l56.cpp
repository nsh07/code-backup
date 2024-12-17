#include <iostream>
using namespace std;
class baseClass {
   public:
    int Var_base;
    virtual void display() {
        cout << "1. Dispalying Base class variable var_base  " << Var_base
             << endl;
    }
};
class derivedClass : public baseClass {
   public:
    int Var_derived;
    void display() {
        cout << "2.Dispalying Base class variable var_base " << Var_base
             << endl;
        cout << "2.Dispalying derived  class variable var_base " << Var_derived
             << endl;
    }
};

int main() {
    baseClass obj_base;
    derivedClass obj_derived;
    baseClass* baseClass_pointer;
    // Pointing base class pointer to derived class object
    baseClass_pointer = &obj_derived;
    baseClass_pointer->Var_base = 45;
    //  baseClass_pointer->var_derived = 46;
    baseClass_pointer->display();

    return 0;
}