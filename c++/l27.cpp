#include <iostream>
using namespace std;
class complex;
class calculator {
   public:
    int sumrealpart(complex, complex);
    int sumcomplexpart(complex, complex);
};
class complex {
    int r, c;
    // Individually declaring functions as friends
    /* friend int calculator ::sumrealpart(complex o1, complex o2);
     friend int calculator ::sumcomplexpart(complex o1, complex o2);*/

    // alternative, make frienship betweeen classes, now every function can
    // acces private data
    friend class calculator;

    // -----------------------------------------------------------
    /*friend int calculator ::sumrealpart(complex o1, complex o2) {
        return o1.r + o2.r;
    }*/  // it will throw error.
    // ------------------------------------------------------------

   public:
    void setnum(int a, int b) {
        r = a;
        c = b;
    }
    void print() { cout << r << " + " << c << "i" << endl; }
};
int calculator ::sumrealpart(complex o1, complex o2) { return o1.r + o2.r; }
int calculator ::sumcomplexpart(complex o1, complex o2) { return o1.c + o2.c; }

int main() {
    complex o1, o2;
    o1.setnum(1, 4);
    o2.setnum(5, 7);
    calculator calc;
    int res = calc.sumrealpart(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcomplexpart(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
