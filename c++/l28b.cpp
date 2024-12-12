#include <iostream>
using namespace std;
class vk;
class msd {
    int n1;
    // friend void swap(int &, int &);
    friend void swap(msd &, vk &);

   public:
    void setdata(int k) { n1 = k; }
    void display() { cout << n1 << endl; }
};
class vk {
    int n2;
    // friend void swap(int &, int &);
    friend void swap(msd &, vk &);

   public:
    void setdata(int k) { n2 = k; }
    void display() { cout << n2 << endl; }
};
void swap(msd &o1, vk &o2) {
    int temp = o1.n1;
    o1.n1 = o2.n2;
    o2.n2 = temp;
}

int main() {
    msd o1;
    vk o2;

    o1.setdata(44);
    o2.setdata(45);
    // swap(o1.n1, o2.n2);
    swap(o1, o2);
    cout << "the value of the data of  o1 is - " << endl;
    o1.display();
    cout << "the value of the data of  o2 is - " << endl;
    o2.display();

    return 0;
}