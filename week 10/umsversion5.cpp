#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void mainHeader ();
int menu ();
void addStudent();
string loginMenu();
void viewAllStudents();
void add_Student_Into_Array(string name , float matric, float fsc, float ecat, string p1, string p2, string p3);
float aggregate();
void SortMeritOrder();

const int X = 20;
string st_name[X];
float st_matric[X], st_fsc[X], st_ecat[X];
string st_p1[X],st_p2[X], st_p3[X];
float st_aggr[X];
int i,j, count = 0;



main(){
int mainchoice;
string user;
int option;
string pass_of_admin_account;
mainHeader();

while (true){

cout << "  ======================WELCOME TO UNIVERSITY MANAGEMENT SYSTEM======================="<<endl;
cout <<endl;
cout << "Choose one of the following" <<endl;
cout << "1. Login" <<endl;
cout << "2. Exit" <<endl;
cout <<endl;
cout << "Your option.....";
cin >> mainchoice;

if (mainchoice == 1){
    cout << "===============================LOGIN=============================" <<endl;
    cout << "Do you want to login as user or admin? ";
    cin >> user;
if (user == "admin"){
cout << "=========================================ADMIN LOGIN====================================================" <<endl;
cout << "Enter the password here " << endl;
cin >> pass_of_admin_account;
system ("cls");
if (pass_of_admin_account == "123"){
    cout << endl;
    cout << "YOU HAVE BEEN LOGGED IN!" <<endl;
    cout << endl;

    option = menu();
while (option != 7){
    if (option == 1){
        addStudent();
    }//option is 1
    if (option == 2){
        cout << "Main Menu > View all records " <<endl;
        cout << "---------------------------" <<endl;
        viewAllStudents();
    }//option is 2
    if (option == 3){
        cout << "Main Menu > Record in Merit Order" <<endl;
        cout << "-------------------------------" <<endl;
        aggregate();
        SortMeritOrder();
        viewAllStudents();
    }//option is 3
    if (option == 4){
        SortMeritOrder();
        cout << "Main Menu > Student Merit List";

    }
    }//while option not 7
}//if password correct
else{
    cout << "TRY AGAIN" <<endl;
}
    }//if user is admin


















}//mainchoice is login
else{
    break;
}//mainchoice is exit
}//WHILE TRUE
}//main

void mainHeader ()
{
cout<< "********************************************************"<<endl;
cout<< "*            UNIVERSITY MANAGEMENT SYSTEM              *"<<endl;
cout<< "********************************************************"<<endl;
}//header function

int menu ()
{
cout<< "Main Menu >"<<endl;
cout<< "---------------------------------------------------------"<<endl;

cout<< "Select one of the following options:"<<endl;
cout<< "1.Add new student record "<<endl;
cout<< "2.View all records "<<endl;
cout<< "3.Print the record in merit order "<<endl;
cout<< "4.Generate merit list "<<endl;
cout<< "5.Program seat management "<<endl;
cout<< "6.Change Password " <<endl; 
cout<< "7.Exit "<<endl;

cout<< "Your option... ";
int option;
cin>> option;
return option;

}//main menu function

void addStudent(){
    string name ;
    float matric,  fsc, ecat;
    string p1,  p2,  p3;
    cout << "Main Menu > New student record" <<endl;
    cout << "Enter your name here: ";
    cin >> name;
    cout << "Enter your matric marks here: ";
    cin >> matric;
    cout << "Enter your fsc marks here: ";
    cin >> fsc;
    cout << "Enter your ecat marks here: ";
    cin >> ecat;
    cout <<endl;
    cout << "Enter your preferences from following programs here: " <<endl;
    cout << "CS                  SE                  IT" <<endl;
    cout << "Enter 1st preference here : ";
    cin >> p1;
    cout << "Enter 2nd preference here : ";
    cin >> p2;
    cout <<  "Enter 3rd preference here: ";
    cin >> p3;
    add_Student_Into_Array(name, matric, fsc, ecat,p1,p2,p3);
}
void add_Student_Into_Array(string name , float matric, float fsc, float ecat, string p1, string p2, string p3){
    st_name[count] = name;
    st_matric[count] = matric;
    st_fsc[count] = fsc;
    st_ecat[count] = ecat;
    st_p1[count] = p1;
    st_p2[count] = p2;
    st_p3[count] = p3;
    count = count + 1;
}//option 1 function

void viewAllStudents(){
    system("cls");
    mainHeader();
    cout << endl;
    for (i = 0; i < X; i++){
    if (st_matric[i] > 0){
    cout<< "Student's info is : "<<"\t"<<st_name[i]<<"\t"<<st_matric[i]<<"\t"<<st_fsc[i]<<"\t"<<st_ecat[i]<<"\t" << "Preferences are : " << "\t" <<st_p1[i] <<"\t" << st_p2[i] << "\t" << st_p3[i] << "\t";
}
    }
}//option 2 function

float aggregate(){
    for ( i = 0; i < X ; i++){
        st_aggr[i] = (((st_matric[i] / 1100) * 100) * 0.25) + (((st_fsc[i] / 1100 ) * 100) * 0.45) + (((st_ecat[i] / 400) * 100) * 0.30);
    }
    return st_aggr;
}

void SortMeritOrder(){
    string temp_name, temp_p1, temp_p2, temp_p3;
    float temp_aggre,temp_matric, temp_fsc, temp_ecat;
for ( i = 0; i < X; i++){
    for ( j = i + 1; j < X; j++){
        if (st_aggr[j] > st_aggr[i]){
            temp_aggre = st_aggr[j];
            st_aggr[j] = st_aggr[i];
            st_aggr[i] = temp_aggre;

            temp_matric = st_matric[j];
            st_matric[j] = st_matric[i];
            st_matric[j] = temp_matric;

            temp_fsc = st_fsc[j];
            st_fsc[j] = st_fsc[i];
            st_fsc[j] = temp_fsc; 

            temp_ecat = st_ecat[j];
            st_ecat[j] = st_ecat[i];
            st_ecat[j] = temp_ecat;

            temp_p1 = st_p1[j];
            st_p1[j] = st_p1[i];
            st_p1[i] = temp_p1;

            temp_p2 = st_p2[j];
            st_p2[j] = st_p2[i];
            st_p2[i] = temp_p2;

            temp_p3 = st_p3[j];
            st_p3[j] = st_p3[i];
            st_p3[i] = temp_p3;
        }
    }
}
}//function of option 3

void Generatelist(){
    for ( i = 0; i < X ; i++){
        if (st_aggr[i] > 80.00){
    cout << st_name[i] << "\t" << "Got Admission in CS with Merit " <<st_aggr[i];
    }
        if (st_aggr[i] > 7)

    }
}


