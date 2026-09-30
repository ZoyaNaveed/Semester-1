#include<iostream>
using namespace std;

string array[4];
int i, x = 0;

void check(){
    for ( i = 0; i < 4; i++){
    cout << "Enter the characters here :";
    cin >> array[i];
}
for (i = 0 ; i < 4; i++){
    if (array[0] == array[i] && array[1] == array[i] && array[2] == array[i] && array[3] == array[i]){
        x = 1;
    }
}
if ( x == 1){
    cout << "True";
}
else {
    cout << "False";
}
}
main(){
    check();
}