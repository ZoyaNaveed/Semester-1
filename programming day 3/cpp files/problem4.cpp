#include<iostream>
using namespace std;

main()
{

float num1,num2,num3,price1,price2,price3;

cout<< "Enter the number of red roses here: ";
cin>>num1;
cout<< "Enter the number of white roses here: ";
cin>>num2;
cout<< "Enter the number of tulips here: ";
cin>>num3;

price1=2.00;
price2=4.10;
price3=2.50;

float a,b,c;
a=num1*2.00;
b=num2*4.10;
c=num3*2.50;

float total_price1;
total_price1=a+b+c;


if (total_price1>200){
float dis,total;
dis=((total_price1/100)*20);
total=total_price1-dis;
cout<<"Original price is  "<<total_price1<<endl;
cout<<"Price after discount is  "<<total;
}

else{
cout<< "Total price of flowers is  "<<total_price1;
}
}





















