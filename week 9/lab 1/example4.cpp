#include<iostream>
using namespace std;

int input[0];

void store(){
    for (int i = 0; i < 5; i++){
        cout << "Enter the number here :";
        cin >> input[i];
    }
    cout << "The numbers are : ";
    for (int n = 0; n < 5; n++){
        cout << input[n] << " ";
    }
}

main(){
    store();
}