//-------------Maps in C++ STL----------------------
//----- https://cplusplus.com/reference/map/map/-----
// Also see the Comments in lecture by Gurubrothers.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Map is an associative array.

    map<string, int> MarksMap;

    MarksMap["harry"] = 98;
    MarksMap["jack"] = 45;
    MarksMap["rohan"] = 67;

    MarksMap.insert({{"ram", 13}, {"ramesh", 17}});

    map<string, int>::iterator iter;

    for (iter = MarksMap.begin(); iter != MarksMap.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << "The size is :" << MarksMap.size();
    cout << "The maximum size is :" << MarksMap.max_size();
    cout << "The empty's return value  is :" << MarksMap.empty();
    return 0;
}