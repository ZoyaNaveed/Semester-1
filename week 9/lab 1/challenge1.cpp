#include<iostream>
using namespace std;

int input[10];
int i , j;

void program(){
    for (i = 0 ; i < 10; i++){
        cout << "Enter the number here: " ;
        cin >>input[i];
    }

    for (i = 9; i >= 0 ; i--){
        cout << input[i]<<" ";
    }
}

main(){
    program();
}