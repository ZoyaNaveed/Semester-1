#include<iostream>
using namespace std;
main()
    {
int weight;
cout<<"Enter the amount of weight here: ";
cin>>weight;

string name;
cout<< "Enter the class you are travelling in: ";
cin>>name;

int sub1;
sub1=(weight-40);

int sub2;
sub2=(weight-25);

int payable1;
payable1=15000+(1000*sub1);

int payable2;
payable2=8000+(500*sub2);

if (weight>40 && name=="buisness"){
    cout<<"Total amount is "<<payable1;
}
if (weight>25 && name=="economy"){
    cout<<"Total amount is "<<payable2;
}
}
