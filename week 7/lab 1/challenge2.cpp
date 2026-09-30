#include<iostream>
using namespace std;

int frequency (int num , int digit);

main(){
    int num, digit,result;
    cout << "Enter the number here : ";
    cin >> num;
    cout << "Enter the digit here : ";
    cin >> digit;
    
    result = frequency ( num , digit);
    cout << result;
}
int frequency (int num , int digit){
    int result = 0;
    int mod;
    for (int i = num ; i > 0 ; i = i / 10){
        mod = i % 10;
        if ( mod == digit){
            result = result + 1;
        }
    }
    return result;
}