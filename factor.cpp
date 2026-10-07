//
// Created by Mithila Farjana on 6/10/26.
//
#include <iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 0;i<=n;i++) {
        if (n%i==0) {
            cout<<i<<" ";
        }
    }
}