#include<iostream>
#include <stdlib.h>
using namespace std;
main()

{

cout << "  ======================WELCOME TO WOMENS HEALTH CLINIC======================="<<endl;//header
cout <<endl;
string user;
cout << "Are you admin or patient? " ;
cin >> user;

// ADMIN ACCOUNT

cout << "                         " <<endl;

if (user == "admin"){
cout << " =====================================LOGIN PAGE====================================" <<endl;
cout << "                         " <<endl;

string pass_of_admin_account;
cout << "Enter the password here " << endl;
cin >> pass_of_admin_account;
string reenter_pass_of_admin_account;
int exit;
string history;

if (pass_of_admin_account == "qwxyz235"){
    cout << endl;
    cout << "YOU HAVE BEEN LOGGED IN!" <<endl;
    cout << endl;

cout << "=====================================ADMIN=========================================" <<endl;
cout << "                         " <<endl;

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

cout << "                  " <<endl;
int option;
cout << "Your option..... " ;
cin >> option;
cout <<endl;

string patient_name1 , patient_name1_2 , month ;
int   patient_age=0 , patient_w=0 , day=0 ,year=0;
int num_of_visit;
int a , opt1 , opt2 , opt3 ,opt4;
char discount , availability , reciept;
int time=0;
string name_department , doctor_name;
int charges=0;

if (option == 1){
    system("cls"); 
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 1 info : " <<endl;
    cout << "1. Enter the patient first name: " ;
    cin >> patient_name1;
    cout << "2. Enter the patient last name: ";
    cin >> patient_name1_2;
    cout << "3. Enter patient age here: " ;
    cin >> patient_age;
    cout << "4. Enter weight here: " ;
    cin >> patient_w;
    cout << "5. Enter date here: " ;
    cin >> day;
    cout << "6. Enter month here: ";
    cin >> month;
    cout << "7. Enter the year here: ";
    cin >> year;

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
cout <<endl;

if (a == 1){
name_department = "GYNECOLOGY DEPARTMENT";

cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Nadia Khan" <<endl;
cout << "2.	Doctor Fatima sohail" <<endl;

cout << "                  " <<endl;
cout << "Your option...... ";
cin >> opt1;
cout <<endl;

if (opt1 == 1){
    doctor_name = "	Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges = 2500 ;
    }
}

if (opt1 == 2){
    doctor_name = "	Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges = 1500 ;
    }
}
}

if (a == 2){
name_department = "NUTRITION AND DIETETICS DEPARTMENT";

cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt2;

if (opt2 == 1){
    doctor_name = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges = 2500;
    }
}
if (opt2 == 2){
    doctor_name = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges =  1500;
    }
}
}

if (a == 3){
    name_department = "ONCOLOGY DEPARTMENT";

    cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Mustafa for diagnosis" <<endl;
    cout << "2.	Professor Fida for ultrasound" <<endl;

    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >> opt3;
    
    if (opt3 == 1){
       doctor_name = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges = 4000;
       }
    } 
    if (opt3 == 2){
       doctor_name = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges = 5000;
       }
    } 
}

if (a == 4){
     
    name_department = "PSYCOLOGICAL COUNSELLING";

    cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Aiysha Tahir" <<endl;
    cout << "2.	Professor Zainab Jawed " <<endl;
    
    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >>opt4;

    if (opt4 == 1){
    doctor_name = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges = 5500;
    }
}
if (opt4 == 2){
    doctor_name = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges = 4500;
    }
}
}

cout <<endl;
cout << "=============================DOCTORS AVAILABILITY=================================" <<endl;
cout << "Is the chosen doctor available (y/n): "<<endl;
cin >> availability;

if (availability == 'n'){
    cout << "Please select another doctor " <<endl;
}


if (availability == 'y'){
        cout << "======================================RECIEPT======================================" <<endl;
        cout << "Enter the time of receipt here:" ; 
        cin >> time;
        cout << "Do you want to print or discard (P/D)?: " <<endl;
        cin >> reciept;

    if (reciept == 'D'){
        cout << "======================WELCOME TO WOMENS HEALTH CLINIC=======================" <<endl;
        cout << "Are you Admin or Patient? : " <<endl; 
        cin >>user;
        }

    if (reciept == 'P'){
        system("cls"); 
        cout << "                                   " <<endl;
        cout << "                            WOMENS HEALTH CLINIC                          " <<endl;

        cout << day <<"/"<<month <<"/"<<year <<endl;
        cout << "First name is: "<<patient_name1 << "\t" << "Last name is: "<<patient_name1_2 <<endl;
        cout << "Age: " <<patient_age <<" years" <<"\t "<< "Weight:" << patient_w <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department <<endl;
        cout << "Name of the Doctor: " <<doctor_name <<endl;
        cout << "Time to see the doctor: "<<time <<"pm" <<endl;
        cout << "Charges are "<< charges <<" rupees only/-" <<endl ;
    }
}


}
if (option == 2){
    system("cls"); 
    cout << "NO RECORDS YET" <<endl;
}

if (option == 3){
    system("cls"); 
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
}

if (option == 4){
    system("cls"); 
    cout << "==================================SPECIAL DISCOUNTS================================" <<endl;
    cout << "1.	5% discount during breast cancer awareness month" <<endl;
    cout << "2.	5% discount if patient older than 60 years of age" <<endl;
    cout << "3.	5% discount if patient younger than 5 years of age" <<endl;
}

if (option == 5){
    system("cls"); 
    cout << "NO PATIENT HISTORY YET";
}

if (option == 6){
    system("cls"); 
    cout << "NO SUCH RECORDS YET";
}

if (option == 7){
    cout << "========================================EXIT=======================================" <<endl;
    exit = 1;
}

cout << "                         " <<endl;
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

cout << "          " <<endl;
int option2;
cout <<"Your option..... ";
cin >> option2;


string patient_name2 , patient_name2_2 , month2;
int   patient_age_2=0 , patient_w_2=0 , day2=0 ,year2=0;
int b , opt5 , opt6 , opt7 ,opt8;
int time2=0;
string name_department_2 , doctor_name_2;
int charges_2=0;


if (option2 == 1){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 2 info : " <<endl;
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

cout << endl;
cout << "====================================DEPARTMENTS=================================";
cout << "Select department: " <<endl;
cout << "1.	Gynecology Department" <<endl;
cout << "2.	Nutrition and Dietetics" <<endl;
cout << "3.	Oncology Department" <<endl;
cout << "4.	Psychological Counselling Department" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> b;
cout <<endl;

if (b == 1){
name_department_2 = "GYNECOLOGY DEPARTMENT";

cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Nadia Khan" <<endl;
cout << "2.	Doctor Fatima sohail" <<endl;

cout << "                  " <<endl;
cout << "Your option...... ";
cin >> opt5;
cout <<endl;

if (opt5 == 1){
    doctor_name_2 = "Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges_2 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges_2 = 2500 ;
    }
}

if (opt5 == 2){
    doctor_name_2 = "Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges_2 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges_2 = 1500 ;
    }
}
}

if (b == 2){
name_department_2  = "NUTRITION AND DIETETICS DEPARTMENT";

cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt6;

if (opt6 == 1){
    doctor_name_2 = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges_2 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges_2 = 2500;
    }
}

if (opt6 == 2){
    doctor_name_2 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges_2 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges_2 =  1500;
    }
}
}

if (b == 3){
    name_department_2 = "ONCOLOGY DEPARTMENT";

    cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Mustafa for diagnosis" <<endl;
    cout << "2.	Professor Fida for ultrasound" <<endl;

    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >> opt7;
    
    if (opt7 == 1){
       doctor_name_2 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges_2= 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges_2 = 4000;
       }
      } 
    if (opt7 == 2){
       doctor_name_2 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges_2 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges_2 = 5000;
       }
    } 
}

if (b == 4){
     
    name_department = "PSYCOLOGICAL COUNSELLING";

    cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Aiysha Tahir" <<endl;
    cout << "2.	Professor Zainab Jawed " <<endl;
    
    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >>opt8;

    if (opt8 == 1){
    doctor_name_2 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges_2 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges_2 = 5500;
    }
}
if (opt8 == 2){
    doctor_name_2 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges_2 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges_2 = 4500;
    }
}
}

cout <<endl;
cout << "=============================DOCTORS AVAILABILITY=================================" <<endl;
cout << "Is the chosen doctor available (y/n): "<<endl;
cin >> availability;

if (availability == 'n'){
    cout << "Please select another doctor " <<endl;
}

if (availability == 'y'){
        cout << "                         " <<endl;
        cout << "======================================RECIEPT======================================" <<endl;
        cout << "Enter the time of receipt here:" ; 
        cin >> time2;
        cout << "Do you want to print or discard (P/D)?: " <<endl;
        cin >> reciept;

    if (reciept == 'D'){
        cout << "                         " <<endl;
        cout << "======================WELCOME TO WOMENS HEALTH CLINIC=======================" <<endl;
        cout << "Are you Admin or Patient? : " <<endl; 
        cin >>user;
    }

    if (reciept == 'P'){
        system("cls"); 
        cout << "                                   " <<endl;
        cout << "                            WOMENS HEALTH CLINIC                          " <<endl;

        cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
        cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
        cout << "Age: " <<patient_age_2 <<" years"<<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_2 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
        cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
        cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl;
    }

}
}

if (option2 == 2){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==============================ALL PATIENT RECORD==================================" <<endl;
    cout << "      " <<endl;
    cout << "Patient 1:-" <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}

if (option2 == 3){
    system("cls"); 
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
}

if (option2 == 4){
    system("cls"); 
    cout << "==================================SPECIAL DISCOUNTS================================" <<endl;
    cout << "1.	5% discount during breast cancer awareness month" <<endl;
    cout << "2.	5% discount if patient older than 60 years of age" <<endl;
    cout << "3.	5% discount if patient younger than 5 years of age" <<endl;
}

if (option2 == 5){
    system("cls"); 
    cout << "                               " <<endl;
    cout << "==================================VIEW PATIENT HISTORY=============================" <<endl;
    cout << "Enter patient name here : ";
    cin >> history;
    if (history == patient_name1){
       cout << "                         " <<endl;
       cout << day <<"/"<<month <<"/"<<year <<endl;
       cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
       cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department <<endl;
       cout << "Name of the Doctor: " <<doctor_name <<endl;
       cout << "Time to see the doctor: "<<time <<"pm" <<endl;
       cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    }
}

if (option2 == 6){
    system("cls"); 
    cout << "====================PATIENTS RECORD FROM OLDEST TO YOUNGEST======================" <<endl;
    cout << "                         " <<endl;
    cout << "No such records yet ";
}


if (option2 == 7){
    cout << "========================================EXIT=======================================" <<endl;
    exit = 1;
}

cout << "                         " <<endl;
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

cout << "          " <<endl;
int option3;
cout <<"Your option..... ";
cin >> option3;

string patient_name3 , patient_name3_2 , month3 ;
int   patient_age_3=0 , patient_w_3=0 , day3=0 ,year3=0;
int c , opt9 , opt10 , opt11 ,opt12;
int time3=0;
string name_department_3 , doctor_name_3;
int charges_3=0;

if (option3 == 1){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 2 info : " <<endl;
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

cout << endl;
cout << "====================================DEPARTMENTS=================================";
cout << "Select department: " <<endl;
cout << "1.	Gynecology Department" <<endl;
cout << "2.	Nutrition and Dietetics" <<endl;
cout << "3.	Oncology Department" <<endl;
cout << "4.	Psychological Counselling Department" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> c;
cout <<endl;

if (c == 1){
name_department_3 = "GYNECOLOGY DEPARTMENT";

cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Nadia Khan" <<endl;
cout << "2.	Doctor Fatima sohail" <<endl;

cout << "                  " <<endl;
cout << "Your option...... ";
cin >> opt9;
cout <<endl;

if (opt9 == 1){
    doctor_name_3 = "Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges_3 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges_3 = 2500 ;
    }
}

if (opt9 == 2){
    doctor_name_3 = "Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges_3 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges_3 = 1500 ;
    }
}
}

if (c == 2){
name_department_3  = "NUTRITION AND DIETETICS DEPARTMENT";

cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt10;

if (opt10 == 1){
    doctor_name_3 = "	Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges_3 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges_3 = 2500;
    }
}

if (opt10 == 2){
    doctor_name_3 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges_3 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges_3 =  1500;
    }
}
}

if (c == 3){
    name_department_3 = "ONCOLOGY DEPARTMENT";

    cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Mustafa for diagnosis" <<endl;
    cout << "2.	Professor Fida for ultrasound" <<endl;

    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >> opt11;
    
    if (opt11 == 1){
       doctor_name_3 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges_3 = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges_3 = 4000;
       }
      } 
    if (opt11 == 2){
       doctor_name_3 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges_3 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges_3 = 5000;
       }
    } 
}

if (c == 4){
     
    name_department_3 = "PSYCOLOGICAL COUNSELLING";

    cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Aiysha Tahir" <<endl;
    cout << "2.	Professor Zainab Jawed " <<endl;
    
    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >> opt12;

    if (opt12 == 1){
    doctor_name_3 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges_3 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges_3 = 5500;
    }
}
if (opt12 == 2){
    doctor_name_3 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges_3 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges_3 = 4500;
    }
}
}

cout <<endl;
cout << "=============================DOCTORS AVAILABILITY=================================" <<endl;
cout << "Is the chosen doctor available (y/n): "<<endl;
cin >> availability;

if (availability == 'n'){
    cout << "Please select another doctor " <<endl;
}
if (availability == 'y'){
        cout << "                         " <<endl;
        cout << "======================================RECIEPT======================================" <<endl;
        cout << "Enter the time of receipt here:" ; 
        cin >> time3;
        cout << "Do you want to print or discard (P/D)?: " <<endl;
        cin >> reciept;

    if (reciept == 'D'){
        cout << "======================WELCOME TO WOMENS HEALTH CLINIC=======================" <<endl;
        cout << "Are you Admin or Patient? : " <<endl; 
        cin >>user;
    }

    if (reciept == 'P'){
        system("cls"); 
        cout << "                                   " <<endl;
        cout << "                            WOMENS HEALTH CLINIC                          " <<endl;

        cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
        cout << "First name is: "<<patient_name3 << "\t " << " Last name is: "<<patient_name3_2 <<endl;
        cout << "Age: " <<patient_age_3 <<" years"<<"\t" << "Weight: " << patient_w_3 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_3 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
        cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
        cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl;
    }

}

}

if (option3 == 2){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==============================ALL PATIENT RECORD==================================" <<endl;
    cout << "      " <<endl;
    cout << "Patient 1:-" <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    cout << "                   "<<endl;
    cout << "Patient 2:-"<<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}

if (option3 == 3){
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
}

if (option3 == 4){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================SPECIAL DISCOUNTS================================" <<endl;
    cout << "1.	5% discount during breast cancer awareness month" <<endl;
    cout << "2.	5% discount if patient older than 60 years of age" <<endl;
    cout << "3.	5% discount if patient younger than 5 years of age" <<endl;
}

if (option3 == 5){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================VIEW PATIENT HISTORY=============================" <<endl;
    cout << "Enter patient name here : ";
    cin >> history;
    if (history == patient_name1){
       cout << "                         " <<endl;
       cout << day <<"/"<<month <<"/"<<year <<endl;
       cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
       cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department <<endl;
       cout << "Name of the Doctor: " <<doctor_name <<endl;
       cout << "Time to see the doctor: "<<time <<"pm" <<endl;
       cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    }
    if (history == patient_name2){
        cout << "                         " <<endl;
       cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
       cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
       cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department_2 <<endl;
       cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
       cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
       cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
    }
}

if (option3 == 6){
    system("cls"); 
        cout << "====================PATIENTS RECORD FROM OLDEST TO YOUNGEST======================" <<endl;
        if (patient_age > patient_age_2){
        cout << "                         " <<endl;
        cout << "Oldest Patient:-" <<endl;
        cout << day <<"/"<<month <<"/"<<year <<endl;
        cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
        cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department <<endl;
        cout << "Name of the Doctor: " <<doctor_name <<endl;
        cout << "Time to see the doctor: "<<time <<"pm" <<endl;
        cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
        cout << "                   "<<endl;
        cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
        cout << "Age: " <<patient_age_2 <<" years"; cout <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_2 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
        cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
        cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
    }

    if (patient_age_2 > patient_age){
        cout << "                         " <<endl;
        cout << "Oldest Patient:-" <<endl;
        cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
        cout << "Age: " <<patient_age_2 <<" years"; cout <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_2 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
        cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
        cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
        cout << "                   "<<endl;
        cout << "Youngest Patient:-"<<endl;
        cout << day <<"/"<<month <<"/"<<year <<endl;
        cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
        cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department <<endl;
        cout << "Name of the Doctor: " <<doctor_name <<endl;
        cout << "Time to see the doctor: "<<time <<"pm" <<endl;
        cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    }
}

if (option3 == 7){
    cout << "========================================EXIT=======================================" <<endl;
    exit = 1;
}

cout << "                         " <<endl;
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

cout << "          " <<endl;
int option4;
cout <<"Your option..... ";
cin >> option4;

string patient_name4 , patient_name4_2 , month4 ;
int  patient_age_4=0 , patient_w_4=0 , day4 =0 ,year4 =0;
int  d , opt13 , opt14 , opt15 ,opt16;
int time4=0;
string name_department_4, doctor_name_4;
int charges_4=0;

if (option4 == 1){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 2 info : " <<endl;
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

cout << endl;
cout << "====================================DEPARTMENTS=================================";
cout << "Select department: " <<endl;
cout << "1.	Gynecology Department" <<endl;
cout << "2.	Nutrition and Dietetics" <<endl;
cout << "3.	Oncology Department" <<endl;
cout << "4.	Psychological Counselling Department" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> d;
cout <<endl;

if (d == 1){
name_department_4 = "GYNECOLOGY DEPARTMENT";

cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Nadia Khan" <<endl;
cout << "2.	Doctor Fatima sohail" <<endl;

cout << "                  " <<endl;
cout << "Your option...... ";
cin >> opt13;
cout <<endl;

if (opt13 == 1){
    doctor_name_4 = "Professor Nadia Khan";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges_4 = 3000 ;
    }
    else {
        cout << "Charge 2500/-";
         charges_4 = 2500 ;
    }
}

if (opt13 == 2){
    doctor_name_3 = "Doctor Fatima sohail";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
        charges_4 = 2000 ;
    }
    else {
        cout << "Charge 1500/-";
        charges_4 = 1500 ;
    }
}
}

if (d == 2){
name_department_4  = "NUTRITION AND DIETETICS DEPARTMENT";

cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt14;

if (opt14 == 1){
    doctor_name_4 = "Professor Amna Zafar";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 3000/-";
        charges_4 = 3000;
    }
    else {
        cout << "Charge 2500/-";
        charges_4 = 2500;
    }
}

if (opt14 == 2){
    doctor_name_4 = "Doctor Ilyas Ahmed ";
    
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 2000/-";
       charges_4 = 2000;
    }
    else {
        cout << "Charge 1500/-";
       charges_4 =  1500;
    }
}
}
if (d == 3){
    name_department_4 = "ONCOLOGY DEPARTMENT";

    cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Mustafa for diagnosis" <<endl;
    cout << "2.	Professor Fida for ultrasound" <<endl;

    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >> opt15;
    
    if (opt15 == 1){
       doctor_name_4 = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 3800/-";
        charges_4 = 3800;
       }
    else {
        cout << "Charge 4000/-";
        charges_4 = 4000;
       }
      } 
    if (opt15 == 2){
       doctor_name_4 = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        cout << "Charge 4800/-";
        charges_4 = 4800;
       }
    else {
        cout << "Charge 5000/-";
        charges_4 = 5000;
       }
    } 
}
if (d == 4){
     
    name_department_4 = "PSYCOLOGICAL COUNSELLING";

    cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Aiysha Tahir" <<endl;
    cout << "2.	Professor Zainab Jawed " <<endl;
    
    cout << "                  " <<endl;
    cout << "Your option..... ";
    cin >> opt16;

    if (opt16 == 1){
    doctor_name_4 = "Professor Aiysha Tahir";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 6000/-";
        charges_4 = 6000;
    }
    else {
        cout << "Charge 5500/-";
        charges_4 = 5500;
    }
}
if (opt16 == 2){
    doctor_name_4 = "Professor Zainab Jawed";

    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
    if (num_of_visit == 1){
        cout << "Charge 5000/-";
        charges_4 = 5000;
    }
    else {
        cout << "Charge 4500/-";
        charges_4 = 4500;
    }
}
}
cout <<endl;
cout << "=============================DOCTORS AVAILABILITY=================================" <<endl;
cout << "Is the chosen doctor available (y/n): "<<endl;
cin >> availability;

if (availability == 'n'){
    cout << "Please select another doctor " <<endl;
}

if (availability == 'y'){
        cout << "                         " <<endl;
        cout << "======================================RECIEPT======================================" <<endl;
        cout << "Enter the time of receipt here:" ; 
        cin >> time4;
        cout << "Do you want to print or discard (P/D)?: " <<endl;
        cin >> reciept;

    if (reciept == 'D'){
        cout << "======================WELCOME TO WOMENS HEALTH CLINIC=======================" <<endl;
        cout << "Are you Admin or Patient? : " <<endl; 
        cin >>user;
    }

    if (reciept == 'P'){
        system("cls"); 
        cout << "                                   " <<endl;
        cout << "                            WOMENS HEALTH CLINIC                          " <<endl;

        cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
        cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
        cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_4 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
        cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
        cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
    }
}
}
if (option4 == 2){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==============================ALL PATIENT RECORD==================================" <<endl;
    cout << "      " <<endl;
    cout << "Patient 1:-" <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    cout << "                   "<<endl;
    cout << "Patient 2:-"<<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
    cout << "                   "<<endl;
    cout << "Patient 3:- " <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3 << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years"<<"\t" << "Weight: " << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl;
}

if (option4 == 3){
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
}
if (option4 == 4){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================SPECIAL DISCOUNTS================================" <<endl;
    cout << "1.	5% discount during breast cancer awareness month" <<endl;
    cout << "2.	5% discount if patient older than 60 years of age" <<endl;
    cout << "3.	5% discount if patient younger than 5 years of age" <<endl;
}
if (option4 == 5){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================VIEW PATIENT HISTORY=============================" <<endl;
    cout << "Enter patient name here : ";
    cin >> history;
    if (history == patient_name1){
       cout << "                         " <<endl;
       cout << day <<"/"<<month <<"/"<<year <<endl;
       cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
       cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department <<endl;
       cout << "Name of the Doctor: " <<doctor_name <<endl;
       cout << "Time to see the doctor: "<<time <<"pm" <<endl;
       cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    }
    if (history == patient_name2){
        cout << "                         " <<endl;
       cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
       cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
       cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department_2 <<endl;
       cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
       cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
       cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
    }
    if (history == patient_name3){
        cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
        cout << "First name is: "<<patient_name3 << "\t " << " Last name is: "<<patient_name3_2 <<endl;
        cout << "Age: " <<patient_age_3 <<" years"<<"\t" << "Weight: " << patient_w_3 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_3 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
        cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
        cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl;

    }

}
if (option4 == 6){
    system("cls"); 
    cout << "====================PATIENTS RECORD FROM OLDEST TO YOUNGEST======================" <<endl;
//oldest patient   

if ( patient_age > patient_age_2 && patient_age > patient_age_3){
    cout << "Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
if (patient_age_2 > patient_age && patient_age_2 > patient_age_3){
    cout << "Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
 if (patient_age_3 > patient_age_2 && patient_age_3 > patient_age){
    cout << "Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}

//second oldest patient

cout << "                                      " <<endl;
if (patient_age < patient_age_2 && patient_age > patient_age_3){
    cout << " Second Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
if (patient_age_2 > patient_age && patient_age_2 < patient_age_3){
    cout << "Second Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
if (patient_age_3 > patient_age && patient_age_3 < patient_age_2){
    cout << "Second Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}

//youngest patient

cout << "                                      " <<endl;
if (patient_age < patient_age_2 && patient_age < patient_age_3){
    cout << "Youngest patient:-" <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
if (patient_age_2 < patient_age && patient_age_2 < patient_age_3){
    cout << "Youngest patient:-" <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
if (patient_age_3 < patient_age_2 && patient_age_3 < patient_age){
    cout << "Youngest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;

}
}

if (option4 == 7){
    cout << "========================================EXIT=======================================" <<endl;
    exit = 1;
}

cout << "                         " <<endl;
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

cout << "          " <<endl;
int option5;
cout <<"Your option..... ";
cin >> option5;

if (option5 == 1){
    cout << "CONTENTS FILLED";
}

if (option5 == 2){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==============================ALL PATIENT RECORD==================================" <<endl;
    cout << "      " <<endl;
    cout << "Patient 1:-" <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    cout << "                   "<<endl;
    cout << "Patient 2:-"<<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
    cout << "                   "<<endl;
    cout << "Patient 3:- " <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3 << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years"<<"\t" << "Weight: " << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl;
    cout << "                   "<<endl;
    cout << "Patient 4:- " <<endl;
    cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
    cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
    cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_4 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
    cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
    cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
}

if (option5 == 3){
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
}

if (option5 == 4){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================SPECIAL DISCOUNTS================================" <<endl;
    cout << "1.	5% discount during breast cancer awareness month" <<endl;
    cout << "2.	5% discount if patient older than 60 years of age" <<endl;
    cout << "3.	5% discount if patient younger than 5 years of age" <<endl;
}
if (option5 == 5){
    system("cls"); 
    cout << "==================================VIEW PATIENT HISTORY=============================" <<endl;
    cout << "                         " <<endl;
    cout << "Enter patient name here : ";
    cin >> history;
    if (history == patient_name1){
       cout << "                         " <<endl;
       cout << day <<"/"<<month <<"/"<<year <<endl;
       cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
       cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight: " << patient_w <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department <<endl;
       cout << "Name of the Doctor: " <<doctor_name <<endl;
       cout << "Time to see the doctor: "<<time <<"pm" <<endl;
       cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
    }
    if (history == patient_name2){
       cout << "                         " <<endl;
       cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
       cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
       cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight: " << patient_w_2 <<" kgs" <<endl;                
       cout << "Name of Department: "<< name_department_2 <<endl;
       cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
       cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
       cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
    }
    if (history == patient_name3){
        cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
        cout << "First name is: "<<patient_name3 << "\t " << " Last name is: "<<patient_name3_2 <<endl;
        cout << "Age: " <<patient_age_3 <<" years"<<"\t" << "Weight: " << patient_w_3 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_3 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
        cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
        cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl;
    }
    if (history == patient_name4){
        cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
        cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
        cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
        cout << "Name of Department: "<< name_department_4 <<endl;
        cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
        cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
        cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
}
}

if (option5 == 7){
    cout << "========================================EXIT=======================================" <<endl;
    exit = 1;
}

if (option5 == 6){
system("cls");    

    cout << "====================PATIENTS RECORD FROM OLDEST TO YOUNGEST======================" <<endl;

//oldest patient   
cout << "                      " <<endl;

if ( patient_age > patient_age_2 && patient_age > patient_age_3 && patient_age > patient_age_4){
    cout << "Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
else if (patient_age_2 > patient_age && patient_age_2 > patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
 else if (patient_age_3 > patient_age_2 && patient_age_3 > patient_age && patient_age_3 > patient_age_4){
    cout << "Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
else {
    cout << "Oldest patient:-" <<endl;
    cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
    cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
    cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_4 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
    cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
    cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
}

//Second youngest
cout << "                      " <<endl;
//for patient1
if ( patient_age > patient_age_2 && patient_age > patient_age_3 && patient_age < patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
else if ( patient_age > patient_age_2 && patient_age < patient_age_3 && patient_age > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
else if ( patient_age < patient_age_2 && patient_age > patient_age_3 && patient_age > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}

//for patient2
else if (patient_age_2 > patient_age && patient_age_2 > patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
else if (patient_age_2 > patient_age && patient_age_2 < patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
else if (patient_age_2 < patient_age && patient_age_2 > patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Second Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
//for third patient
else if (patient_age_3 > patient_age_2 && patient_age_3 > patient_age && patient_age_3 < patient_age_4){
    cout << "Second Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
else if (patient_age_3 > patient_age_2 && patient_age_3 < patient_age && patient_age_3 > patient_age_4){
    cout << "Second Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
else if (patient_age_3 < patient_age_2 && patient_age_3 > patient_age && patient_age_3 > patient_age_4){
    cout << "Second Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
else {
    cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
    cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
    cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_4 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
    cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
    cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
}

//Third oldest
cout << "                 " <<endl;
//for patient 1
if ( patient_age > patient_age_2 && patient_age < patient_age_3 && patient_age < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
else if ( patient_age < patient_age_2 && patient_age > patient_age_3 && patient_age < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
else if ( patient_age < patient_age_2 && patient_age < patient_age_3 && patient_age > patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
//for patient 2
else if (patient_age_2 > patient_age && patient_age_2 < patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
else if (patient_age_2 < patient_age && patient_age_2 > patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
else if (patient_age_2 < patient_age && patient_age_2 < patient_age_3 && patient_age_2 > patient_age_4){
    cout << "Third Oldest patient:- " <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
//for patient 3
 else if (patient_age_3 > patient_age_2 && patient_age_3 < patient_age && patient_age_3 < patient_age_4){
    cout << "Third Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
 else if (patient_age_3 < patient_age_2 && patient_age_3 > patient_age && patient_age_3 < patient_age_4){
    cout << "Third Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
 else if (patient_age_3 > patient_age_2 && patient_age_3 < patient_age && patient_age_3 < patient_age_4){
    cout << "Third Oldest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;
}
//patient number 4
else  {
    cout << "Third Oldest patient:-" <<endl;
    cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
    cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
    cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_4 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
    cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
    cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
}
//youngest patient
cout << "                                  " <<endl;
if (patient_age < patient_age_2 && patient_age < patient_age_3 && patient_age < patient_age_4){
    cout << "Youngest patient:-" <<endl;
    cout << day <<"/"<<month <<"/"<<year <<endl;
    cout << "First name is: "<<patient_name1 << "\t"<< " Last name is: "<<patient_name1_2 <<endl;
    cout << "Age: " <<patient_age <<" years" << "\t"<< "Weight:" << patient_w <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department <<endl;
    cout << "Name of the Doctor: " <<doctor_name <<endl;
    cout << "Time to see the doctor: "<<time <<"pm" <<endl;
    cout << "Charges are "<< charges <<" rupees only/-"<<endl ;
}
else if (patient_age_2 < patient_age && patient_age_2 < patient_age_3 && patient_age_2 < patient_age_4){
    cout << "Youngest patient:-" <<endl;
    cout << day2 <<"/"<<month2 <<"/"<<year2 <<endl;
    cout << "First name is: "<<patient_name2 << "\t " << " Last name is: "<<patient_name2_2 <<endl;
    cout << "Age: " <<patient_age_2 <<" years" <<"\t" << "Weight:" << patient_w_2 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_2 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_2 <<endl;
    cout << "Time to see the doctor: "<<time2 <<"pm" <<endl;
    cout << "Charges are "<< charges_2 <<" rupees only/-" <<endl ;
}
else if (patient_age_3 < patient_age_2 && patient_age_3 < patient_age && patient_age_3 < patient_age_4){
    cout << "Youngest patient:-" <<endl;
    cout << day3 <<"/"<<month3 <<"/"<<year3 <<endl;
    cout << "First name is: "<<patient_name3  << "\t " << " Last name is: "<<patient_name3_2 <<endl;
    cout << "Age: " <<patient_age_3 <<" years" <<"\t" << "Weight:" << patient_w_3 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_3 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_3 <<endl;
    cout << "Time to see the doctor: "<<time3 <<"pm" <<endl;
    cout << "Charges are "<< charges_3 <<" rupees only/-" <<endl ;

}
else {
    cout << "Youngest patient:-" <<endl;
    cout << day4 <<"/"<<month4 <<"/"<<year4 <<endl;
    cout << "First name is: "<<patient_name4 << "\t " << " Last name is: "<<patient_name4_2 <<endl;
    cout << "Age: " <<patient_age_4 <<" years"<<"\t" << "Weight: " << patient_w_4 <<" kgs" <<endl;                
    cout << "Name of Department: "<< name_department_4 <<endl;
    cout << "Name of the Doctor: " <<doctor_name_4 <<endl;
    cout << "Time to see the doctor: "<<time4 <<"pm" <<endl;
    cout << "Charges are "<< charges_4 <<" rupees only/-" <<endl;
}

}

}
}


int pcount ;
string patient_username = "zoyanaveedhdh";
string pass_of_patient_account = "zn201";

// PATIENT'S ACCOUNT
cout << "                         " <<endl;
if (user == "patient"){
    cout << "==============================PATIENTS LOGIN======================================" <<endl;
    cout << "                         " <<endl;
    cout << "Enter the username here: " ;
    cin >> patient_username;
    cout << "Enter password here : ";
    cin >> pass_of_patient_account;

if (patient_username == "zoyanaveedhdh" && pass_of_patient_account == "zn201"){
        cout << "You are logged in!!!" <<endl;
}
else{
    cout << "Incorrect username or password " <<endl;
    end = 1;
}

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

int p_option;
cout << "Your option....." ;
cin >> p_option;

int p_opt_depart=0 ,p_opt1=0 , p_opt2=0 , p_opt3=0 ,p_opt4=0;
string p_name_1 ,p_name_2, p_month ,p_department_name ,patient_doctor_name;
int p_time=0 , p_visit_number=0 ,p_charges=0 , p_day=0 , p_year=0;
string reenter_pass_of_patient_account;
int rating;


if (p_option == 1){
system("cls"); 
cout << "====================================BOOK AN APPOINTMENT=================================" <<endl;
cout << endl;
cout << "====================================DEPARTMENTS=================================" <<endl;
cout << "Select department: " <<endl;
cout << "1.	Gynecology Department" <<endl;
cout << "2.	Nutrition and Dietetics" <<endl;
cout << "3.	Oncology Department" <<endl;
cout << "4.	Psychological Counselling Department" <<endl;

cout << "Your option..... " ;
cin >> p_opt_depart;

if (p_opt_depart == 1){
    p_department_name = "GYNECOLOGY DEPARTMENT" ;
    cout << "---------------------------------------WELCOME TO GYNECOLOGY DEPARTMENT--------------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Nadia Khan" <<endl;
    cout << "2. Doctor Fatima sohail" <<endl;
    cout << "                " <<endl;
    cout << "Your option..... " ;
    cin >> p_opt1;

    if (p_opt1 == 1){
        patient_doctor_name == "Professor Nadia Khan";
        if (p_visit_number == 1){
            p_charges = 3000;
        }
        else {
            p_charges = 2500;
        }
    }
        if (p_opt1 == 2){
        patient_doctor_name == "Professor Fatima sohail";
        if (p_visit_number == 1){
            p_charges = 2000;
        }
        else {
            p_charges = 1500;
        }
    }
}
if (p_opt_depart == 2){
    p_department_name = "NUTRITION AND DIETETICS DEPARTMENT" ;
    cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------- " <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1. Professor Amna Zafar" <<endl;
    cout << "2. Doctor Ilyas Ahmed" <<endl;
    cout << "                " <<endl;
    cout << "Your option..... " ;
    cin >> p_opt2;

    if (p_opt2 == 1){
        patient_doctor_name == "Professor Amna Zafar";
        if (p_visit_number == 1){
            p_charges = 3000;
        }
        else {
            p_charges = 2500;
        }
    }
        if (p_opt2 == 2){
        patient_doctor_name == "Professor Ilyas Ahmed";
        if (p_visit_number == 1){
            p_charges = 2000;
        }
        else {
            p_charges = 1500;
        }
    }
}
if (p_opt_depart == 3){
    p_department_name = " ONCOLOGY DEPARTMENT" ;
    cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT---------------------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1. Professor Mustafa for diagnosis" <<endl;
    cout << "2. Professor Fida for ultrasound" <<endl;
    cout << "                " <<endl;
    cout << "Your option..... " ;
    cin >> p_opt3;

    if (p_opt3 == 1){
        patient_doctor_name == "Professor Mustafa";
        if (p_visit_number == 1){
            p_charges = 4000;
        }
    }
        if (p_opt3 == 2){
        patient_doctor_name == "Professor Fida";
        if (p_visit_number == 1){
            p_charges = 5000;
        }
    }
}
if (p_opt_depart == 4){
    p_department_name = "PSYCOLOGICAL COUNSELLING DEPARTMENT" ;
    cout << "---------------------------------WELCOME TO PSYCOLOGICAL COUNSELLING DEPARTMENT-------------------------- " <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1. Professor Aiysha Tahir" <<endl;
    cout << "2. Professor Zainab Jawed " <<endl;
    cout << "                " <<endl;
    cout << "Your option..... " ;
    cin >> p_opt4;

    if (p_opt4 == 1){
        patient_doctor_name == "Professor Aiysha Tahir";
        if (p_visit_number == 1){
            p_charges = 6000;
        }
        else {
            p_charges = 5500;
        }
    }
        if (p_opt4 == 2){
        patient_doctor_name == "Professor Zainab Jawed ";
        if (p_visit_number == 1){
            p_charges = 5000;
        }
        else {
            p_charges = 4500;
        }
    }
}

cout << "==================================ENTER INFORMATION================================" <<endl;
cout << "Enter first name here: " ;
cin >> p_name_1;
cout << "Enter last name here : ";
cin >> p_name_2;
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

system ("cls");

cout << "                            " <<endl;
cout << "                                        WOMENS HEALTH CLINIC                                           " <<endl;
cout << "Name : "<<p_name_1 <<" "<<p_name_2 << "\t" << "Date :" <<p_day <<"/" << p_month << "/"<< p_year <<endl;
cout << "Timing : "<<p_time <<endl;
cout << "Department name : " <<p_department_name <<endl;
cout << "Please pay "<<p_charges <<" rupees only/-" <<endl;

}

if (p_option == 2){
    system("cls"); 
    cout << "==============================PREVIOUS APPOINTMENTS==============================" <<endl;
    cout <<"No previous Appointments yet" <<endl;
}

if (p_option == 3){
    system("cls"); 
    cout << "Enter new password : " <<endl;
    cin >> pass_of_patient_account;
    cout << "Re-enter new password: " <<endl;
    cin >> reenter_pass_of_patient_account;
    cout << "                        " <<endl;
    cout << "=================================CHANGE PASSWORD================================" <<endl;
    if (pass_of_patient_account == reenter_pass_of_patient_account){
        cout << "Password changed successfully!!" <<endl;
    }
    else {
        cout << "Try again"<<endl;
    }
}

if (p_option == 4){
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
}

if (p_option == 5){
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
}

if (p_option == 6){
    system("cls"); 
    cout << "              " <<endl;
    cout << "================================PATIENTS RATINGS==================================" <<endl;
    cout << "Add Doctors name here: " <<endl;
    cin >> patient_doctor_name;
    cout << "Add rating " <<endl;
    cout << "1.	Great /Excellent " <<endl;
    cout << "2.	Good " <<endl;
    cout << "3.	Okay " <<endl;
    cout << "4.	Bad" <<endl;
    cout << "                       " <<endl;
    cout << "Your option..... " ;
    cin >> rating;
    cout << "                       " <<endl;
    cout << "Thanks for leaving your feedback!" ; 
}
if (p_option == 7){
    system("cls"); 
    cout << "              " <<endl;
    cout << "============================RECOMMENDED DOCTORS================================" <<endl;
    cout << "1.	Professor Aiysha Tahir from Department of Psychological Counselling" <<endl;
    cout << "2.	Professor Mustafa from Department of Oncology" <<endl;
    cout << "3.	Doctor Ilyas Ahmed  from Department of Nutrition and Dietetics" <<endl;
    cout << "4.	Professor Nadia Khan from Department of Gynecology" <<endl;
}
if (p_option == 8 ){
    cout << "=========================================EXIT=====================================" <<endl;
    end = 1;
}

}


}