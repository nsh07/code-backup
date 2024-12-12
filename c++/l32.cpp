#include <iostream>
using namespace std;
class simple {
    int data1, data2, data3;

   public:
    simple(int x = 5, int y = 15, int z = 20) {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void display();
};
void simple::display() {
    cout << "the value of data are :" << data1 << "," << data2 << "," << data3
         << endl;
}

int main() {
    simple s1;  // it acts as default constructor
    // simple s4();//it got error likr ->> empty parentheses were disambiguated
    // as a function declaration
    s1.display();

    simple s2(10);
    s2.display();

    simple s3(10, 20);
    s3.display();

    simple s4(10, 20, 30);
    s4.display();

    return 0;
}