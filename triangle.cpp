//
// Created by Mithila Farjana on 4/10/26.
//
#include <iostream>
using namespace std;

int main () {

   // int l ;
   // cout<<"Enter length of your triangle"<<endl;
   // cin>>l;

    //*
    //**
    //*** print code for 3
    /*

    for (int i =0;i<=l;i++) {
        for (int j=0;j<i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    */


    //   *
    //  **
    // *** print


    /*

    for (int i = 0; i<l;i++) {
        //space
        for (int j=0; j<l-i-1;j++) {
            cout << " ";
        }
        for (int k =0;k<=i;k++) {
            cout << "*";
        }
        cout << endl;
    }
    */



    //     *
    //    * *
    //   * * *
    //  * * * *

    //Rectangle


    //
    // Created by Mithila Farjana on 10/5/2026.
    //
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
        return 0;
    }






