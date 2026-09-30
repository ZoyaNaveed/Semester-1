#include<iostream>
using namespace std;
main()
    {
 string month;
 cout<<"Enter the month here: ";
 cin>>month;

 string day;
 cout<<"Enter the day here: ";
 cin>>day;

 int total_amount;
 cout<<"Enter the amount here: ";
 cin>>total_amount;

 int discount1;
 discount1=(total_amount/100)*10;
 
 int discount2;
 discount2=(total_amount/100)*5;

 int payable1;
 payable1=total_amount-discount1;

 int payable2;
 payable2=total_amount-discount2;

 if (month=="october" && day=="sunday"){
     cout<<"The total payable amount is "<<payable1;
 }
 if (month=="march" && day=="sunday"){
     cout<<"The total payable amount is "<<payable1;
 }
 if (month=="august" && day=="sunday"){
     cout<<"The total payable amount is "<<payable1;
 }
 if (month=="november" && day=="monday"){
     cout<<"The total payable amount is "<<payable2;
 }
if (month=="december" && day=="monday"){
     cout<<"The total payable amount is "<<payable2;
 }
 if (month!="november" && month!="march" && month!="august" && month!="december" && month!="october") {
     cout<<"The payable amount is "<<total_amount;
 }
    }
