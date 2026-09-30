#include<iostream>
using namespace std;


string one;
string two;
int i , j, count = 0;

void chh(){
    cout << "Enter the input here: ";
    cin >> one;
    cout << "Enter the output here: ";
    cin >> two;

for ( i = 0; i < 5; i++){
    for (j = 0; j < 5 ; j++){
        if (one[i] == two[j]){
            count = count + 1;
            two[j] = '/';
            break;
        }
    }
}
cout << count;
}
main(){
    chh();
}