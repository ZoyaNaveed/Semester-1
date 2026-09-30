#include<iostream>
using namespace std;

main()
{
int holidays;
cout<< "Enter the number of holidays here: ";
cin>>holidays;

int work_days;
work_days=365-holidays;

int time1;
time1=work_days*63;

int time2;
time2=holidays*127;

int game_time;
game_time=time1+time2;


int per_year;
per_year=30000-game_time;

if (per_year<0){
per_year=-1*per_year;
}


int hours;
hours=per_year/60;

int min;
min=per_year%60;

if (game_time<30000){
cout<< "Tom can sleep well"<<endl;
cout<<"The difference from the norm is  "<<hours<<" "<<"hours"<<" "<<min<<" "<<"minutes";
}

if (game_time>30000){
cout<< "Tom will run away"<<endl;
cout<<"The difference from the norm is  "<<hours<<" "<<"hours"<<" "<<min<<" "<<"minutes";
}

}





















