#include <iostream>
using namespace std;
class bankdeposit {
    int principal;
    int year;
    float rate;
    float returnvalue;

   public:
    bankdeposit();
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void display();
};
bankdeposit::bankdeposit(int p, int y, float r) {
    principal = p;
    year = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++) {
        returnvalue =
            returnvalue * (1 + rate);  // if intereset rate like 0.04,0.05
    }
}
bankdeposit::bankdeposit(int p, int y, int R) {
    principal = p;
    year = y;
    rate = (float)R / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++) {
        returnvalue =
            returnvalue * (1 + rate);  // if intereset rate like 0.04,0.05
    }
}
void bankdeposit::display() {
    cout << "The principal value is " << principal << " and after " << year
         << " the return value is " << returnvalue << endl;
}

int main() {
    bankdeposit bd3;
    bd3.display();
    int p, y, R;
    float r;
    cin >> p >> y >> r;
    //  bankdeposit bd1 = bankdeposit(p, y, r);
    bankdeposit bd1(p, y, r);
    bd1.display();

    cin >> p >> y >> R;
    bankdeposit bd2 = bankdeposit(p, y, R);
    bd2.display();

    return 0;
}