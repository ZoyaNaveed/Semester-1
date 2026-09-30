#include<iostream>
using namespace std;

main()
{
string name;
cout<< "enter the country name here: ";
cin>>name;

float price;
cout<< "enter the ticket price in dollars here: ";
cin>>price;

if (name=="ireland"){
float dis1,final1;
dis1=((price/100)*10);
final1=price-dis1;
cout<< "The discounted price is  "<<final1;
}

else{
float dis2,final2;
dis2=((price/100)*5);
final2=price-dis2;
cout<< "The discounted price is  "<<final2;
}
}


