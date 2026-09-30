#include<iostream>
using namespace std;

int input[10];
int i, j , smallest;

void program(){
    for (i = 0 ; i < 10; i++){
        cout << "Enter the number here: " ;
        cin >> input[i];
    }

    smallest = input[0];
    for (j = 1 ; j < 10; j++){
        if (input[i] < smallest){
            smallest = input[j];
        }
    }
    cout <<"Smallest value is " << smallest;
}

main(){
    program();
}
