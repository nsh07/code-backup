#include <iostream>
using namespace std;
// template <class T1, class T2>

// float funcavg(T1 x, T2 y) {
//     float c = (x + y) / 2.0;
//     return c;
// }

template <class T>
/* swap keyword standard namespace me define hota hai , it will throw error , so
we use swapp.*/
void swapp(T &x, T &y) {
    T z = x;
    x = y;
    y = z;
}

int main() {
    /*float k;
     k = funcavg(3, 7);
     cout << "the average is " << k;*/

    // int a = 3,b = 4;// T will be automatically int.
    float a = 3.78, b = 4.85;  // T will be automatically float.
    swapp(a, b);
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b;
    return 0;
}