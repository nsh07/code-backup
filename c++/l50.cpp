#include <iostream>
using namespace std;

int main() {
    int a = 25;
    int* ptr = &a;
    *ptr = 498;
    cout << "the value of a is " << *ptr << endl;

    int* arr = new int[3]; /* new ,dymacilly 3 continous block allocate kar do
                            jo int store kar sake ,pahle wale block ka address
                            de dega arr ko. */
    // all syntax are right of array
    arr[0] = 15;
    *(arr + 1) = 20;
    2 [arr] = 25;

    delete[] arr;  // it free the dynamicaly alllocated memory
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}