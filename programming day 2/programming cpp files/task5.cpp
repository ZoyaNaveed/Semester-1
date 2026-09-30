#include<iostream>
using namespace std;

main()
{
string name;
cout<< "please enter the student name";
cin>>name;
float subject1;
cout<< "enter subject 1 marks here";
cin>>subject1;
float subject2;
cout<< "enter subject 2 marks here";
cin>>subject2;
float subject3;
cout<< "enter subject 3 marks here";
cin>>subject3;
float subject4;
cout<< " enter subject 4 marks here";
cin>>subject4;
float subject5;
cout<< "enter subject 5 marks here";
cin>>subject5;
float percentage;
percentage=((subject1+subject2+subject3+subject4+subject5)/500)*100;
cout<<name<<" percentage is "<<percentage;




}
