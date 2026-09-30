#include<iostream>
using namespace std;

int input[10];
int i, one = 0;

void store(){
    for (i = 0; i <10; i++){
        cout << "Enter the number here : ";
        cin >> input[i];
    }
    int value;
    cout << "Enter the value you want to find here :";
    cin >> value;

    for ( i = 0; i <10 ; i++){
        if (value == input[i]){
            one = one + 1;
        }
    }
    if (one == 1){
        cout << "value found";
    }
    else{
        cout << "Value not found";
    }
}

main(){
    store();
}