
#include <iostream>
using namespace std;
class complex {
    int real;
    int imaginary;

   public:
    void setdata(int a, int b) {
        real = a;
        imaginary = b;
    }
    void getdata(void) {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
};

int main() {
    /*complex c1;
    c1.setdata(4, 5);
    c1.getdata();*/

    complex *ptr = new complex; /* it make a object of class complex and ptr
                                stores the address of object.*/
    //(*ptr).setdata(4, 5);
    // by using  ---- Arrow Operator -----
    ptr->setdata(4, 5); /* use the setdata function of object who is getting by
                         derefercing ptr.*/
    (*ptr).getdata();
    // ptr->getdata();

    // array of object
    complex *ptr1 = new complex[3];
    ptr1->setdata(41, 42);
    ptr1->getdata();

    (ptr1 + 1)->setdata(43, 44);
    (ptr1 + 1)->getdata();

    (ptr1 + 2)->setdata(45, 46);
    (ptr1 + 2)->getdata();
    return 0;
}