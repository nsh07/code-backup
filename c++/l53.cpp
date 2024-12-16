#include <iostream>
using namespace std;
class A {
    int a;

   public:
    A& setdata(int a) {
        // a = a;//local variable ko jyada priority milega and class ka a
        // garbage value se inialize ho jayega.
        this->a = a;
        return *this;
    }
    void getdata(void) { cout << "the value of a is " << a << endl; }
};

int main() {
    A a;
    a.setdata(44).getdata();
    // a.setdata(4);
    // a.getdata();

    return 0;
}