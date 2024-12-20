//---------------------List In C++ STL-----------------------------
//--------https://en.cppreference.com/w/cpp/container/list---------
//  Also see the Comments in lecture by Gurubrothers.

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst) {
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> list1;  // empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    // list1.push_back(9);
    list1.push_back(12);

    display(list1);

    // Removing elements from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);
    // display(list1);

    // Sorting the list
    // list1.sort();
    // display(list1);

    // Reversing the List
    // list1.reverse();
    // display(list1);

    list<int> list2(3);  // empty list of length 3
    list<int>::iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;

    display(list2);

    // Merging the lists
    // list1.merge(list2);
    // cout << "list1 after Merging : ";
    // display(list1);

    // Swapping of list
    // list1.swap(list2);
    // display(list1);
    // display(list2);

    return 0;
}
