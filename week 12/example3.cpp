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

int i , j , sum;

main(){
    sum = cars[0][0]+ cars[1][0]+ cars[2][0]+cars[3][0]+cars[4][0];
    cout << "Total red cars are: " << sum <<endl;
}