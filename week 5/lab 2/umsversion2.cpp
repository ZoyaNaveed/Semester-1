#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{

//FIRST MENU

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

//OPTION 1

int opt1;
cout<< "Your option... ";
cin>>opt1;


float matric=0,fsc=0,ecat=0;
string name;

//STUDENT INPUT 1

cout<<"                                     "<<endl;

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

//SECOND MENU

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

//OPTION 2

int opt2;
cout<< "Your option... ";
cin>>opt2;

string name2;
float matric2=0,fsc2=0,ecat2=0;

//STUDENT INPUT 2

cout<<"                                     "<<endl;

if (opt2==1){
cout<< "enter name here: ";
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

system ("cls");

//THIRD MENU

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

//OPTION 3

int opt3;
cout<< "Your option... ";
cin>>opt3;

cout<<"                                     "<<endl;


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

//AGGREGATE CALCULATOR 1

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

if (total1>total2){
cout<<total1<<endl<<total2;
}
if (total1<total2){
cout<<total2<<endl<<total1;
}
if (total1<50){
cout<< "Student 1 is not eligible for admission"<<endl;
}

if (total2<50){
cout<< "Student 2 is not eligible for admission"<<endl;
}
}

string name3;
float matric3=0,fsc3=0,ecat3=0;

//STUDENT INPUT 3

if (opt3==1){
cout<< "enter name here: ";
cin>>name3;
cout<< "enter the matric marks here: ";
cin>>matric3;
cout<< "enter fsc marks here: ";
cin>>fsc3;
cout<< "enter your ecat marks here: ";
cin>>ecat3;
}


if (opt3==4){
cout<<"************************GENERAL MERIT LIST*************************"<<endl;
cout<<total1<<endl;
cout<<total2<<endl;
}

if (opt3==5){
cout<< "NO RECORDS YET";
}

if (opt3==6){
cout<< "THE END";
}

system ("cls");

//FOURTH MENU

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

//OPTION 4 

int opt4;
cout<<"Your option..... ";
cin>>opt4;

string name4;
float matric4=0,fsc4=0,ecat4=0;

//STUDENT INPUT 4

system("cls");

cout<<"                                     "<<endl;

if (opt4==1){
cout<< "enter name here: ";
cin>>name4;
cout<< "enter the matric marks here: ";
cin>>matric4;
cout<< "enter fsc marks here: ";
cin>>fsc4;
cout<< "enter your ecat marks here: ";
cin>>ecat4;
}

system("cls");

if (opt4==2){
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
cout<< "                           "<<endl;
cout<< "Student 3 info is:"<<"\t";
cout<<name3<<"\t";
cout<<matric3<<"\t";
cout<<fsc3<<"\t";
cout<<ecat3<<"\t";
}

//AGGREGATE CALCULATOR 2

float a2,b2,c2,cal1,cal2,cal3,aggregate1;

a2=((matric/1100)*100);
b2=((fsc/1100)*100);
c2=((ecat/400)*100);

cal1=a2*0.25;
cal2=b2*0.45;
cal3=c2*0.30;

aggregate1=cal1+cal2+cal3;

float x2,y2,z2,cal4,cal5,cal6,aggregate2;

x2=((matric2/1100)*100);
y2=((fsc2/1100)*100);
z2=((ecat2/400)*100);

cal4=x2*0.25;
cal5=y2*0.45;
cal6=z2*0.30;

aggregate2=cal4+cal5+cal6;

float e1,g1,f1,cal7,cal8,cal9,aggregate3;

e1=((matric3/1100)*100);
f1=((fsc3/1100)*100);
g1=((ecat3/400)*100);

cal7=e1*0.25;
cal8=f1*0.45;
cal9=g1*0.30;

aggregate3=cal7+cal8+cal9;

system("cls");

if (opt4==3){

//highest aggregate calculator

if (aggregate1 > aggregate2 && aggregate1 > aggregate3){
    cout<<"First aggregate is: "<<aggregate1<<endl;
}
else if (aggregate2 > aggregate1 && aggregate2 > aggregate3){
    cout<<"First aggregate is: "<<aggregate2<<endl;
}
else{
    cout<<"First aggregate is: "<<aggregate3<<endl;
} 

//second highest aggregate calculator

if (aggregate1 < aggregate2 && aggregate1 > aggregate3){
    cout<<"Second aggregate is: "<<aggregate1<<endl;
}
else if (aggregate2 > aggregate1 && aggregate2 < aggregate3){
    cout<<"Second aggregate is: "<<aggregate2<<endl;
}
else{
    cout<<"Second aggregate is: "<<aggregate3<<endl;
}

//Third highest aggregate calculator

if (aggregate1 < aggregate2 && aggregate1 < aggregate3){
    cout<<"Third aggregate is: "<<aggregate1<<endl;
}
else if (aggregate2 < aggregate1 && aggregate2 < aggregate3){
    cout<<"Third aggregate is: "<<aggregate2<<endl;
}
else{
    cout<<"Third aggregate is: "<<aggregate3<<endl;
}

//eligibility criteria

if (aggregate1<50){
cout<< "Student 1 is not eligible for admission"<<endl;
}
if (aggregate2<50){
cout<< "Student 2 is not eligible for admission"<<endl;
}
if (aggregate3<50){
cout<< "Student 3 is not eligible for admission"<<endl;
}
}

system("cls");

if (opt4==4){
cout<<"************************GENERAL MERIT LIST*************************"<<endl;
cout<<aggregate1<<endl;
cout<<aggregate2<<endl;
cout<<aggregate3<<endl;
}

system("cls");

if (opt4==5){
cout<<"NO RECORDS YET";
}

system("cls");

if (opt4==6){
cout<<"THE END";
}

system("cls");

//fifth menu

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

int opt5;
cout<<"Your option...";
cin>>opt5;

cout<<"                                     "<<endl;

if (opt5 == 1){
    cout<<"Couldn't enter";
}

system("cls");

if (opt5==2){
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
cout<< "                           "<<endl;
cout<< "Student 3 info is:"<<"\t";
cout<<name3<<"\t";
cout<<matric3<<"\t";
cout<<fsc3<<"\t";
cout<<ecat3<<"\t";
cout<< "                           "<<endl;
cout<< "Student 4 info is:"<<"\t";
cout<<name4<<"\t";
cout<<matric4<<"\t";
cout<<fsc4<<"\t";
cout<<ecat4<<"\t";
}

//aggregate calculator 3

float a3,b3,c3,cal10,cal11,cal12,aggre1;

a3=((matric/1100)*100);
b3=((fsc/1100)*100);
c3=((ecat/400)*100);

cal10=a3*0.25;
cal11=b3*0.45;
cal12=c3*0.30;

aggre1=cal10 + cal11 + cal12;

float x3,y3,z3,cal13,cal15,cal14,aggre2;

x3=((matric2/1100)*100);
y3=((fsc2/1100)*100);
z3=((ecat2/400)*100);

cal13=x3*0.25;
cal14=y3*0.45;
cal15=z3*0.30;

aggre2=cal13 + cal14 + cal15;

float e2,f2,g2,cal16,cal17,cal18,aggre3;

e2=((matric3/1100)*100);
f2=((fsc3/1100)*100);
g2=((ecat3/400)*100);

cal16=e2*0.25;
cal17=f2*0.45;
cal18=g2*0.30;

aggre3 = cal16 +cal17+ cal18;

float h, i, j, cal19, cal20 , cal21, aggre4;

h = ((matric4 / 1100 )* 100);
i = ((fsc4 / 1100 )* 100);
j = ((ecat4 / 400 )* 100);

cal19 = h * 0.25;
cal20 = i * 0.45;
cal21 = j * 0.30;

aggre4 = cal19 + cal20 + cal21;

if (opt5 == 3){

//Highest aggregate

if (aggre1 > aggre2 && aggre1 > aggre3 && aggre1 > aggre4){
    cout<<aggre1<<endl;
}

 if (aggre2 > aggre1 && aggre2 > aggre3 && aggre2 > aggre4){
    cout<<aggre2<<endl;
}

 if (aggre3 > aggre1 && aggre3 > aggre2 && aggre3 > aggre4){
    cout<<aggre3<<endl;
}

 if (aggre4 > aggre1 && aggre4 > aggre3 && aggre4 > aggre2){
    cout<<aggre4<<endl;
}

//Second highest

if (aggre1 > aggre2 && aggre1 > aggre3 && aggre1 < aggre4){
    cout<<aggre1<<endl;
}

 if (aggre1 > aggre2 && aggre1 < aggre3 && aggre1 > aggre4){
    cout<<aggre1<<endl;
}

 if (aggre1 < aggre2 && aggre1 > aggre3 && aggre1 > aggre4){
    cout<<aggre1<<endl;
}

 if (aggre2 > aggre1 && aggre2 > aggre3 && aggre2 < aggre4){
    cout<<aggre2<<endl;
}

 if (aggre2 > aggre1 && aggre2 < aggre3 && aggre2 > aggre4){
    cout<<aggre2<<endl;
}

 if (aggre2 < aggre1 && aggre2 > aggre3 && aggre2 > aggre4){
    cout<<aggre2<<endl;
}

 if (aggre3 > aggre1 && aggre3 > aggre2 && aggre2 < aggre4){
    cout<<aggre3<<endl;
}

 if (aggre3 > aggre1 && aggre3 < aggre2 && aggre2 > aggre4){
    cout<<aggre3<<endl;
}

 if (aggre3 < aggre1 && aggre3 > aggre2 && aggre2 > aggre4){
    cout<<aggre3<<endl;
}

 if (aggre4 > aggre1 && aggre4 > aggre2 && aggre4 < aggre3){
    cout<<aggre4<<endl;
}

 if (aggre4 > aggre1 && aggre4 < aggre2 && aggre4 > aggre3){
    cout<<aggre4<<endl;
}

 if (aggre4 < aggre1 && aggre4 > aggre2 && aggre4 > aggre3){
    cout<<aggre4<<endl;
}

//Third highest aggregate

if (aggre1 > aggre2 && aggre1 < aggre3 && aggre1 < aggre4){
    cout<<aggre1<<endl;
}

if (aggre1 < aggre2 && aggre1 > aggre3 && aggre1 < aggre4){
    cout<<aggre1<<endl;
}

if (aggre1 < aggre2 && aggre1 < aggre3 && aggre1 > aggre4){
    cout<<aggre1<<endl;
}

if (aggre2 > aggre1 && aggre2 < aggre3 && aggre2 < aggre4){
    cout<<aggre2<<endl;
}

if (aggre2 < aggre1 && aggre2 > aggre3 && aggre2 < aggre4){
    cout<<aggre2<<endl;
}

if (aggre2 < aggre1 && aggre2 < aggre3 && aggre2 > aggre4){
    cout<<aggre2<<endl;
}

if (aggre3 > aggre1 && aggre3 < aggre2 && aggre3 < aggre4){
    cout<<aggre3<<endl;
}

if (aggre3 > aggre2 && aggre3 < aggre1 && aggre3 < aggre4){
    cout<<aggre3<<endl;
}

if (aggre3 > aggre4 && aggre3 < aggre2 && aggre3 < aggre1){
    cout<<aggre3<<endl;
}

if (aggre4 > aggre1 && aggre4 < aggre2 && aggre4 < aggre3){
    cout<<aggre4<<endl;
}

if (aggre4 > aggre2 && aggre4 < aggre1 && aggre4 < aggre3){
    cout<<aggre4<<endl;
}

if (aggre4 > aggre3 && aggre4 < aggre2 && aggre4 < aggre1){
    cout<<aggre4<<endl;
}

//Last aggregate

if (aggre1 < aggre2 && aggre1 < aggre3 && aggre1 < aggre4){
    cout<<aggre1<<endl;
}

if (aggre2 < aggre1 && aggre2 < aggre3 && aggre2 < aggre4){
    cout<<aggre2<<endl;
}

 if (aggre3 < aggre1 && aggre3 < aggre2 && aggre3 < aggre4){
    cout<<aggre3<<endl;
}

if (aggre4 < aggre1 && aggre4 < aggre3 && aggre4 < aggre2){
    cout<<aggre4<<endl;
}

//eligibility criteria

if (aggre1<50){
cout<< "Student 1 is not eligible for admission"<<endl;
}
if (aggre2<50){
cout<< "Student 2 is not eligible for admission"<<endl;
}
if (aggre3<50){
cout<< "Student 3 is not eligible for admission"<<endl;
}
if (aggre4<50){
cout<< "Student 4 is not eligible for admission"<<endl;
}

}

if (opt5 == 4){
cout<<"************************GENERAL MERIT LIST*************************"<<endl;
cout<<aggre1<<endl;
cout<<aggre2<<endl;
cout<<aggre3<<endl;
cout<<aggre4<<endl;
}

if (opt5 == 5){
    cout<<"NO RECORDS YET";
}

if (opt5 == 6){
    cout<<"THE END";
}

}




