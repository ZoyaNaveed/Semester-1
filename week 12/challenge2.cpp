#include<iostream>
#include<fstream>
using namespace std;

//3 x 3 matrix
int matrix[3][3];

int i , j, sum, count = 0, e_count = 0;
string u;

void input(){
    cout << "Enter the numbers here: " <<endl;
    for (i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++){
        cin >> matrix [i][j];
        }
    }
}

void process(){
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
    if (matrix[i][j] == 0 ){
        e_count = e_count + 1;
    }
    }
    }//for checking zero's
    for ( i = 0; i < 3; i++){
        if (matrix[i][i] == 1){
            count = count + 1;
        }
    } //for checking 1's
    if ( count == 3 && e_count == 6){
       u = "True";
    }
    count = 0;
    e_count = 0;
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
    if (matrix[i][j] == 0 ){
        e_count = e_count + 1;
    }
    }
    }//for checking zeros
    for ( i = 0, j = 2; i < 3; i++, j--){
        if (matrix[i][j] == 1){
            count = count + 1;
        }
    }//for checking 1's
    if ( count == 3 && e_count == 6 ){
       u = "True";
    }
}
main(){
    input();
    process();
    cout << u;
}