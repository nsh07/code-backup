#include <iostream>
// #include <math.h>
#include <cmath>  // extensions of math.h
// in all trigonometric , angles should be in radian

using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and
performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function
and performs any four scientific operations of your choice and displays the
results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple
and scientific calculator. Q4. How is code reusability implemented?
*/
class SimpleCalculator {
   protected:
    int x, y;

   public:
    void setdata1(int a, int b) {
        x = a;
        y = b;
    }
    void calculations1(int a, int b) {
        setdata1(a, b);
        cout << "the sum of the numbers is " << x + y << endl;
        cout << "the subtraction of the numbers is " << x - y << endl;
        cout << "the multiplication of the numbers is " << x * y << endl;
        cout << "the division of the numbers is " << x / y << endl;
    }
};

class ScientificCalculator {
   protected:
    int x, y;

   public:
    void setdata2(int a, int b) {
        x = a;
        y = b;
    }
    void calculations2(int a, int b) {
        setdata2(a, b);
        // in all trigonometric , angles should be in radian
        cout << "the sin of the numbers is " << sin(x) << "," << sin(y) << endl;
        cout << "the cosine of the numbers is " << cos(x) << "," << cos(y)
             << endl;
        cout << "the tan of the numbers is " << tan(x) << "," << tan(y) << endl;

        cout << "the sin_inverse of the numbers is " << asin(x) << ","
             << asin(y) << endl;
        cout << "the cosine_inverse of the numbers is " << acos(x) << ","
             << acos(y) << endl;
        cout << "the tan_inversse of the numbers is " << atan(x) << ","
             << atan(y) << endl;

        cout << "the log of the numbers is  " << log(x) << "," << log(y)
             << endl;
        cout << "the exponential of the numbers is  " << exp(x) << "," << exp(y)
             << endl;
        cout << "the cuberoot of the numbers is  " << cbrt(x) << "," << cbrt(y)
             << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
   public:
    void display(int a1, int b1, int c) {
        if (c == 1) {
            calculations1(a1, b1);
        } else if (c == 2) {
            calculations2(a1, b1);
        }
    }
};

int main() {
    int x, y, z;
    cout << "enter 1> for using SimpleCalculator" << endl
         << "      2>for using ScientificCalculator" << endl;
    cin >> z;
    cout << "enter number a and b" << endl;
    cin >> x >> y;
    HybridCalculator h1;
    h1.display(x, y, z);

    return 0;
}