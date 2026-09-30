#include<iostream>
using namespace std;


main(){
int array[10];
int i, x = 0 , y = 0,sol,sol2;
cout << "Enter the number here" <<endl;
for (i = 0 ; i < 10; i++){
    cin >> array[i];
}

for ( i = 0 ; i < 10; i++){
    if (array[i] == 7){
        x = 1;
    }
    sol = array[i] / 10;
    sol2 = array[i] % 10;    

    if (sol == 7 || sol2 == 7){
        y = 1;
    }
}

if ( x == 0 && y == 0){
    cout << "No seven";
}
if ( x == 1 || y == 1){
    cout << "BOOM!";
}

}

