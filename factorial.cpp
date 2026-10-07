//
// Created by Mithila Farjana on 6/10/26.
//

#include <iostream>
using namespace std;

int main() {

    int n;
    int fac=1;

    cout<<"Enter a int which factorial you want :" <<endl;
    cin>>n;

    for(int i=n;i>0;i--) {

        int fac = fac*i;
        if (i==1) {
        cout<<"Factorial of "<<n<<" is : "<<fac;
        }
    }
    return 0;

}


