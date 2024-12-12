#include <iostream>
using namespace std;
class y;
class x {
    int data;
    friend void sum(x, y);

   public:
    void setvalue(int a) { data = a; }
};

class y {
    int num;
    friend void sum(x, y);

   public:
    void setvalue(int a) { num = a; }
};
void sum(x a, y b) { cout << "the sum is " << a.data + b.num << endl; }

int main() {
    x a1;
    a1.setvalue(5);
    y a2;
    a2.setvalue(10);
    sum(a1, a2);
    return 0;
}