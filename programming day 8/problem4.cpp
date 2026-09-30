#include<iostream>
using namespace std;

int i , x, y , a ,b , mod;
int array[100];
void function(){
    cout << "HOW MANY TIMES DO YOU WANT TO PERFORM EVEN-ODD FUNCTION : ";
    cin >> i;

for ( x = 0; x < 3; x++){
    cout << "Enter the number here: ";
    cin >> array[x];
}//end of input loop

for (x = 0; x < 3 ; x++){
   mod = array[x] % 2;

for (y = 0; y < i; y++){

    if ( mod == 0){
        a = array[x] - 2; 
        array[x] = a;
    }
    else{
        a = array[x] + 2;
        array[x] = a;
    }
}//inner loop
cout << a << endl;
}//outer loop
}//end of void function

main(){
    function();
}