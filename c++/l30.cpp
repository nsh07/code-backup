#include <iostream>
using namespace std;
class Complex {
    int a, b;

   public:
    Complex(int, int);  // Constructor declaration

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(
    int x,
    int y)  // ----> This is a parametrized constructor as it accepts parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}
int main() {
    // implicit call
    Complex o1(3, 4);
    o1.printNumber();
    // explicit call
    Complex o2 = Complex(4, 5);
    o2.printNumber();

    return 0;
}