//--------Abstract Base Class & Pure Virtual Functions---------

// Abstract Base Class
/* the base class who atleast contain one  Pure Virtual Function((do-nothing
 functions)) is Abstract Base Class.*/

// Pure Virtual Functions(do-nothing functions)
/*the function which have to define in all derive class (complusary),nhi to
 error milega is called Pure Virtual Functions(do-nothing functions)

  Syntax:
  virtual data_type function_name(arguments) = 0 ;

 */

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
    virtual void display() = 0;  // Pure Virtual Functions(do-nothing function)
};

class CWHvideo : public CWH {
    float videolength;

   public:
    CWHvideo(string s, float r, float length) : CWH(s, r) {
        videolength = length;
    }
    void display() {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes"
             << endl;
    }
};

class CWHtext : public CWH {
    int words;

   public:
    CWHtext(string s, float r, int w) : CWH(s, r) { words = w; }
    void display() {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating
             << " out of  5 stars " << endl;
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
