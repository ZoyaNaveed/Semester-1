#include<iostream>
using namespace std;
main()
{
float price;
cout<< "enter the price here";
cin>>price;

float discount1;
discount1=(price/100)*5;

float discount2;
discount2=(price/100)*10;

float x;
x=price-discount1;

float y;
y=price-discount2;

if (price<=5000){
cout<<x;
}
else{
cout<<y;
}
}