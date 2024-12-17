//--------Virtual Functions---------
// See with patience, First once Run it then proceed.

#include <iostream>
using namespace std;
class CWH {
   protected:
    string title;
    float rating;

   public:
    CWH(string title, float r) {
        this->title = title;
        rating = r;
    }
    virtual void display() {
        cout << "With virtual keyword it is ready to show polymorphism and it "
                "always give priority to function of "
                "object class if that function is not found in object class "
                "then the functon "
                "of base class will be invoked automatically."
             << endl;
    }
    /* void display() {
         cout << "Without virtual keyword base class'dislay function called
     beacuse of it is decided by " "type of pointer not object"
              << endl;
     }*/
};

class CWHvideo : public CWH {
    float videolength;

   public:
    CWHvideo(string s, float r, float length) : CWH(s, r) {
        videolength = length;
    }
    // void display() {
    //     cout << "This is an amazing video with title " << title << endl;
    //     cout << "Ratings: " << rating << " out of 5 stars" << endl;
    //     cout << "Length of this video is: " << videolength << " minutes"
    //          << endl;
    // }
};

class CWHtext : public CWH {
    int words;

   public:
    CWHtext(string s, float r, int w) : CWH(s, r) { words = w; }
    void display() {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars"
             << endl;
        cout << "No of words in this text tutorial is: " << words << " words"
             << endl;
    }
};

int main() {
    string str;
    float rating, length;
    int words;
    // for Code With Harry Video
    str = "introduction to costructor";
    rating = 4.9;
    length = 8.68;
    CWHvideo v1(str, rating, length);

    // for Code With Harry Text
    str = "introduction to costructor";
    rating = 4.78;
    words = 576;
    CWHtext t1(str, rating, words);

    CWH* ptr[2];  // it is  array of pointers.
    ptr[0] = &v1;
    ptr[1] = &t1;

    ptr[0]->display();
    cout << "-------------" << endl;
    ptr[1]->display();

    return 0;
}

//-----Rules for virtual functions-----
/*
 1.  They cannot be static.
 2.  They are accesed by object Pointers.
 3. Virtaul Functions can be friend be of another class.
 4. A Virtual function in base class might not be used.
 5. if a Virtual function is defined in the base class , there is no necessary
    of redefing it in the derived class.
*/