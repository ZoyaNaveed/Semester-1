#include<iostream>
using namespace std;
main()
{
float salary;
cout<< "enter the salary here";
cin>>salary;
float laptop;
cout<< "enter the laptop price here";
cin>>laptop;
float advance=((salary*6)/100)*50;
float x;
x=salary/2;
float y;
y=(laptop-advance)/x         ;
if (advance==laptop){
cout<< "yes you can buy the laptop";
}
else{
cout<< "no you cannot buy the laptop"<<endl;
cout<< "the amount of months required are  "<<y;
}
}