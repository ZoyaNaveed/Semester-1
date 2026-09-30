#include<iostream>
using namespace std;
main()
    {
 int num1;
 cout<<"Enter the integer here: ";
 cin>>num1;

 int num2;
 cout<<"Enter the integer here: ";
 cin>>num2;

int num3;
 cout<<"Enter the integer here: ";
 cin>>num3;

if (num1==num2 && num1==num3){
     cout<<"3";
 }
else if (num1==num2 || num1==num3 || num2==num3){
     cout<<"2";
 }
 
 if (num1!=num2 && num1!=num3 && num2!=num1 && num2!=num3 && num3!=num1 && num3!=num2 ){
     cout<<"0";
 }
    }