#include <iostream>
using namespace std;
int swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
    return a;
}

int main() {
    int a = 4, b = 5;
    swap(a, b);
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << a

        return 0;
}