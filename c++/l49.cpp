// ---------Initialization list in Constructors-----------

// Syntax for Initialization list in Constructors
/*
 Constructor(argument_list mane arguments) :initialziation-section{
   assignment + other code;
 }

*/

#include <iostream>
using namespace std;
class test {
    int a;
    int b;

   public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j)  : a(i),  b(i + j)
    // test(int i, int j): a(i),    b(2 * j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : a(b), b(j)
    test(int i, int j)  //:  b(a), a(i)// RED FLAG ->this will create a problem
                        //:  because a will be inailized fist
    {
        // a = b + i;  // jo pahle declare hua wo pahle inialize hoga
        b = a + j;
        a = i;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main() {
    test t(4, 6);
    return 0;
}