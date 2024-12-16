// multiple iheritance

#include <iostream>
using namespace std;

// synatx for inhertating multiple clas
/*
 class derivedc: visibilty_mode base1 , isibilty_mode base2
 {
  class body of class derivedc
 };
*/

class base1 {
   protected:
    int base1int;

   public:
    void set_base1int(int n) { base1int = n; }
};
class base2 {
   protected:
    int base2int;

   public:
    void set_base2int(int n) { base2int = n; }
};

class base3 {
   protected:
    int base3int;

   public:
    void set_base3int(int n) { base3int = n; }
};
class base4 {
   protected:
    int base4int;

   public:
    void set_base4int(int n) { base4int = n; }
};
class derived : public base1, public base2, public base3, public base4 {
   public:
    void display() {
        cout << "The value of base1int is " << base1int << endl;
        cout << "The value of base2int is " << base2int << endl;
        cout << "The value of base3int is " << base3int << endl;
        cout << "The value of base4int is " << base4int << endl;
        cout << "The sum of the variable is "
             << base1int + base2int + base3int + base4int << endl;
    }
};
/*
the inhertiated derived class will looks something like this:
Data Members:
    base1int ---->protected
    base2int ---->protected
    base3int ---->protected
    base4int ---->protected

 Member Functions:
set_base1int() ----> Public
set_base2int() ----> Public
set_base3int() ----> Public
set_base4int() ----> Public
  display()    ----> Public
*/

int main() {
    derived d1;
    d1.set_base1int(45);
    d1.set_base2int(15);
    d1.set_base3int(18);
    d1.set_base4int(12);
    d1.display();
    return 0;
}