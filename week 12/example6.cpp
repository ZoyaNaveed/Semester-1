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

int i , j ,sum;

int total_cars(){
    for ( i = 0; i < 5; i++){
        for ( j = 0; j <= 4; j++){
            sum = sum + cars[i][j];
        }
    }
    return sum;
}
main(){
    sum = total_cars();
    cout << sum;
}