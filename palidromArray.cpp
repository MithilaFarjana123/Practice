//
// Created by Mithila Farjana on 5/10/26.
//

//palidromarray

#include <iostream>
using namespace std;

int main() {
    int numbers[7] = {1,3,5,7,5,3,1};
    int length = sizeof(numbers) / sizeof(numbers[0]); // Returns 7
    bool palindrom = true;

    for (int i = 0;i<length/2;i++) {
        if (numbers[i] != numbers[length-i-1]) {
            palindrom = false;
            cout<<"The array is not palindrom"<<endl;
            break;
        }else {
            palindrom = true;
        }

    }
    if (palindrom) {
        cout<<"The array is a palindrom"<<endl;
    }else {
        cout<<"The array is not a palindrom"<<endl;
    }






    return 0;
}