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

 int discount;
 discount=(total_amount/100)*10;

 int payable;
 payable=total_amount-discount;


 if (month=="october" && day=="sunday"){    
     cout<<"The payable amount is "<<payable;
 } 

 if (month=="november" && day=="thursday"){
     cout<<"The total amount payable is "<<payable;
 }
  if (month!="october" && month!="november" ){
     cout<<"The payable amount is "<<total_amount;
 } 
  
    }