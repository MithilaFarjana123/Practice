//
// Created by Mithila Farjana on 2/10/26.
//
#include <iostream>
using namespace std;

//**********************
//class create and used public: to access the inside method from outside the class
class Something {
    //public :  this is access modifier
    public:
    void printS() {
        cout << "Hello World! lecture 12" << endl;
    }
};

int main() {
    //classname objectname ;
    Something obj ;//creating object of Something Class that we created
    obj.printS();
    return 0;
}