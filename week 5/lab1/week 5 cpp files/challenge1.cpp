s#include<iostream>
using namespace std;
main()
    {
string day;
cout<< "Enter the day here: ";
cin>>day;

int total_amount;
cout<<"Enter the total amount here: ";
cin>>total_amount;

int discount;
discount=(total_amount/100)*10;

int payable;
payable=total_amount-discount;

if (total_amount>=5000 && day=="sunday"){
    cout<<"The payable amount after discount is "<<payable;
}
else{
    cout<<"The payable amount is "<<total_amount;
}

    }
