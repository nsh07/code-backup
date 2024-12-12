#include <iostream>
using namespace std;
class complex {
    int r, c;
    friend complex sum(complex o1, complex o2);

   public:
    // friend complex sum(complex o1, complex o2);//both are right,it may bi
    // private or public
    void setnum(int a, int b) {
        r = a;
        c = b;
    }
    void print() { cout << r << " + " << c << "i" << endl; }
};
complex sum(complex o1, complex o2) {
    complex o3;
    o3.setnum((o1.r + o2.r), (o1.c + o2.c));
    return o3;
}

int main() {
    complex o1, o2, complexsum;
    o1.setnum(3, 4);
    o1.print();
    o2.setnum(4, 9);
    o2.print();
    complexsum = sum(o1, o2);
    complexsum.print();

    return 0;
}
/* ----Properties of friend functions----

1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the
   object of that class. c1.sumComplex() == Invalid
3. it Can be invoked without the help of any object
4. it is Usually contans the objects as arguments
5. it Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need
   object_name.member_name to access any member.

*/