#include<iostream>
#include<fstream>
using namespace std;

//3 x 3 matrix
int matrix[3][3];

int i , j, sum;

void input(){
    cout << "Enter the numbers here: " <<endl;
    for (i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++){
        cin >> matrix [i][j];
        }
    }
}
void process(){
    for (i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++){
    sum = sum + matrix[i][j];
    }
        }
    cout <<"Sum of elements of matrix is: " << sum ;
}

main(){
    input ();
    process();
}