#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class suraj {
    T1 a;
    T2 b;
    T3 c;

   public:
    suraj(T1 x, T2 y, T3 c) {
        a = x;
        b = y;
        this->c = c;
    }
    void diplay() {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main() {
    // Default value will use  for T1,T2,T3,.....
    suraj<> s1(4, 7.569, 'v');
    // suraj s1(4, 7.569, 'v');// ye v Sahi hai.
    s1.diplay();
    cout << endl;

    // Passing Argument value will use for T1,T2,T3,.....
    suraj<char, char, float> s2('b', 'c', 9.8);
    s2.diplay();

    return 0;
}