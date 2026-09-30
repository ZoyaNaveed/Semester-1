#include<iostream>
using namespace std;

main()
{
float entry;
cout<< "enter value in grams here: ";
cin>>entry;

if (entry>0){
float convert;
convert=entry/1000;
cout<< " the value in kilograms is  "<<convert;
}

if (entry<0){
cout<< " you entered the wrong value";
}
}

