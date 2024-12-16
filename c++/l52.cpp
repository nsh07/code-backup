#include <iostream>
using namespace std;

class shopitem {
    int id;
    float price;

   public:
    void setdata(int a, float b) {
        id = a;
        price = b;
    }
    void getdata() {
        cout << "the id of item is " << id << endl;
        cout << "the price of item is " << price << endl;
    }
};

int main() {
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptr_temp = ptr;

    int l, i;
    float k;
    for (i = 0; i < size; i++) {
        cout << "enter the value of id and price " << i + 1 << endl;
        cin >> l >> k;
        //(*ptr).setdata(l,k);
        ptr->setdata(l, k);
        //  (ptr + i + 1)->setdata(l, k);
        ptr++;
    }

    for (i = 0; i < size; i++) {
        ptr_temp->getdata();
        ptr_temp++;
        //  (ptr + i + 1)->getdata();
    }

    return 0;
}