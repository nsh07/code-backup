#include <iostream>
using namespace std;
class shop {
    int itemid[100];
    int itemprice[100];
    int counter;

   public:
    void counterinit() { counter = 0; }
    void set_price(void);
    void display_price(void);
};
void shop ::set_price() {
    cout << "enter the itemid" << endl;
    cin >> itemid[counter];
    cout << "enter the price of " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::display_price() {
    for (int i = 0; i < counter; i++) {
        cout << "the price of " << itemid[i] << " itemid is Rs." << itemprice[i]
             << endl;
    }
}

int main() {
    shop dukan;
    dukan.counterinit();
    dukan.set_price();
    dukan.set_price();
    dukan.set_price();
    dukan.display_price();
    return 0;
}