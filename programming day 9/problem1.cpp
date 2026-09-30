#include<iostream>
using namespace std;

int i, j;
char x;
char array[100];
int count = 0;
void function(){
    cout << "how many characters do you want to enter: ";
    cin >> i;
    cout << "Enter the characters here: ";
    for (j = 0; j < i; j++){
        cin >> array[j];
    }
    cout << "Enter the alphabet you want to check: ";
    cin >> x;
    for ( j = 0; j < i; j++){
        if (array[j] == x){
            count = count + 1;
        }
    }
    cout << count;
}

main(){
    function();
}