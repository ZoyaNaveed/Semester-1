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
int i ,sum;
main(){
    for ( i = 0; i < 5; i++){
        sum = sum + cars[2][i];
    }
    cout <<"Total number of nissan cars: " << sum;
}