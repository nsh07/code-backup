#include <iostream>

using namespace std;

int cache[100][100] = {0};

int s(int n, int r) {
    if (r > n || r < 1) {
        return 0;
    }
    if (n == r || r == 1) {
        cache[n][r] = 1;
        return 1;
    }

    if (cache[n][r] != 0) {
        return cache[n][r];
    } else {
        cache[n][r] = r * s(n - 1, r) + s(n - 1, r - 1);
        return cache[n][r];
    }
}

int main() {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            cout << s(j+1, i+1) << '\t';
        }
        cout << '\n';
    }
}