#include <iostream>

using namespace std;
int main() {
    int n1, n2;
    cout << "enter the value n1\n"; /*"<<"is insertion operator, kam - output
                                       screen par dikha do*/
    cin >> n1; /*">>" is called extraction operator, kam - jo input mile le lo*/
    cout << "enter the value of n2\n";
    cin >> n2;
    cout << "the sum is: " << n1 + n2;
    cout << "\nthe sub is: " << n1 - n2;
    cout << "\nthe multiply is: " << n1 * n2;
    cout << "\nthe division is: " << n1 / n2;

    return 0;
}