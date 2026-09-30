#include<iostream>
using namespace std;

int x , i , j, z, colors, sum, count = 0;
string y[100];

void cols(){
    cout << "How many colors do you want to enter: ";
    cin >> i;
for (j = 0; j < i; j++){
    cout << "Enter the colors here ";
    cin >> y[j];   
}

colors = i * 2;
for (j = 1; j < i; j++){
for ( z = 0; z < i; z++){
if ( y [j] != y[z]){
    count = count + 1;
    break; 
}
if (y [j] == y[z]){
    count = count + 0;
    break;
}
}
}
sum = colors + count;
cout << sum;
}
main(){
    cols();
}