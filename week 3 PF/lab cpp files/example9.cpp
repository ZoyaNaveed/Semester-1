#include<iostream>
using namespace std;
main()
{
int matric;
cout<< "enter your matric marks";
cin>>matric;
int fsc;
cout<< "enter your fsc marks";
cin>>fsc;
int ecat;
cout<< "enter your ecat marks";
cin>>ecat;
int matric_perc;
int inter_perc;
int ecat_perc;
matric_perc=matric/1100*100*0.25;
inter_perc=fsc/1100*100*0.45;
ecat_perc=ecat/400*100*0.30;
int total;
total=matric_perc+inter_perc+ecat_perc;
cout<< "your aggregate is  "<<total;






}