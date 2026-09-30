#include<iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;

string header (string user)
{
    cout << "  ======================WELCOME TO WOMENS HEALTH CLINIC======================="<<endl;
    cout <<endl;
    cout << "Are you admin or patient? " ;
    cin >> user;
    return user;
}//header

//ADMIN

int menu (int option)
{
cout << "====================================MAIN MENU=====================================" <<endl;
cout << endl;
cout << "Main menu options:" <<endl;
cout << "1.	Add patient." <<endl;
cout << "2.	View all patient record." <<endl;
cout << "3.	Change admin password." <<endl;
cout << "4.	Special discounts." <<endl;
cout << "5.	View patient history." <<endl;
cout << "6.	View patient record (sorted by age)." <<endl;
cout << "7.	Exit." <<endl;
cout << endl;

cout << "Your option..... " ;
cin >> option;
return option;
}//main menu function


int departments (int a)
{
cout << endl;
cout << "====================================DEPARTMENTS=================================";
cout << "Select department: " <<endl;
cout << "1.	Gynecology Department" <<endl;
cout << "2.	Nutrition and Dietetics" <<endl;
cout << "3.	Oncology Department" <<endl;
cout << "4.	Psychological Counselling Department" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >>a;
return a;
}// departments menu function // for admin + patient

int d1 (int opt1){
cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Nadia Khan" <<endl;
cout << "2.	Doctor Fatima sohail" <<endl;

cout << "                  " <<endl;
cout << "Your option...... ";
cin >> opt1;
return opt1;
}//gynecology department function //for admin + patient

int d2 (int opt2){
cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt2;
return opt2;
}//nutrition department function // for admin + patient

int d3 (int opt3){
cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Mustafa for diagnosis" <<endl;
cout << "2.	Professor Fida for ultrasound" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt3;
return opt3;
}//oncology department function //for admin + patient

int d4 (int opt4){
cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Aiysha Tahir" <<endl;
cout << "2.	Professor Zainab Jawed " <<endl;
    
cout << "                  " <<endl;
cout << "Your option..... ";
cin >>opt4;
return opt4;
}//psycological counselling function // for admin + patient

char chosen_doctor (char availability){
cout << "=============================DOCTORS AVAILABILITY=================================" <<endl;
cout << "Is the chosen doctor available (y/n): "<<endl;
cin >> availability;

if (availability == 'n'){
    cout << "Please select another doctor " <<endl;
}

if (availability == 'y'){
cout << "======================================RECIEPT======================================" <<endl;
}
return availability;
}//doctor's availability function

int time_of_reciept (int time){
cout << "Enter the time of receipt here:" ; 
cin >> time;
return time;
}//time of reciept function

void receipt (string patient_name , string patient_name0_2 , int age , int weight , int day , string month , int year , string name_department , string doctor_name , int time, int charges){
cout << "                            WOMENS HEALTH CLINIC                          " <<endl;
cout << day <<"/"<<month <<"/"<<year <<endl;
cout << "First name is: "<<patient_name << "\t" << "Last name is: "<<patient_name0_2 <<endl;
cout << "Age: " <<age <<" years" <<"\t "<< "Weight:" << weight <<" kgs" <<endl;                
cout << "Name of Department: "<< name_department <<endl;
cout << "Name of the Doctor: " <<doctor_name <<endl;
cout << "Time to see the doctor: "<<time <<"pm" <<endl;
cout << "Charges are "<< charges <<" rupees only/-" <<endl ;
}//reciept function

void patient_info (string patient_name , string patient_name0_2 , int age , int weight , int day , string month , int year , string name_department , string doctor_name , int time, int charges){
if (charges > 0){
    cout <<endl;
    cout <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name << "\t"<< " Last name is: "<<patient_name0_2 <<endl;
    cout << "Age: " <<age <<" years" << "\t"<< "Weight: " << weight <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}

}//option 2 function

void change_pass (string pass_of_admin_account , string reenter_pass_of_admin_account){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================CHANGE PASSWORD ===============================" <<endl;
    cout << "Enter new password here: ";
    cin >> pass_of_admin_account;
    cout << "Re-enter new password here: ";
    cin >> reenter_pass_of_admin_account;
    if (pass_of_admin_account == reenter_pass_of_admin_account){
    cout << "The password has been changed successfully!!" <<endl;
    }
    else {
        cout << "Password not changed";
    }
}//function for option 3

void discounts (){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================SPECIAL DISCOUNTS================================" <<endl;
    cout << "1.	5% discount during breast cancer awareness month" <<endl;
    cout << "2.	5% discount if patient older than 60 years of age" <<endl;
    cout << "3.	5% discount if patient younger than 5 years of age" <<endl;
}//function for option 4

void exit (){
    cout << "========================================EXIT=======================================" <<endl;
}//function for option 7

void clearScreen (){
    char x;
    cout << "Press any key: "<<endl;
    getch();
    system ("cls");
}//function of clear screen

//PATIENT FUNCTIONS
void patient_login (string patient_username , string pass_of_patient_account){
cout << "                         " <<endl;
    cout << "==============================PATIENTS LOGIN======================================" <<endl;
    cout << "                         " <<endl;
    cout << "Enter the username here: " ;
    cin >> patient_username;
    cout << "Enter password here : ";
    cin >> pass_of_patient_account;
}//patient login function

int p_menu (int p_option){
cout << "                  " <<endl;
cout << "=====================================MAIN MENU==================================" <<endl;
cout << "Select one of the following" <<endl;
cout << "1.	Book an appointment." <<endl;
cout << "2.	View previous appointments." <<endl;
cout << "3.	Change password." <<endl;
cout << "4.	View doctors (from most expensive to least expensive)." <<endl;
cout << "5.	View doctor timings." <<endl;
cout << "6.	Add rating." <<endl;
cout << "7.	See doctor recommendations." <<endl;
cout << "8.	exit" <<endl;

cout << endl;
cout << "Your option....." ;
cin >> p_option;
return p_option;
}//patient menu function

void patient_reciept (string p_name , string p_name2, int p_day , int p_year , string p_month , int p_time, string p_department_name,string p_doctor_name ,int p_charges){
cout << "                            " <<endl;
cout << "                                        WOMENS HEALTH CLINIC                                           " <<endl;
cout << "Name : "<<p_name <<" "<<p_name2 << "\t" << "Date :" <<p_day <<"/" << p_month << "/"<< p_year <<endl;
cout << "Timing : "<<p_time <<endl;
cout << "Department name : " <<p_department_name <<endl;
cout << "Doctor name : " <<p_doctor_name <<endl;
cout << "Please pay "<<p_charges <<" rupees only/-" <<endl;

}//patient reciept function

void pass_change ( string pass_of_patient_account , string reenter_pass_of_patient_account){
    system("cls"); 
    cout << "=================================CHANGE PASSWORD================================" <<endl;
    cout << "Enter new password : " <<endl;
    cin >> pass_of_patient_account;
    cout << "Re-enter new password: " <<endl;
    cin >> reenter_pass_of_patient_account;
    cout << endl;
    if (pass_of_patient_account == reenter_pass_of_patient_account){
        cout << "Password changed successfully!!" <<endl;
    }
    else {
        cout << "Try again"<<endl;
    }
}//function of option 3

void doctors (){
    system("cls"); 
    cout << "                " <<endl;
    cout << "=====================================DOCTORS====================================" <<endl;
    cout << "1.	Professor Aiysha Tahir from Department of Psychological Counselling" <<endl;
    cout << "2.	Professor Zainab Jawed from Department of Psychological Counselling" <<endl;
    cout << "3.	Professor Fida from Department of Oncology" <<endl;
    cout << "4.	Professor Mustafa from Department of Oncology" <<endl;
    cout << "5.	Professor Amna Zafar from Department of Nutrition and Dietetics" <<endl; 
    cout << "6.	Professor Nadia Khan from Department of Gynecology" <<endl;
    cout << "7.	Doctor Fatima Sohail from Department of Gynecology" <<endl;
    cout << "8.	Doctor Ilyas Ahmed  Department of Nutrition and Dietetics" <<endl;
}//function of option 4

void timings (){
        system("cls"); 
    cout << "                " <<endl;
    cout << "=====================================TIMINGS====================================" <<endl;
    cout << "1.	Professor Aiysha Tahir from Department of Psychological Counselling:  (from 5pm to 9pm)" <<endl;
    cout << "2.	Professor Zainab Jawed from Department of Psychological Counselling: (from5pm to 10pm)" <<endl;
    cout << "3.	Professor Fida from Department of Oncology: (from 4 pm to 9pm)" <<endl;
    cout << "4.	Professor Mustafa from Department of Oncology: (from 4pm to 9pm) " <<endl;
    cout << "5.	Professor Amna Zafar from Department of Nutrition and Dietetics: (from 3pm to 7pm)" <<endl;
    cout << "6.	Doctor Ilyas Ahmed  from Department of Nutrition and Dietetics: (from 3pm to 10pm)" <<endl;
    cout << "7.	Professor Nadia Khan from Department of Gynecology: (from 4pm to 10pm)" <<endl;
    cout << "8. Doctor Fatima Sohail from Department of Gynecology: (from 4pm to 11pm)" <<endl;
}//function of option 5

int feedback (int choose_doc){
cout << "              " <<endl;
cout << "================================PATIENTS RATINGS==================================" <<endl;
cout << "Choose one of the following doctors" <<endl;
cout << "1.	Professor Aiysha Tahir from Department of Psychological Counselling" <<endl;
cout << "2.	Professor Zainab Jawed from Department of Psychological Counselling" <<endl;
cout << "3.	Professor Fida from Department of Oncology" <<endl;
cout << "4.	Professor Mustafa from Department of Oncology " <<endl;
cout << "5.	Professor Amna Zafar from Department of Nutrition and Dietetics" <<endl;
cout << "6.	Doctor Ilyas Ahmed  from Department of Nutrition and Dietetics" <<endl;
cout << "7.	Professor Nadia Khan from Department of Gynecology" <<endl;
cout << "8. Doctor Fatima Sohail from Department of Gynecology" <<endl;

cout << "Your option..... ";
cin >> choose_doc;
return choose_doc;
}//function of option 6

main ()
{

//ADMIN ACCOUNT
// multi variables

int option;
string user;
string pass_of_admin_account;
string reenter_pass_of_admin_account;
int a , opt1 , opt2 , opt3 ,opt4;
char discount , availability , reciept;
string history;
int count = 0;

//patient variables
string patient_name1 , patient_name1_2 , month1 ;
int   patient_age_1 = 0 , patient_w_1 = 0 , day1 = 0 ,year1 = 0;
int num_of_visit;
int time1  = 0;
string name_department_1 , doctor_name_1;
int charges1 = 0;

string patient_name2 , patient_name2_2 , month2;
int   patient_age_2 = 0 , patient_w_2 = 0 , day2 = 0 ,year2 = 0;
int time2 = 0;
string name_department_2 , doctor_name_2;
int charges2 = 0;

string patient_name3 , patient_name3_2 , month3 ;
int   patient_age_3 = 0 , patient_w_3 = 0 , day3 = 0 ,year3 = 0;
int time3 = 0;
string name_department_3 , doctor_name_3;
int charges3 = 0;

string patient_name4 , patient_name4_2 , month4 ;
int  patient_age_4 = 0 , patient_w_4 = 0 , day4 = 0 ,year4 = 0;
int time4 = 0;
string name_department_4, doctor_name_4;
int charges4 = 0;

int mainchoice;

while (true){

cout << "  ======================WELCOME TO WOMENS HEALTH CLINIC======================="<<endl;
cout <<endl;
cout << "Choose one of the following" <<endl;
cout << "1. Login" <<endl;
cout << "2. Exit" <<endl;
cout <<endl;
cout << "Your option.....";
cin >> mainchoice;

if (mainchoice == 1){
user = header (user);
cout << "                         " <<endl;

if (user == "admin"){
cout << " =====================================LOGIN PAGE====================================" <<endl;
cout << "                         " <<endl;

cout << "Enter the password here " << endl;
cin >> pass_of_admin_account;
system ("cls");
if (pass_of_admin_account == "qwxyz235"){
    cout << endl;
    cout << "YOU HAVE BEEN LOGGED IN!" <<endl;
    cout << endl;

while (option != 7){
cout << endl;
cout << "=====================================ADMIN=========================================" <<endl;
cout << "                         " <<endl;


 option = menu ( option);
system("cls");
 if (option == 1){
     if (count == 0){
        cout << "====================================ADD PATIENT===================================";
        cout << endl;
        cout << "Now ..." <<endl;
        cout << "Enter patient number 1 info : " <<endl;
        cout << "1. Enter the patient first name: " ;
        cin >> patient_name1;
        cout << "2. Enter the patient last name: ";
        cin >> patient_name1_2;
        cout << "3. Enter patient age here: " ;
        cin >> patient_age_1;
        cout << "4. Enter weight here: " ;
        cin >> patient_w_1;
        cout << "5. Enter date here: " ;
        cin >> day1;
        cout << "6. Enter month here: ";
        cin >> month1;
        cout << "7. Enter the year here: ";
        cin >> year1;

        a = departments (a);

if ( a == 1){
name_department_1 = "GYNECOLOGY DEPARTMENT";
    opt1 = d1 ( opt1);

    if (opt1 == 1){
    doctor_name_1 = "	Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges1 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges1 = 2500 ;
    }
}//doctor1

if (opt1 == 2){
    doctor_name_1 = "	Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges1 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges1 = 1500 ;
    }
}//doctor2
}//chosen department = gynecology

if ( a == 2){
    name_department_1 = "NUTRITION AND DIETETICS";
    opt2 = d2 ( opt2);
    if (opt2 == 1){
       doctor_name_1 = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges1 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges1 = 2500;
    }
}

if (opt2 == 2){
    doctor_name_1 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges1 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges1 =  1500;
    }
}
}//chosen department nutrition

if ( a == 3){
    name_department_1 = "ONCOLOGY DEPARTMENT";
    opt3 = d3 (opt3);
    if (opt3 == 1){
       doctor_name_1 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges1 = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges1 = 4000;
       }
    } 
    if (opt3 == 2){
       doctor_name_1 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges1 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges1 = 5000;
       }
    } 
}//chosen department oncology
if (a == 4){
    name_department_1 = "PSYCOLOGICAL COUNSELLING";
    opt4 = d4 (opt4);
    if (opt4 == 1){
    doctor_name_1 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges1 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges1 = 5500;
    }
}
if (opt4 == 2){
    doctor_name_1 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges1 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges1 = 4500;
    }
}
}//chosen department psycological counselling
cout << endl;
  availability = chosen_doctor ( availability);
  time1 = time_of_reciept ( time1);
  receipt ( patient_name1 ,  patient_name1_2 , patient_age_1 , patient_w_1 , day1 , month1 , year1 ,name_department_1 , doctor_name_1 , time1 ,  charges1);
count = count + 1;
clearScreen();

}//if count is 0

else if (count == 1){
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 1 info : " <<endl;
    cout << "1. Enter the patient first name: " ;
    cin >> patient_name2;
    cout << "2. Enter the patient last name: ";
    cin >> patient_name2_2;
    cout << "3. Enter patient age here: " ;
    cin >> patient_age_2;
    cout << "4. Enter weight here: " ;
    cin >> patient_w_2;
    cout << "5. Enter date here: " ;
    cin >> day2;
    cout << "6. Enter month here: ";
    cin >> month2;
    cout << "7. Enter the year here: ";
    cin >> year2;

    a = departments (a);

if ( a == 1){
name_department_2 = "GYNECOLOGY DEPARTMENT";
    opt1 = d1 ( opt1);

    if (opt1 == 1){
    doctor_name_2 = "Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges2 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges2 = 2500 ;
    }
}//doctor1

if (opt1 == 2){
    doctor_name_2 = "Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges2 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges2 = 1500 ;
    }
}//doctor2
}//chosen department = gynecology

if ( a == 2){
    name_department_2 = "NUTRITION AND DIETETICS";
    opt2 = d2 ( opt2);
    if (opt2 == 1){
       doctor_name_2 = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges2 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges2 = 2500;
    }
}

if (opt2 == 2){
    doctor_name_2 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges2 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges2 =  1500;
    }
}
}//chosen department nutrition

if ( a == 3){
    name_department_2 = "ONCOLOGY DEPARTMENT";
    opt3 = d3 (opt3);
    if (opt3 == 1){
       doctor_name_2 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges2 = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges2 = 4000;
       }
    } 
    if (opt3 == 2){
       doctor_name_2 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges2 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges2 = 5000;
       }
    } 
}//chosen department oncology
if (a == 4){
    name_department_2 = "PSYCOLOGICAL COUNSELLING";
    opt4 = d4 (opt4);
    if (opt4 == 1){
    doctor_name_2 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges2 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges2 = 5500;
    }
}
if (opt4 == 2){
    doctor_name_2 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges2 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges2 = 4500;
    }
}
}//chosen department psycological counselling
cout << endl;
  availability = chosen_doctor ( availability);
  time2 = time_of_reciept ( time2);
  receipt ( patient_name2 ,  patient_name2_2 , patient_age_2 , patient_w_2 , day2 , month2 , year2 ,name_department_2 , doctor_name_2 , time2 ,  charges2);
    count = count + 1;
    clearScreen();

}//if count is 1

else if (count == 2){
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 1 info : " <<endl;
    cout << "1. Enter the patient first name: " ;
    cin >> patient_name3;
    cout << "2. Enter the patient last name: ";
    cin >> patient_name3_2;
    cout << "3. Enter patient age here: " ;
    cin >> patient_age_3;
    cout << "4. Enter weight here: " ;
    cin >> patient_w_3;
    cout << "5. Enter date here: " ;
    cin >> day3;
    cout << "6. Enter month here: ";
    cin >> month3;
    cout << "7. Enter the year here: ";
    cin >> year3;
    a = departments (a);
if ( a == 1){
name_department_3 = "GYNECOLOGY DEPARTMENT";
    opt1 = d1 ( opt1);

    if (opt1 == 1){
    doctor_name_3 = "	Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges3 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges3 = 2500 ;
    }
}//doctor1

if (opt1 == 2){
    doctor_name_3 = "	Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges3 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges3 = 1500 ;
    }
}//doctor2
}//chosen department = gynecology

if ( a == 2){
    name_department_3 = "NUTRITION AND DIETETICS";
    opt2 = d2 ( opt2);
    if (opt2 == 1){
       doctor_name_3 = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges3 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges3 = 2500;
    }
}

if (opt2 == 2){
    doctor_name_3 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges3 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges3 =  1500;
    }
}
}//chosen department nutrition

if ( a == 3){
    name_department_3 = "ONCOLOGY DEPARTMENT";
    opt3 = d3 (opt3);
    if (opt3 == 1){
       doctor_name_3 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges3 = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges3 = 4000;
       }
    } 
    if (opt3 == 2){
       doctor_name_3 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges3 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges3 = 5000;
       }
    } 
}//chosen department oncology
if (a == 4){
    name_department_3 = "PSYCOLOGICAL COUNSELLING";
    opt4 = d4 (opt4);
    if (opt4 == 1){
    doctor_name_3 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges3 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges3 = 5500;
    }
}
if (opt4 == 2){
    doctor_name_3 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges3 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges3 = 4500;
    }
}
}//chosen department psycological counselling
cout << endl;
  availability = chosen_doctor ( availability);
  time3 = time_of_reciept ( time3);
  receipt ( patient_name3 ,  patient_name3_2 , patient_age_3 , patient_w_3 , day3 , month3 , year3 ,name_department_3 , doctor_name_3 , time3 ,  charges3);
clearScreen();
count = count + 1;
    
}//if count is 2

else if (count == 3){
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 1 info : " <<endl;
    cout << "1. Enter the patient first name: " ;
    cin >> patient_name4;
    cout << "2. Enter the patient last name: ";
    cin >> patient_name4_2;
    cout << "3. Enter patient age here: " ;
    cin >> patient_age_4;
    cout << "4. Enter weight here: " ;
    cin >> patient_w_4;
    cout << "5. Enter date here: " ;
    cin >> day4;
    cout << "6. Enter month here: ";
    cin >> month4;
    cout << "7. Enter the year here: ";
    cin >> year4;
    a = departments (a);
        
if ( a == 1){
name_department_4 = "GYNECOLOGY DEPARTMENT";
    opt1 = d1 ( opt1);

    if (opt1 == 1){
    doctor_name_4 = "	Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges4 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges4 = 2500 ;
    }
}//doctor1

if (opt1 == 2){
    doctor_name_4 = "	Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges4 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges4 = 1500 ;
    }
}//doctor2
}//chosen department = gynecology

if ( a == 2){
    name_department_4 = "NUTRITION AND DIETETICS";
    opt2 = d2 ( opt2);
    if (opt2 == 1){
       doctor_name_4 = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges4 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges4 = 2500;
    }
}

if (opt2 == 2){
    doctor_name_4 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges4 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges4 =  1500;
    }
}
}//chosen department nutrition

if ( a == 3){
    name_department_4 = "ONCOLOGY DEPARTMENT";
    opt3 = d3 (opt3);
    if (opt3 == 1){
       doctor_name_4 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges4 = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges4 = 4000;
       }
    } 
    if (opt3 == 2){
       doctor_name_4 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges4 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges4 = 5000;
       }
    } 
}//chosen department oncology
if (a == 4){
    name_department_4 = "PSYCOLOGICAL COUNSELLING";
    opt4 = d4 (opt4);
    if (opt4 == 1){
    doctor_name_4 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges4 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges4 = 5500;
    }
}
if (opt4 == 2){
    doctor_name_4 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges4 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges4 = 4500;
    }
}
}//chosen department psycological counselling
cout << endl;
  availability = chosen_doctor ( availability);
  time1 = time_of_reciept ( time4);
  receipt ( patient_name4 ,  patient_name4_2 , patient_age_4 , patient_w_4 , day4 , month4 , year4 ,name_department_4 , doctor_name_4 , time4 ,  charges4);
count = count + 1;
clearScreen();
}//if count is 3

}//end of if chooses option 1

if (option == 2){
    system("cls");
    cout << "==============================ALL PATIENT RECORD==================================" <<endl;
    cout << "Patient 1 :-" <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
    cout << "Patient 2:-" <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
    cout << "Patient 3 :-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
    cout << "Patient 4 :-" <<endl;
    patient_info ( patient_name4, patient_name4_2 , patient_age_4 , patient_w_4 ,day4 , month4 , year4 ,  name_department_4 , doctor_name_4 ,time4 ,charges4);
}//end of if chooses option 2

if (option == 3){
    change_pass ( pass_of_admin_account ,  reenter_pass_of_admin_account);
}//end of if chooses option 3

if (option == 4){
    discounts ();
}

if (option == 5){
    system("cls"); 
    cout << endl;
    cout << "==================================VIEW PATIENT HISTORY=============================" <<endl;
    cout << "Enter patient name here : ";
    cin >> history;

    if (history == patient_name1){
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
    }
    if (history == patient_name2){
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
    }
    if (history == patient_name3){
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
    }
    if (history == patient_name4){
    patient_info ( patient_name4, patient_name4_2 , patient_age_4 , patient_w_4 ,day4 , month4 , year4 ,  name_department_4 , doctor_name_4 ,time4 ,charges4);
    }
}//end of if chooses option 5

if (option == 6){
     system("cls"); 
    cout << "====================PATIENTS RECORD FROM OLDEST TO YOUNGEST======================" <<endl;
//oldest patient   
if ( patient_age_1 > patient_age_2 && patient_age_1 > patient_age_3 && patient_age_1 > patient_age_4){
    cout << "Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}
else if (patient_age_2 > patient_age_1 && patient_age_2 > patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}
else if (patient_age_3 > patient_age_2 && patient_age_3 > patient_age_1 && patient_age_3 > patient_age_4){
    cout << "Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else {
    cout << "Oldest patient:-" <<endl;
    patient_info ( patient_name4, patient_name4_2 , patient_age_4 , patient_w_4 ,day4 , month4 , year4 ,  name_department_4 , doctor_name_4 ,time4 ,charges4);
} 

//Second youngest
cout << "                      " <<endl;
//for patient1
if ( patient_age_1 > patient_age_2 && patient_age_1 > patient_age_3 && patient_age_1 < patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}
else if ( patient_age_1 > patient_age_2 && patient_age_1 < patient_age_3 && patient_age_1 > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}
else if ( patient_age_1 < patient_age_2 && patient_age_1 > patient_age_3 && patient_age_1 > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}

//for patient 2
else if (patient_age_2 > patient_age_1 && patient_age_2 > patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}
else if (patient_age_2 > patient_age_1 && patient_age_2 < patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}
else if (patient_age_2 < patient_age_1 && patient_age_2 > patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}

//for patient 3
else if (patient_age_3 > patient_age_2 && patient_age_3 > patient_age_1 && patient_age_3 < patient_age_4){
    cout << "Second Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else if (patient_age_3 > patient_age_2 && patient_age_3 < patient_age_1 && patient_age_3 > patient_age_4){
    cout << "Second Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else if (patient_age_3 < patient_age_2 && patient_age_3 > patient_age_1 && patient_age_3 > patient_age_4){
    cout << "Second Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else {
    cout << "Second Oldest patient:-" <<endl;
    patient_info ( patient_name4, patient_name4_2 , patient_age_4 , patient_w_4 ,day4 , month4 , year4 ,  name_department_4 , doctor_name_4 ,time4 ,charges4);
}

//third oldest patient
cout << "                 " <<endl;
//for patient 1
if ( patient_age_1 > patient_age_2 && patient_age_1 < patient_age_3 && patient_age_1 < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}
else if ( patient_age_1 < patient_age_2 && patient_age_1 > patient_age_3 && patient_age_1 < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}
else if ( patient_age_1 < patient_age_2 && patient_age_1 < patient_age_3 && patient_age_1 > patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}

//for patient 2
else if (patient_age_2 > patient_age_1 && patient_age_2 < patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}
else if (patient_age_2 < patient_age_1 && patient_age_2 > patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}
else if (patient_age_2 < patient_age_1 && patient_age_2 < patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}

//for patient 3
else if (patient_age_3 > patient_age_2 && patient_age_3 < patient_age_1 && patient_age_3 < patient_age_4){
    cout << "Third Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else if (patient_age_3 < patient_age_2 && patient_age_3 > patient_age_1 && patient_age_3 < patient_age_4){
    cout << "Third Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else if (patient_age_3 > patient_age_2 && patient_age_3 < patient_age_1 && patient_age_3 < patient_age_4){
    cout << "Third Oldest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}

else {
    cout << "Third Oldest patient:-" <<endl;
    patient_info ( patient_name4, patient_name4_2 , patient_age_4 , patient_w_4 ,day4 , month4 , year4 ,  name_department_4 , doctor_name_4 ,time4 ,charges4);
}

//youngest patient
cout << "                                  " <<endl;
if (patient_age_1 < patient_age_2 && patient_age_1 < patient_age_3 && patient_age_1 < patient_age_4){
    cout << "Youngest patient:-" <<endl;
    patient_info ( patient_name1, patient_name1_2 , patient_age_1 , patient_w_1 ,day1 , month1 , year1 ,  name_department_1 , doctor_name_1 ,time1 ,charges1);
}
else if (patient_age_2 < patient_age_1 && patient_age_2 < patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Youngest patient:-" <<endl;
    patient_info ( patient_name2, patient_name2_2 , patient_age_2 , patient_w_2 ,day2 , month2 , year2 ,  name_department_2 , doctor_name_2 ,time2 ,charges2);
}
else if (patient_age_3 < patient_age_2 && patient_age_3 < patient_age_1 && patient_age_3 < patient_age_4){
    cout << "Youngest patient:-" <<endl;
    patient_info ( patient_name3, patient_name3_2 , patient_age_3 , patient_w_3 ,day3 , month3 , year3 ,  name_department_3 , doctor_name_3 ,time1 ,charges3);
}
else{
    cout << "Youngest patient:-" <<endl;
    patient_info ( patient_name4, patient_name4_2 , patient_age_4 , patient_w_4 ,day4 , month4 , year4 ,  name_department_4 , doctor_name_4 ,time4 ,charges4);
}
}//end of if chooses option 6

if (option == 7){
    exit ();
    clearScreen();
}

}//end of while loop
}//if password correct 
else{
    cout << "Try again!";
    option = 7;
}

}//if admin

//PATIENT'S ACCOUNT
int p_option ;
string patient_username = "zoyanaveedhdh";
string pass_of_patient_account = "zn201";
string reenter_pass_of_patient_account;

int p_opt_depart = 0 ,p_opt1 = 0 , p_opt2 = 0 , p_opt3 = 0 ,p_opt4 = 0;
string p_name ,p_name2, p_month ,p_department_name , p_doctor_name;
int p_time = 0 , p_visit_number = 0 ,p_charges = 0 , p_day = 0 , p_year = 0;
int end;

int rating;
int choose_doc;
int rt_doc1;
int rt_doc2;
int rt_doc3;
int rt_doc4;
int rt_doc5;
int rt_doc6;
int rt_doc7;
int rt_doc8;

if (user == "patient"){
patient_login (patient_username ,  pass_of_patient_account);

if (patient_username == "zoyanaveedhdh" && pass_of_patient_account == "zn201"){
        cout << "You are logged in!!!" <<endl;
}
else{
    cout << "Incorrect username or password " <<endl;
    end = 1;
}

while (p_option != 8){

p_option =  p_menu ( p_option);

if (p_option == 1){
    p_opt_depart = departments (p_opt_depart);

if ( p_opt_depart == 1){
p_department_name = "GYNECOLOGY DEPARTMENT";
    p_opt1 = d1 (p_opt1);

    if (p_opt1 == 1){
    p_doctor_name = "Professor Nadia Khan";

    if (num_of_visit == 1){
        p_charges = 3000 ;
    }
    else {
         p_charges = 2500 ;
    }
}//doctor1

if (p_opt1 == 2){
    doctor_name_2 = "Doctor Fatima sohail";

    if (num_of_visit == 1){
        charges2 = 2000 ;
    }
    else {
        charges2 = 1500 ;
    }
}//doctor2
}//chosen department = gynecology

if ( p_opt_depart == 2){
    p_department_name = "NUTRITION AND DIETETICS";
    p_opt2 = d2 ( p_opt2);
    if (p_opt2 == 1){
       p_doctor_name = "Professor Amna Zafar";

    if (num_of_visit == 1){
        p_charges = 3000;
    }
    else {
        p_charges = 2500;
    }
}
if (p_opt2 == 2){
    p_doctor_name = "Doctor Ilyas Ahmed ";
    
    if (num_of_visit == 1){
       p_charges = 2000;
    }
    else {
       p_charges =  1500;
    }
}
}//chosen department nutrition

if ( p_opt_depart == 3){
    p_department_name = "ONCOLOGY DEPARTMENT";

    p_opt3 = d3 (p_opt3);
    if (p_opt3 == 1){
       p_doctor_name = "Professor Mustafa";
        p_charges = 4000;
       
    }
    if (p_opt3 == 2){
       p_doctor_name = "Professor Fida";
        p_charges = 5000;
    } 
}//chosen department oncology

if (p_opt_depart == 4){
    p_department_name = "PSYCOLOGICAL COUNSELLING";
    p_opt4 = d4 (p_opt4);
    if (p_opt4 == 1){
    p_doctor_name = "Professor Aiysha Tahir";

    if (num_of_visit == 1){
        p_charges = 6000;
    }
    else {
        p_charges = 5500;
    }
}
if (p_opt4 == 2){
    p_doctor_name = "Professor Zainab Jawed";

    if (num_of_visit == 1){
        p_charges = 5000;
    }
    else {
        p_charges = 4500;
    }
}
}//chosen department psycological counselling

cout << endl;
cout << "==================================ENTER INFORMATION================================" <<endl;
cout << "Enter first name here: " ;
cin >> p_name;
cout << "Enter last name here : ";
cin >> p_name2;
cout << "Enter day here: " ;
cin >> p_day;
cout << "Enter month here : ";
cin >> p_month;
cout << "Enter year here : ";
cin >> p_year;
cout << "Enter the visit number here: " ;
cin >> p_visit_number;
cout << "Choose the time (between 4 to 8): ";
cin >> p_time;
system("cls");
patient_reciept ( p_name , p_name2, p_day , p_year , p_month , p_time, p_department_name, p_doctor_name , p_charges);
clearScreen();

}//end of if chooses book an appointment

if (p_option == 2){
    system("cls");
    cout << "=====================================PREVIOUS APPOINTMENTS========================================" <<endl;
    if (p_charges > 0){
    patient_reciept ( p_name , p_name2, p_day , p_year , p_month , p_time, p_department_name, p_doctor_name , p_charges);
    }
    else{
        cout << "NO RECORDS YET";
    }
}//end of if option 2
if (p_option == 3){
    system("cls");
    pass_change ( pass_of_patient_account ,reenter_pass_of_patient_account);
}//end of if option 3
if (p_option == 4){
    system("cls");
    doctors ();
    clearScreen();
}//end of if option 4
if (p_option == 5){
    system("cls");
    timings ();
    clearScreen();
}//end of option 5
if (p_option == 6){
    system("cls");
    choose_doc = feedback ( choose_doc);
    if (choose_doc == 1){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc1;    
}
if (choose_doc == 2){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc2;    
}
if (choose_doc == 3){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc3;    
}
if (choose_doc == 4){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc4;    
}
if (choose_doc == 5){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc5;    
}
if (choose_doc == 6){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc6;    
}
if (choose_doc == 7){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc7;    
}
if (choose_doc == 8){
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout <<endl;
    cout << "Your option..... " ;
    cin >> rt_doc8;    
}
clearScreen();
}//end of if chooses option 6

if (p_option == 7){
    system("cls");
    cout << "              " <<endl;
    cout << "============================RECOMMENDED DOCTORS================================" <<endl;
    if (rt_doc1 == 1){
    cout << "Professor Aiysha Tahir from Department of Psychological Counselling" <<endl;
    }
    if (rt_doc2 == 1){
        cout << "Professor Zainab Jawed from Department of Psychological Counselling" <<endl;
    }
    if (rt_doc3 == 1){
        cout << "Professor Fida from Department of Oncology" <<endl;
    }
    if (rt_doc4 == 1){
        cout << "Professor Mustafa from Department of Oncology " <<endl;
    }
    if (rt_doc5 == 1){
        cout << "Professor Amna Zafar from Department of Nutrition and Dietetics" <<endl;
    }
    if (rt_doc6 == 1){
        cout << "Doctor Ilyas Ahmed  from Department of Nutrition and Dietetics" <<endl;
    }
    if (rt_doc7 == 1){
        cout << "Professor Nadia Khan from Department of Gynecology" <<endl;
    }
    if (rt_doc8 == 1){
        cout << "Doctor Fatima Sohail from Department of Gynecology" <<endl;
    }
    else{
        cout << "NO USER RECOMMENDATIONS YET";
    }
    clearScreen();
}//end of option 7
if (p_option == 8){
    exit ();
    clearScreen();
}
}//end of while loop
}//end of if user is patient
}//if login
else {
    break;
}
}//end of while loop mainchoice
}//main