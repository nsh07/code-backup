//-----------Vector In C++ STL--------------
//-----------https://cplusplus.com/reference/vector/vector/--------------------
//  Also see the Comments in lecture by Gurubrothers.

#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";f
    }
    cout << endl;
}
int main() {
    // ways to create a vector
    vector<int> vec1;  // zero length integer vector

    int element, size;
    //     cout<<"Enter the size of your vector"<<endl;
    //     cin>>size;
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout<<"Enter an element to add to this vector: ";
    //         cin>>element;
    //         vec1.push_back(element);
    //     }
    //   // display(vec1);
    //     // vec1.pop_back();
    //     // display(vec1);

    //     vector<int> :: iterator iter = vec1.begin();
    //     vec1.insert(iter+1,500,566);
    //     display(vec1);

    vector<char> vec2(4);  // 4-element character vector
    vec2.push_back('2');
    display(vec2);

    vector<char> vec3(vec2);  // 4-element character vector from vec2
    // display(vec3);

    vector<int> vec4(6, 3);  // 6-element vector of 3s like 3,3,3,3,3,3
    display(vec4);
    cout << vec4.size();

    return 0;
}
