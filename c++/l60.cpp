#include <fstream>  //in this class are predifened which helps in file i/o
#include <iostream>
using namespace std;

/*These are some useful classes for working with files in C++

1. fstreambase -->Base class
2. ifstream    --> derived from fstreambase
3. ofstream    --> derived from fstreambase*/

/*In order to work with files in C++, you will have to open it. Primarily, there
are 2 ways to open a file:

1. Using the constructor
2. Using the member function open() of the class*/
int main() {
    string st = "Harry Bhai";
    string st2;
    // Opening files using constructor and writing it
    ofstream obj1("l60.txt");  // write operation
    obj1 << st;
    // Opening files using constructor and reading from it
    ifstream obj2("l60b.txt");

    // obj2 >> st2; //this will take only  a single word or until a space come
    // like scanf.
    getline(obj2, st2);  // it is used to give a line
    cout << st2;
    return 0;
}