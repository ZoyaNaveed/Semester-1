#include<iostream>
using namespace std;

main()
{
string figure;
cout<< "Enter the name of figure here: ";
cin>>figure;

if (figure=="square"){

float input1;
cout<<"Enter the size of figure here: ";
cin>>input1;

float area1;
area1=input1*input1;

cout<< "The area of square is  "<<area1;
}

if (figure=="rectangle"){

float input2,input3;
cout<<"Enter the length here: ";
cin>>input2;
cout<<"Enter the width here: ";
cin>>input3;

float area2;
area2=input2*input3;

cout<< "The area of rectangle is  "<<area2;
}

if (figure=="circle"){

float input4;
cout<<"Enter the radius of figure here: ";
cin>>input4;

float area3;
area3=3.14*(input4*input4);

cout<< "The area of circle is  "<<area3;
}


if (figure=="triangle"){

float input5,input6;
cout<<"Enter the breadth here: ";
cin>>input5;
cout<<"Enter the height here: ";
cin>>input6;

float area4;
area4=0.5*input5*input6;

cout<< "The area of triangle is  "<<area4;
}

}





















