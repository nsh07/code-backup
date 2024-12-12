#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int m;
    cin >> m;
    while (m--) {
        int n, k, p;
        cin >> n >> k >> p;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int temp = a[0];
        for (int i = 0; i < n; i++) {
            if (temp < a[i]) {
                temp = a[i];
            }
        }
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == temp) {
                continue;
            } else {
                c += a[i];
            }
        }

        if (c + p < k + temp) {
            cout << "Ved" << endl;
        } else if (c + p > k + temp) {
            cout << "Varun" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }

    return 0;
}