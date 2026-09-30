#include<iostream>
using namespace std;
main()
{
int entry;
cout<< "enter the two digit number here: ";
cin>>entry;
if (entry==11){
    cout<< "eleven";
}
if (entry==12){
    cout<< "twelve";
}
if (entry==13){
    cout<< "thirteen";
}
if (entry==14){
    cout<< "fourteen";
}
if (entry==15){
    cout<< "fifteen";
}
if (entry==16){
    cout<< "sixteen";
}
if (entry==17){
    cout<< "seventeen";
}
if (entry==18){
    cout<< "eighteen";
}
if (entry==19){
    cout<< "nighteen";
}
if (entry>99){
    cout<< "ERROR";
}
int mod,divide;
mod=entry%10;
divide=entry/10;

if (divide==2){
    cout<< "Twenty";
}
if (divide==3){
    cout<< "thirty";
}
if (divide==4){
    cout<< "fourty";
}
if (divide==5){
    cout<< "fifty";
}
if (divide==6){
    cout<< "sixty";
}
if (divide==7){
    cout<< "seventy";
}
if (divide==8){
    cout<< "eighty";
}
if (divide==9){
    cout<< "ninety";
}
if (mod==0){
   cout<< "    ";
}
if (mod==1){
    cout<< " one";
}
if (mod==2){
    cout<< " two";
}
if (mod==3){
    cout<< " three";
}
if (mod==4){
    cout<< " four";
}
if (mod==5){
    cout<< " five";
}
if (mod==6){
    cout<< " six";
}
if (mod==7){
    cout<< " seven";
}
if (mod==8){
    cout<< " eight";
}
if (mod==9){
    cout<< " nine";
}
}