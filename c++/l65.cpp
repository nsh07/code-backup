// --------Template with multiple parameters--------

#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class sum {
    T1 data1;
    T2 data2;
    T3 data3;

   public:
    sum(T1 data1, T2 b, T3 c) {
        this->data1 = data1;
        data2 = b;
        data3 = c;
    }
    void display() {
        cout << "The sum of the number is " << data1 + data2 + data3 << endl;
    }
};

int main() {
    sum<int, char, float> s(4, 'b', 75.49);
    s.display();

    sum<int, int, int> s1(4, 6, 8);
    s1.display();

    sum<int, float, int> s2(4, 6.45, 8);
    s2.display();

    sum<float, float, float> s3(4.78, 6.45, 8.98);
    s3.display();
    return 0;
}