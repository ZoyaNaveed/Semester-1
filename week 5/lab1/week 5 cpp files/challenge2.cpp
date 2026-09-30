#include<iostream>
using namespace std;
main()
    {
string day;
cout<< "Enter the day here: ";
cin>>day;

int total_amount;
cout<<"Enter the total amount here: ";
cin>>total_amount;

int discount1;
discount1=(total_amount/100)*10;

int discount2;
discount2=(total_amount/100)*5;

int payable1;
payable1=total_amount-discount1;

int payable2;
payable2=total_amount-discount2;

if (total_amount>=5000 && day=="sunday"){
    cout<<"Total amount payable after discount is "<<payable1;
}
if (total_amount>=5000 && day!="sunday"){
    cout<<"Total amount payable is "<<payable2;
}
    }