#include<iostream>
using namespace std;

string fruit;
int i , x = 0 , cal;

void input(){
cout << "Enter the word here: ";
cin >> fruit;


while (fruit[i] != '\0'){
    x = x + 1;
    i++;
}

cal = x % 2;
if ( cal == 0){
    cout << "True";
}
else{
    cout << "False";
}
}

main(){
    input();
}