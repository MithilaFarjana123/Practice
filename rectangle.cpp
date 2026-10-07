//
// Created by Mithila Farjana on 5/10/26.
//
//Rectangle

//Rectangle


//
// Created by Mithila Farjana on 10/5/2026.
//
#include <iostream>
using namespace std;
int main() {
    int l = 6;
    int w =4;


    for (int i = 0;i<w;i++) {
        for (int j = 0;j<l;j++) {
            if (i==0||j==0||i==w-1||j==l-1) {
                cout<<"*";
            }else {
                cout<<" ";
            }
        }

        cout<<endl;
    }


    /*
    for (int i = 0; i < l; i++) {
        cout<<"*";
    }
    cout<<endl;


    for (int i = 0; i < w; i++) {
        cout<<"*";

        for (int a = 0; a <= l-a; a=a++) {
            cout<<" ";
        }

    }
    cout<<endl;
    cout<<"*";
    cout<<endl;
    for (int i = 0; i < l; i++) {
        cout<<"*";
    }
    */
    return 0;
}
