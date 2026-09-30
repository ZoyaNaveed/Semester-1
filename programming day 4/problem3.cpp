#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter the name here: ";
cin>>name;

float eng;
cout<<"Enter english marks here: ";
cin>>eng;

float maths;
cout<<"Enter maths marks here: ";
cin>>maths;

float chem;
cout<<"Enter chemistry marks here: ";
cin>>chem;

float social;
cout<<"Enter social science marks here: ";
cin>>social;

float bio;
cout<<"Enter biology marks here: ";
cin>>bio;

float obtained;
obtained=eng+maths+chem+social+bio;

float perc;
perc=(obtained / 500) * 100;

cout<<"Total marks are: "<<obtained<<endl;
cout<<"Percentage is "<<perc<<"%"<<endl;

if (perc >= 90 && perc <= 100){
    cout<<"Obtained grade is : "<<"A+";
}
if (perc >= 80 && perc < 90){
    cout<<"Obtained grade is : "<<"A";
}
if (perc >= 70 && perc < 80){
    cout<<"Obtained grade is : "<<"B+";
}
if (perc >= 60 && perc < 70){
    cout<<"Obtained grade is : "<<"B";
}
if (perc >= 50 && perc < 60 ){
    cout<<"Obtained grade is : "<<"C";
}
if (perc >= 40 && perc < 50){
    cout<<"Obtained grade is : "<<"D";
}
if (perc < 40){
    cout<<"Obtained grade is : "<<"F";
}
}