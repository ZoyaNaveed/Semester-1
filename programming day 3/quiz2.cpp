#include<iostream>
using namespace std;

main()
{
int num;
cout<< "Enter the number here: ";
cin>>num;

int even;
even=num%2;

if (even==0){
cout<< "EVENISH";
}
else{
cout<< "ODDISH";
}
}
