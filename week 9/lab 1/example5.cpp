#include<iostream>
using namespace std;

float num[]= {7,5,6,12,35,27};
void solution(){
    float sum = 0;
    float average = 0;
    cout << "The numbers are : ";
    for (int i = 0; i < 6; i++){
        sum = sum + num[i];
        cout << num[i] <<" ";
    }
    average = sum / 6;
    cout <<endl;
    cout << "Their sum is : " << sum <<endl;
    cout << "The average is: " <<average <<endl;
}
main(){
    solution();
}