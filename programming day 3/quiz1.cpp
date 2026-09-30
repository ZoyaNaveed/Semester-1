#include<iostream>
using namespace std;
main()
{
int num;
cout<< "Enter the number here: ";
cin>>num;
int orignum=num;

int remainder1=orignum%10;
int result1=remainder1*remainder1*remainder1;

orignum=num/10;

int remainder2=orignum%10;
int result2=remainder2*remainder2*remainder2;

orignum=orignum/10;

int result3=orignum*orignum*orignum;
int sum=result1+result2+result3;

if (num==sum){
cout<< "This is an armstrong number.";
}

else{
cout<< "This is not an armstrong number.";
}
}


