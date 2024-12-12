#include <math.h>

#include <iostream>
using namespace std;
class point {
    int x, y;

    friend int distance(point, point);
    // static int a1;

   public:
    static int a1;
    point(int a, int b) {
        x = a;
        y = b;
    }
    void displaypoint(void) {
        cout << "the " << a1 << " point is " << "(" << x << "," << y << ")"
             << endl;
        a1++;
    }
};
int point ::a1 = 1;
int distance(point p1, point p2) {
    int d = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    return d;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    point p1(a, b);
    // point p1(4, 4);
    p1.displaypoint();
    point p2(c, d);
    // point p2(7, 9);
    p2.displaypoint();
    cout << "the distance between points is " << distance(p1, p2) << endl;

    return 0;
}