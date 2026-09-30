#include<iostream>
using namespace std;

int total_digits (int number){
    int count = 0;
    for (int i = number; i > 0 ; i = i / 10){
        count = count + 1;
    }
    cout << count;
    return count;
}

main(){
    int number;
    cout << "Enter the number here : ";
    cin >> number;
    total_digits (number);
}
