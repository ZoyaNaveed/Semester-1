#include<iostream>
using namespace std;

string pasta[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
int num[5];
int i, sum = 0, highest, lowest;

void function(int exit){
    exit = 0;
    for ( i = 0; i < 5; i++){
while ( exit == 0){
        cout << "Enter the number of pasta here: ";
        cin >> num[i];
        if (num[i] < 0){
        cout << "INVALID INPUT " <<endl;
        exit = 1;
        }
}
}//input
while (exit == 0){
    for (i = 0; i < 5; i++){
        cout << "SALES FOR EACH PASTA TYPE: " << endl;
        cout << "For " << pasta[i] << " = "<< num[i] <<endl;
    }
    for (i = 0; i < 5; i++ ){
        sum = sum + num[i];
    }
    cout << "TOTAL SALES ARE " << sum <<endl;
    highest = num[0];
    for (i = 0; i < 5; i++){
        if ( num[i] > highest){
            highest = num[i];
        }
    }
    cout << "HIGHEST SALES " << highest << endl;
    lowest = num[0];
    for (i = 0; i < 5; i++){
        if ( num[i] < lowest){
            lowest = num[i];
        }
    }
    cout << "LOWEST SALES " << lowest;
}
}
main(){
    int exit;
    function(exit);
}