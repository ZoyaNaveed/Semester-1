#include<iostream>
using namespace std;

char alphabet[220];
int count = 0;

void input(){
    cout << "Enter the name here: ";
    cin >> alphabet;

    for (int i = 0 ; i < 220; i++){
        if(alphabet[i] == 'a' || alphabet[i] == 'e' || alphabet[i] == 'i' || alphabet[i] == 'o' || alphabet[i] == 'u'){
        count = count + 1;
        }
    }
    cout << count;
}
main(){
    input();
}