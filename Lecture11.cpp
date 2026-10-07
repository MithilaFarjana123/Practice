//
// Created by Mithila Farjana on 2/10/26.
//
#include <iostream>
using namespace std;

void printSomething(int x) {
    cout << "Hello World!" << x <<endl;
}

int multiplePerametter(int a,int b,int c,int d) {

    int sum = a + b + c + d;
    return sum;
}

int main() {
    printSomething(34);
    cout<<multiplePerametter(4,5,7,8);
    return 0;
}