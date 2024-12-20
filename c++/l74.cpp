//-------------Function Objects (Functors) In C++ STL-------------------

// Take refernce from cppreference.com or cplusplus.com for learn/Doubt

#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main() {
    /* Function Objects (Functor) : A function wrapped in a class so that it is
    available like an object*/

    int arr[] = {1, 73, 4, 12, 54, 16};
    // sort(arr, arr + 5); // it sort only first 5 elements i ascending order.
    //  sort(arr, arr + 6);// it sort whole array in ascending order.
    sort(arr, arr + 6, greater<int>());  // sort whole array in desencding order

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}