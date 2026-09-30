#include<iostream>
#include<fstream>
using namespace std;

//{red , black , brown , blue , grey}
int cars[5][5]= {
{10,7,12,10,4},//suzuki
{18,11,15,17,2},//toyota
{23,19,12,16,14},//nissan
{7,12,16,0,2},//BMW
{3,5,6,2,1}//audi
};

int sum;
int idx;
int converter(string input){
    if (input == "red"){
        idx = 0;
    }
    if ( input == "black"){
        idx = 1;
    }
    if ( input == "brown"){
        idx = 2;
    }
    if ( input == "blue"){
        idx = 3;
    }
    if ( input == "grey"){
        idx = 4;
    }
    return idx;
}

void show(){
    for ( int i = 0; i < 5; i++){
        sum = sum + cars[i][idx];
    }
    cout << "total cars are: " << sum;
}
main(){
string input;
    cout << "Enter the color here: ";
    cin >> input;
    idx = converter(input);
    show();
}
