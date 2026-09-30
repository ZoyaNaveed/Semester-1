#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{


cout<< "********************************************************"<<endl;
cout<< "*            UNIVERSITY MANAGEMENT SYSTEM              *"<<endl;
cout<< "********************************************************"<<endl;

cout<< "Main Menu >"<<endl;
cout<< "________________________________________________________"<<endl;

cout<< "Select one of the following options:"<<endl;
cout<< "1.Add new student record "<<endl;
cout<< "2.View all records "<<endl;
cout<< "3.Print the record in merit order "<<endl;
cout<< "4.Generate merit list "<<endl;
cout<< "5.Program seat management "<<endl;
cout<< "6.Exit "<<endl;

int opt1;
cout<< "Your option... ";
cin>>opt1;


float matric=0,fsc=0,ecat=0;
string name;

if (opt1==1){
cout<< "enter your name here: ";
cin>>name;
cout<< "enter your matric marks here: ";
cin>>matric;
cout<< "enter your fsc marks here: ";
cin>>fsc;
cout<< "enter your ecat marks here: ";
cin>>ecat;
}

system("cls");



if (opt1==2){
cout<< "NO RECORDS YET"<<endl;
}

if (opt1==3){
cout<< "NO RECORDS YET"<<endl;
}

if (opt1==4){
cout<< "NO RECORDS YET"<<endl;
}

if (opt1==5){
cout<< "NO RECORDS YET"<<endl;
}

if (opt1==6){
cout<< "THE END";
}



cout<< "                                                        "<<endl;
cout<< "Main Menu >"<<endl;
cout<< "________________________________________________________"<<endl;

cout<< "Select one of the following options:"<<endl;
cout<< "1.Add new student record "<<endl;
cout<< "2.View all records "<<endl;
cout<< "3.Print the record in merit order "<<endl;
cout<< "4.Generate merit list "<<endl;
cout<< "5.Program seat management "<<endl;
cout<< "6.Exit "<<endl;

int opt2;
cout<< "Your option... ";
cin>>opt2;

string name2;
float matric2=0,fsc2=0,ecat2=0;

if (opt2==1){
cout<< "enter 2nd name here: ";
cin>>name2;
cout<< "enter the matric marks here: ";
cin>>matric2;
cout<< "enter fsc marks here: ";
cin>>fsc2;
cout<< "enter your ecat marks here: ";
cin>>ecat2;
}

system("cls");


if (opt2==2){
cout<<"Student's info entered is:"<<"\t";
cout<<name<<"\t";
cout<<matric<<"\t";
cout<<fsc<<"\t";
cout<<ecat<<"\t";
}



if (opt2==3){
cout<< "NO RECORDS YET";
}

if (opt2==4){
cout<< "NO RECORDS YET";
}

if (opt2==5){
cout<< "NO RECORDS YET";
}

if (opt2==6){
cout<< "THE END";
}


cout<< "                                                        "<<endl;
cout<< "Main Menu >"<<endl;
cout<< "________________________________________________________"<<endl;

cout<< "Select one of the following options:"<<endl;
cout<< "1.Add new student record "<<endl;
cout<< "2.View all records "<<endl;
cout<< "3.Print the record in merit order "<<endl;
cout<< "4.Generate merit list "<<endl;
cout<< "5.Program seat management "<<endl;
cout<< "6.Exit "<<endl;




int opt3;
cout<< "Your option... ";
cin>>opt3;

cout<<"                                     "<<endl;


if (opt3==1){
cout<< "Cannot enter";
}

if (opt3==2){
cout<< "Student 1 info is:"<<"\t";
cout<<name<<"\t";
cout<<matric<<"\t";
cout<<fsc<<"\t";
cout<<ecat<<"\t";
cout<< "                           "<<endl;
cout<< "Student 2 info is:"<<"\t";
cout<<name2<<"\t";
cout<<matric2<<"\t";
cout<<fsc2<<"\t";
cout<<ecat2<<"\t";
}


float a,b,c,agg1,agg2,agg3,total1;

a=((matric/1100)*100);
b=((fsc/1100)*100);
c=((ecat/400)*100);

agg1=a*0.25;
agg2=b*0.45;
agg3=c*0.30;

total1=agg1+agg2+agg3;

float x,y,z,agg4,agg5,agg6,total2;

x=((matric2/1100)*100);
y=((fsc2/1100)*100);
z=((ecat2/400)*100);

agg4=x*0.25;
agg5=y*0.45;
agg6=z*0.30;

total2=agg4+agg5+agg6;

if (opt3==3){

if (total1<50){
cout<< "Student 1 is not eligible for admission"<<endl;
}

if (total2<50){
cout<< "Student 2 is not eligible for admission"<<endl;
}
if (total1>total2){
cout<<total1<<endl<<total2;
}
if (total1<total2){
cout<<total2<<endl<<total1;
}
}

}











