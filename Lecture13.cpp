//
// Created by Mithila Farjana on 2/10/26.
//
#include <iostream>
using namespace std;

class myClass {


    //get set method is public to access the variable
    public:
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
        myClass m;
        m.setName("Mithila");
        //as private variable need to use get to access the variable
        cout << m.getname() << endl;


}