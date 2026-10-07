//
// Created by Mithila Farjana on 6/10/26.
//

#include<iostream>
using namespace std;
int main() {

    int term1 = 0;
    int term2 = 1;
    int nextTerm =0;
    int n ;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
    if (n<=2) {
        cout<<"Number must be  >=3 "<<endl;
        return 0;
    }
    cout<<term1<<","<<term2<<",";;
    for (int i = 3; i <= n; i++) {
        nextTerm = term1+term2;
        cout<<nextTerm;
        term1 = term2;
        term2 = nextTerm;
        if (i!=n) {
            cout<<",";
        }
        term2 = nextTerm;
    }

}
