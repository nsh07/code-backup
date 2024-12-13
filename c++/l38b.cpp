// single inhertihance
//  private visibility mode

#include <iostream>
using namespace std;

class base {
    int data1;  // private by default and is not inheritable

   public:
    int data2;
    void setdata() {
        data1 = 10;
        data2 = 20;
    }
    int getdata1() { return data1; }
    int getdata2() { return data2; }
};

class derived : base
// class derived : private base// both are right becuase default private hi hota
// hai

{
    int data3;

   public:
    void process() {
        setdata();
        data3 = data2 * getdata1();
    }
    void display() {
        cout << "Value of data 1 is " << getdata1() << endl;
        cout << "Value of data 2 is " << data2 << endl;
        cout << "Value of data 3 is " << data3 << endl;
    }
};

int main() {
    derived dr1;
    // dr1.setdata();// this will throw error because setdata  is now private
    dr1.process();
    dr1.display();

    return 0;
}