#include<iostream>
using namespace std;

main()
{
int quantity;
cout<<"enter the quantity5 here : ";
cin>>quantity;

string city;
cout<<"enter the city name here : ";
cin>>city;

string product;
cout<<"enter the product name here : ";
cin>>product;

float coffee_c,sweets_c,water_c;
coffee_c=0.50*quantity;
sweets_c=1.45*quantity;
water_c=0.80*quantity;

float coffee_p,sweets_p,water_p;
coffee_p=0.40*quantity;
sweets_p=1.30*quantity;
water_p=0.70*quantity;

float coffee_h,sweets_h,water_h;
coffee_h=0.45*quantity;
sweets_h=1.35*quantity;
water_h=0.70*quantity;

if (city=="chicago" && product=="coffee"){
    cout<<coffee_c;
}
if (city=="chicago" && product=="sweets"){
    cout<<sweets_c;
}
if (city=="chicago" && product=="water"){
    cout<<water_c;
}
if (city=="pheonix" && product=="coffee"){
    cout<<coffee_p;
}
if (city=="pheonix" && product=="sweets"){
    cout<<sweets_p;
}
if (city=="pheonix" && product=="water"){
    cout<<water_p;
}
if (city=="houston" && product=="coffee"){
    cout<<coffee_h;
}
if (city=="houston" && product=="sweets"){
    cout<<sweets_h;
}
if (city=="houston" && product=="water"){
    cout<<water_h;
}
}