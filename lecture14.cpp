
// Created by Mithila Farjana on 2/10/26.
//
#include <iostream>
using namespace std;

class myClass {
//constructor name will be as same as classname
public: myClass(string a) {
        setName(a);
    }
    //get set method is public to access the variable

    void setName(string n) {
        name = n ;
    }
    string getname() {
        return name;
    }


    //make variable always private in class
private:
    string name;

};

int main () {

    myClass bo ("Mithila's Constructor");
    cout << bo.getname() << endl;

    myClass bo2 ("Mithila's Constructor 2");
    cout << bo2.getname() << endl;

    return 0;


}
