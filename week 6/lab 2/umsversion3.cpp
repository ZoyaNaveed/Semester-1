#include<iostream>
#include<stdlib.h>
using namespace std;


void header ()
{
cout<< "********************************************************"<<endl;
cout<< "*            UNIVERSITY MANAGEMENT SYSTEM              *"<<endl;
cout<< "********************************************************"<<endl;
}//header function

int menu (int option)
{
cout<< "Main Menu >"<<endl;
cout<< "________________________________________________________"<<endl;

cout<< "Select one of the following options:"<<endl;
cout<< "1.Add new student record "<<endl;
cout<< "2.View all records "<<endl;
cout<< "3.Print the record in merit order "<<endl;
cout<< "4.Generate merit list "<<endl;
cout<< "5.Program seat management "<<endl;
cout<< "6.Exit "<<endl;

cout<< "Your option... ";
cin>> option;
return option;

}//main menu function


void display_student(string name , float matric , float fsc , float ecat )
{
    if (matric > 0) {
    cout<< "Student's info is : "<<"\t"<<name<<"\t"<<matric<<"\t"<<fsc<<"\t"<<ecat<<"\t";
    }
}//display function


float aggregate( float matric , float fsc , float ecat ){
    float aggregate = (((matric / 1100) * 100) * 0.25) + (((fsc / 1100 ) * 100) * 0.45) + (((ecat / 400) * 100) * 0.30);
    return aggregate;

}//aggregate function

main()
{
string name1;
string name2;
string name3;
string name4;
float matric1=0 , fsc1=0 , ecat1=0;
float matric2=0 , fsc2=0 , ecat2=0;
float matric3=0 , fsc3=0 , ecat3=0;
float matric4=0 , fsc4=0 , ecat4=0;
float aggregate1 = 0;
float aggregate2 = 0;
float aggregate3 = 0;
float aggregate4 = 0;
int exit;
exit = 0;
int option;

//first header
header ();

//First menu
 option = menu (option);


//STUDENT INPUT 1

cout<<"                                     "<<endl;

if (option == 1){
cout << "Enter your name here: ";
cin >> name1;
cout << "Enter your matric marks here: ";
cin >> matric1;
cout << "Enter your fsc marks here: ";
cin >> fsc1;
cout << "Enter your ecat marks here: ";
cin >> ecat1;
}

system("cls");

 if (option == 2){
cout << "NO RECORDS YET"<<endl;
}

cout << endl;

 if (option == 3){
cout << "NO RECORDS YET"<<endl;
}

cout << endl;

 if (option == 4){
cout<< "NO RECORDS YET"<<endl;
}

cout << endl;

 if (option == 5){
cout<< "NO RECORDS YET"<<endl;
}

cout << endl;


 if (option == 6){
cout<< "THE END";
exit = 1;
}

if (exit == 0){
//second header
header ();

//second menu
  option = menu (option);
    

//STUDENT INPUT 2

cout << endl;

if (option == 1){
cout << "Enter name here: ";
cin >> name2;
cout << "Enter the matric marks here: ";
cin >> matric2;
cout << "Enter fsc marks here: ";
cin >> fsc2;
cout << "Enter your ecat marks here: ";
cin >> ecat2;
}

system("cls");

if (option == 2){
    display_student ( name1 , matric1 , fsc1 , ecat1 );
    cout << endl;
}

if (option == 3){
cout<< "NO RECORDS YET";
}

cout << endl;

if (option == 4){
cout<< "NO RECORDS YET";
}

cout << endl;

if (option== 5){
cout<< "NO RECORDS YET";
}

cout << endl;

if (option == 6){
cout<< "THE END";
exit = 1;
}
}

if (exit == 0){
cout<<  "                              "<<endl;

    //header number 3
    header ();

    //third menu
     option = menu(option);

    //STUDENT INPUT 3

cout<<"                                     "<<endl;

if (option == 1){
     cout << "Enter name here: ";
     cin >> name3;
     cout << "Enter the matric marks here: ";
     cin >> matric3;
     cout << "Enter fsc marks here: ";
     cin>>fsc3;
     cout << "Enter your ecat marks here: ";
     cin >> ecat3;
}

system("cls");

if (option == 2){

    display_student (name1 , matric1 ,fsc1 ,ecat1) ;
    cout<<endl;
    display_student (name2 , matric2 ,fsc2 ,ecat2) ;
}

cout << endl;

if (option == 3){

cout << "*************************MERIT LIST*****************************" <<endl;

    float aggregate1 = aggregate (matric1 , fsc1 , ecat1 );
    float aggregate2 = aggregate (matric2 , fsc2 , ecat2 );

if (aggregate1 > aggregate2){
cout << aggregate1 << endl << aggregate2;
}
if (aggregate1 < aggregate2){
cout << aggregate2 << endl << aggregate1;
}

cout<<endl;

if (aggregate1 < 50){
cout<< "Student 1 is not eligible for admission"<<endl;
}
if (aggregate2 < 50){
cout<< "Student 2 is not eligible for admission"<<endl;
}
}

cout << endl;

if (option == 4){
cout << "************************GENERAL MERIT LIST*************************" <<endl;
cout << aggregate (matric1 , fsc1 , ecat1 ) << endl;
cout << aggregate (matric2 , fsc2 , ecat2 ) << endl;
}

cout << endl;

if (option == 5){
cout<< "NO RECORDS YET";
}

cout << endl;

if (option == 6){
cout<< "THE END";
exit = 1;
}

cout << endl;

}

if (exit == 0){
       //fourth header
    header ();

    //fourth menu
    menu (option);

cout << endl;

system("cls");

if ( option == 2 ){
    display_student (name1 , matric1 ,fsc1 ,ecat1);
    cout << endl;
    display_student (name2 , matric2 ,fsc2 ,ecat2);
    cout << endl;
    display_student (name3 , matric3 ,fsc3 ,ecat3);
    cout<<endl;
}

if (option == 3){
    
     aggregate1 = aggregate (matric1 , fsc1 , ecat1 );
     aggregate2 = aggregate (matric2 , fsc2 , ecat2 );
     aggregate3 = aggregate (matric3 , fsc3 , ecat3 );

 //highest aggregate calculator

if ( aggregate1 > aggregate2 && aggregate1 > aggregate3 ){
    cout << "First aggregate is: " << aggregate1 <<endl;
}
 if ( aggregate2 > aggregate1 && aggregate2 > aggregate3 ){
    cout << "First aggregate is: "<< aggregate2 <<endl;
}
if ( aggregate3 > aggregate1 && aggregate3 > aggregate2 ){
    cout << "First aggregate is: "<< aggregate3 <<endl;
} 

//second highest aggregate calculator

if (aggregate1 < aggregate2 && aggregate1 > aggregate3){
    cout << "Second aggregate is: "<< aggregate1 <<endl;
}
 if (aggregate2 > aggregate1 && aggregate2 < aggregate3){
    cout << "Second aggregate is: "<< aggregate2 << endl;
}
 if (aggregate3 > aggregate1 && aggregate3 < aggregate2){
    cout << "Second aggregate is: "<< aggregate3 << endl;
}


//Third highest aggregate calculator

if (aggregate1 < aggregate2 && aggregate1 < aggregate3){
    cout << "Third aggregate is: "<< aggregate1 <<endl;
}
 if (aggregate2 < aggregate1 && aggregate2 < aggregate3){
    cout << "Third aggregate is: "<< aggregate2 <<endl;
}
if (aggregate3 < aggregate1 && aggregate3 < aggregate2){
    cout << "Third aggregate is: "<< aggregate3 <<endl;
}

//eligibility criteria

if (aggregate1 < 50){
cout<< "Student 1 is not eligible for admission"<<endl;
}
if (aggregate2 < 50){
cout<< "Student 2 is not eligible for admission"<<endl;
}
if (aggregate3 < 50){
cout<< "Student 3 is not eligible for admission"<<endl;
}

}

if (option == 4){
cout<<"************************GENERAL MERIT LIST*************************"<<endl;
cout << aggregate (matric1 , fsc1 , ecat1 ) << endl;
cout << aggregate (matric2 , fsc2 , ecat2 ) << endl;
cout << aggregate (matric3 , fsc3 , ecat3 ) <<endl;
}

if (option == 5){
cout<<"NO RECORDS YET";
}

if (option == 6){
cout<<"THE END";
}
}//end of exit

}//end of main