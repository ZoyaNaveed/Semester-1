#include<iostream>
using namespace std;

int input [4];
string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock",
"Arabesque"};
int dance[4];
int i;

void function(){
    int exit;
    exit = 0;
    cout << "Enter pin here : " <<endl;
    for (i = 0; i < 4; i++){
        cin >> input[i];
    }//input
    for ( i = 0; i < 4; i++){
        dance[i] = input[i] + i;

    if (dance[i] == 0){
    cout << moves[0];
}
   if (dance[i] == 1){
    cout << moves[1];
}
if (dance[i] == 2){
    cout << moves[2];
}
if (dance[i] == 3){
    cout << moves[3];
}
if (dance[i] == 4){
    cout << moves[4];
}
if (dance[i] == 5){
    cout << moves[5];
}
if (dance[i] == 6){
    cout << moves[6];
}
if (dance[i] == 7){
    cout << moves[7];
}
if (dance[i] == 8){
    cout << moves[8];
}
if (dance[i] == 9){
    cout << moves[9];
}
if (dance[i] > 9){
    dance[i] = dance[i] - 10;
        if (dance[i] == 0){
    cout << moves[0];
}
   if (dance[i] == 1){
    cout << moves[1];
}
if (dance[i] == 2){
    cout << moves[2];
}
if (dance[i] == 3){
    cout << moves[3];
}
if (dance[i] == 4){
    cout << moves[4];
}
if (dance[i] == 5){
    cout << moves[5];
}
if (dance[i] == 6){
    cout << moves[6];
}
if (dance[i] == 7){
    cout << moves[7];
}
if (dance[i] == 8){
    cout << moves[8];
}
if (dance[i] == 9){
    cout << moves[9];
}
}//if greater then 9
}//for loop 2

}//end of function

main(){
    function();
}