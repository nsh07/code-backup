#include <iostream>
using namespace std;

class base1 {
    int base1_int;

   public:
    base1(int a) {
        base1_int = a;
        cout << "Base1 class constructor called" << endl;
    }
    void display_base1int(void) {
        cout << "the value of  base1_int is " << base1_int << endl;
    }
};

class base2 {
    int base2_int;

   public:
    base2(int a) {
        base2_int = a;
        cout << "Base2 class constructor called" << endl;
    }
    void display_base2int(void) {
        cout << "the value of  base1_int is " << base2_int << endl;
    }
};

class derived : public base1,
                public base2
// class derived : public base2, public base1// jo pahle likha hai base class me
// wo pahle call hoga, here base2
{
    int derived1;
    int derived2;

   public:
    derived(int a, int b, int c, int d) : base1(c), base2(d) {
        derived1 = a;
        derived2 = b;
        cout << "derived class constructor called" << endl;
    }
    void display(void) {
        display_base1int();
        display_base2int();
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};

int main() {
    derived d1(3, 4, 5, 6);
    d1.display();

    return 0;
}