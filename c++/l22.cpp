// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
using namespace std;
class binary {
    /* private:
     string s;*/ //both are same  here  ,by default private hota hai agar aap public nhi likhe to
    string s;
    void check_binary();

   public:
    void read_binary();
    // void check_binary();
    void ones_complement();
    void display_binary();
};
void binary ::read_binary() {
    cout << "enter the binary number" << endl;
    cin >> s;
}
void binary ::check_binary() {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "incorrect binary number" << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement() {
    check_binary();  // nesting of member function
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '1') {
            s.at(i) = '0';
        } else {
            s.at(i) = '1';
        }
    }
}
void binary ::display_binary() {
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
    cout << endl;
}

int main() {
    binary n;
    n.read_binary();
    /// n.check_binary();
    n.ones_complement();
    n.display_binary();
    return 0;
}