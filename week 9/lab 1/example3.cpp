#include<iostream>
using namespace std;

int element[5];
void display(){
    cout << "1st element of array is " <<element[0] <<endl;
    cout << "Last element of array is " <<element[4];
}
main(){
    cout << "Enter the number here :";
    cin >> element[0];
    cout << "Enter the number here :";
    cin >> element[1];
    cout << "Enter the number here :";
    cin >> element[2];
    cout << "Enter the number here :";
    cin >> element[3];
    cout << "Enter the number here :";
    cin >> element[4];
    display();
}