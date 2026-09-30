#include<iostream>
using namespace std;

int input[10];
int product,scalar;
int i;
void program(){
    for (i = 0; i < 10; i++){
        cout << "Enter the number here: ";
        cin >> input[i];
    }
    cout << "Enter the scalar number here : ";
    cin >> scalar;
    for (i = 0; i < 10; i++){
        product = scalar * input[i];
        cout << input [i] << "\t" <<product<<endl;
    }

}
main(){
    program();
}