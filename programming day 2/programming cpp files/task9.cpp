#include<iostream>
using namespace std;

main()
{
int m,n,d,sum;
cout<< "enter your 4 digit number here";
cin>>n;

m=n%10;
d=n/10;
sum=m;

m=d%10;
d=d/10;
sum=sum+m;

m=d%10;
d=d/10;
sum=sum+m;

m=d%10;
d=d/10;
sum=sum+m;

cout<< "the output is  "<<sum;




}
