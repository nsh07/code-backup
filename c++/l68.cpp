//-------------Member Function Templates & Overloading Template
// Functions-------------------

// ----Member Function Templates and Define Outside of Class.
#include <iostream>
using namespace std;

template <class T1, class T2>
class harry {
   public:
    T1 a;
    T2 b;
    harry(T1 x, T2 y) {
        a = x;
        b = y;
    }
    // Definining a member function template inside class
    // void display() { cout << a << endl; }
    void display();
};

// Definining a member function template outside class
template <class T1, class T2>
void harry<T1, T2>::display() {
    cout << a << endl;
    cout << b << endl;
}

//-------Overloading Template Functions------
void display(int a) { cout << "i am the first function() " << a << endl; }

template <class T>
void display(T a) {
    cout << "i am the templatelized function() " << a << endl;
}
template <class T>
void display1(T a) {
    cout << "i am the templatelized function() " << a << endl;
}

int main() {
    // Part of Member Function Templates
    //  harry d(4, 5);
    harry d(4.78, 'c');
    // harry d('v', 'c');
    cout << d.a << endl;
    cout << d.b << endl;
    d.display();

    // Part of Overloading Template Functions
    display(4);   // Exact match takes highest priority.
    display1(78); /* Exact match can make by function template takes second
                   priority.*/

    return 0;
}