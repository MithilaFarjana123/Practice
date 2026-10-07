//
// Created by Mithila Farjana on 2/10/26.
//
#include <iostream>
using namespace std;

//function prorotyping; as i'll call it in main i need to declear before it
void printSomething() ;

int main() {

    //lecture3
    /*
    cout << "I love tea \n" ;
    cout << "I love tea \n \n" ;

    cout << "I love tea" << endl;
    */

    //lecture 4 : veriables

    /*
    int tuna = 4;
    cout <<tuna ;

//new line print
    cout << "\n";

    int a = 4;
    int b = 25;
    int sum = a+b;

    int diff = 48-3;

    cout << sum <<endl;
    cout << diff <<endl;
    */

    //lecture 5 : creating a basic calculator
    /*
    // creating declearation (as i dont assaing velue now ,will do it latter)
    //variable diclear;
    int a ;
    int b;
    int sum;

    cout << "Enter a number: \n";
    cin >> a;     //input take and assagin to a
    cout << "Enter a number: \n";
    cin >> b;
    sum = a+b;
    cout << "Sum of this two value : "<<sum << endl;
    */

    //lecture 6 : veriable memory concenpt
    /*
    int tuna = 96; //tune have a memory location where 96 stored
    tuna= 75;  //75 is stored in tune and wipe up 96
    cout << tuna;
    */

    //lecture 7 : Associative operator

    //int a = (4+3)*7;   //() first  */ 2nd   + - 3rd
    //cout << a << endl;

    //int b = 4+3*7;
    //cout << b << endl;
    //int c = 81/4 ;
    //cout << c << endl;
    //int d =81%4;
    //cout << d ;


    //lecture 8 : Relational operator
    /*
    ////////////////////////////////////////////////
    if (3<4) {
        cout << "Hello World 3 is less than 4";
    }

    cout << "\n";

    if (3>4) {
        cout << "Hello World 3 is less than 4";
    }

    if (3==4) {
        cout << "Hello World 3 is equal 4";
    }

    if (3==3) {
        cout << "Hello World 3 is equal 3";
    }
    cout << "\n";

    if (3!=4) {
        cout << "Hello World 3 is not equal 4";
    }
    cout << "\n";
    if (3<=4) {
        cout << "Hello World 3 is less or equal 4";
    }
    cout << "\n";
    if (3>=4) {
        cout << "Hello World 3 is greater or equal 4";
    }
    cout << "\n";

    if (3>=3) {  //if one condition is right it will word
        cout << "Hello World 3 is less or equal 3";
    }
    */


    ////////////////////////////
    //lecture 9
    printSomething();

    return 0;
}


//lecture 9 : Functions and prototyping

    void printSomething() {
    cout << "Hello World";

    }

