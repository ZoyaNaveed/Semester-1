#include<iostream>
using namespace std;

int input[10];
int i,j,largest ;
void program(){
    for (i = 0; i < 10; i++){
        cout << "Enter here: ";
        cin >> input[i];
    }
    largest = input[0];
    for (j = 1; j < 10; j++){
        if (input[j] > largest){
            largest = input[j];
        }
    }
    cout << "Largest value is : "<<largest;
}

main(){
    program();
}