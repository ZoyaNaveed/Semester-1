#include<iostream>
using namespace std;

main()
{
int m,n,d,x,y,z;
cout<< "enter your 4 digit number here";
cin>>n;

m=n%10;
d=n/10;

x=d%10;
d=d/10;

y=d%10;
d=d/10;

z=d%10;
d=d/10;

cout<< "the output is  "<<m<<" "<<x<<" "<<y<<" "<<z;







}
