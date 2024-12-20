#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // declaring an object of the type ofstream
    ofstream out;

    // connecting the object out to the text file using the member function
    // open()
    out.open("l60.txt");

    // writing to the file
    out << "this is file" << endl;
    out << "contains the information" << endl;
    out << "about file i/o" << endl;
    out << "in c++" << endl;

    // closing the file connection
    out.close();

    // declaring an object of the type ifstream
    ifstream in;

    // declaring string variable str
    string str;

    // opening the text file into in
    in.open("l60.txt");

    // in >> str;//this will take only  a single word or until a space come like
    // scanf.

    // giving output the string lines by storing in str until the file reaches
    // the end of it.
    while (in.eof() == 0) {
        // using getline to fill the whole line in str
        getline(in, str);
        cout << str << endl;
    }

    // closing the file connection
    in.close();

    return 0;
}