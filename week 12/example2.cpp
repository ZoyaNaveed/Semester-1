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

main(){
    cout << cars[1][3] << "\t";
}