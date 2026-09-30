#include<iostream>
using namespace std;
main()
{
int num1;
cout<< "enter the number here";
cin>>num1;
char op;
cout<< "enter the operator here";
cin>>op;
int num2;
cout<< "enter the number here";
cin>>num2;
int add;
add=num1+num2;
int sub;
sub=num1-num2;
int multi;
multi=num1*num2;
int divide;
divide=num1/num2;

if (op=='+'){
cout<<sub;
}
if (op=='-'){
cout<<add;
}
if (op=='*'){
cout<<divide;
}
if (op=='/'){
cout<<multi;
}
}