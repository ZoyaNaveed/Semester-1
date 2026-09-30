#include<iostream>
using namespace std;
main()
{
int matric_marks;
cout<< "enter your matric marks";
cin>>matric_marks;
int fsc_marks;
cout<< "enter your fsc marks";
cin>>fsc_marks;
int ecat_marks;
cout<< "enter your ecat marks";
cin>>ecat_marks;
int ecat_perc;
int matric_perc;
int fsc_perc;
matric_perc=matric_marks/1100*100*0.25;
fsc_perc=fsc_marks/1100*100*0.45;
ecat_perc=ecat_marks/400*100*0.30;
int aggregate;
aggregate=matric_perc+fsc_perc+ecat_perc;
cout<< "my aggregate is  "<<aggregate;







}