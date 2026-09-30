#include<iostream>
#include <stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;



//PROTOTYPES
void mainHeader();//mainHeader
void header ();//header
string login();//login function
void enterInfo();//enter info function
void addPatientInfoIntoArray(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y,string department,string doc_n,int fees,int p_t);//adding patient info into array
int menu ();//admin menu
int departments ();// departments menu function // for admin + patient
void info_into_file(string p_n1, string p_n2,int p_a, int p_w, int p_d, string p_m, int p_y,string department,string doc_n,int fees,int p_t);
void load_data();
string parse(string data,int field);
void chosen_doctor();
void reciept();
void change_pass (string pass_of_admin_account , string reenter_pass_of_admin_account);//function for option 3 //change password
void discounts ();//function for option 4
void patientHistory();
void sortPatient();
void exit ();//exit option
void clearScreen ();//clear screen function
void patient_login ();//patient's login
int p_menu ();//patient's menu
void patient_reciept();//patient's reciept function //option 2
void patient_info();//info storing function
void addPatientInfoIntoArray2(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, int p_tm);
void patient_pass_change();//option 3
void doctors ();//doctor's most to least
void timings ();//doctor's timings
void feedback ();//function of option 6//patient
void recommendations();//option 7


//ARRAYS
const int x = 100;//constant
string patient_name1[x], patient_name2[x], month[x], department_name[x], doctor_name[x];
int age[x], weight[x], day[x], year[x], time[x], charges[x];
string p_name[x], p_name2[x], p_month[x], p_department_name[x], p_doctor_name[x], doc_names[x];
int p_age[x], p_weight[x], p_day[x], p_year[x], p_time[x], p_charges[x],rt_doc[x];

//VARIABLES
int i, j, count = 0, p_count = 0;
string user, pass_of_admin_account , reenter_pass_of_admin_account,patient_username, pass_of_patient_account , reenter_pass_of_patient_account;
int option, p_option, opt1, opt2, opt3, opt4, choose_doc;
int a;//department selection variable
char availability, discount;
int mainchoice, num_of_visit;
string history1, history2;
string p_n1, p_n2, p_m;
int p_a, p_w, p_d, p_y,p_tm,fees,p_t;
string department,doc_n;
void pass_file();
string passA;


main(){
header();
mainHeader();

while(true){
    if (mainchoice == 1){
        header();
        user = login();
    if (user == "admin"){
        cout << " =====================================LOGIN PAGE====================================" <<endl;
        cout <<endl;
        cout << "Enter the password here " << endl;
        cin >> pass_of_admin_account;
        pass_file();
        system ("cls");
    if (pass_of_admin_account == passA){
    cout << endl;
    cout << "YOU HAVE BEEN LOGGED IN!" <<endl;
    cout << endl;
    while (option != 8){
    cout << endl;
    cout << "=====================================ADMIN=========================================" <<endl;
    cout <<endl;
    option = menu();
    if (option == 1){
        enterInfo();
        chosen_doctor();
//RECIEPT:-
clearScreen();
header();
cout << day[count] <<"/"<<month[count] <<"/"<<year[count] <<endl;
cout << "First name is: "<<patient_name1[count] << "\t" << "Last name is: "<<patient_name2[count] <<endl;
cout << "Age: " <<age[count] <<" years" <<"\t "<< "Weight:" << weight[count] <<" kgs" <<endl;                
cout << "Name of Department: "<< department_name[count] <<endl;
cout << "Name of the Doctor: " <<doctor_name[count] <<endl;
cout << "Time to see the doctor: "<<time[count] <<"pm" <<endl;
cout << "Charges are "<< charges[count] <<" rupees only/-" <<endl;

count = count + 1;
clearScreen();
    }//option 1

    if (option == 2){
    system("cls");
    header();
    load_data();
    for ( int i = 0; i < x; i++){
            if (charges[i] > 0){
        reciept();
            }
}
        clearScreen();
    }//option 2
    if (option == 3){
        change_pass(pass_of_admin_account, reenter_pass_of_admin_account);
    }//option 3
    if (option == 4){
        discounts();
    }//option 4
    if (option == 5){
        patientHistory();
    }//option 5
    if (option == 6){
        sortPatient();
        for (i = 0; i < x ; i++){
            if (charges[i] > 0){
            system("cls");
            reciept();
        } 
        }      
        clearScreen();
    }//option 6
    if (option == 7){
        exit();
        option = 7;
        clearScreen();
    }
    }//option is not 7 while
    }//password is correct
    else{
        cout << "TRY AGAIN";
    }//password is incorrect
    }//user is admin
if (user == "patient"){
    patient_login();
    if (patient_username == "zoyanaveed101" && pass_of_patient_account == "zoyahdh"){
        system("cls");
        cout << "YOU HAVE LOGGED IN!!!" << endl;
        cout << endl;
        while (p_option != 8){
        header();
        p_option = p_menu();
        if (p_option == 1){
            system("cls");
            a = departments();
        if (a == 1){
         p_d1();
        }
        if ( a == 2){
         p_d2();
        }
        if (a == 3){
         p_d3();
        }
        if (a == 4){
         p_d4();
        }
        system("cls");
        patient_info();
        system("cls");
cout << p_day[p_count] <<"/"<< p_month[p_count] <<"/"<< p_year[p_count] <<endl;
cout << "First name is: "<<p_name[p_count] << "\t"<< " Last name is: "<<p_name2[p_count] <<endl;
cout << "Age: " <<p_age[p_count] <<" years" << "\t"<< "Weight: " << p_weight[p_count] <<" kgs" <<endl;                
cout << "Name of Department: "<< p_department_name[p_count] <<endl;
cout << "Name of the Doctor: " <<p_doctor_name[p_count] <<endl;
cout << "Time to see the doctor: "<<p_time[p_count] <<"pm" <<endl;
cout << "Charges are "<< p_charges[p_count] <<" rupees only/-"<<endl ;
p_count = p_count + 1;
        clearScreen();
        }//option is 1
    if (p_option == 2){
        cout << "=====================================PREVIOUS APPOINTMENTS========================================" <<endl;
        for (i = 0; i < x; i++){
            patient_reciept();
        }
        clearScreen();
    }//option is 2
    if (p_option == 3){
        patient_pass_change();
    }//option is 3
    if (p_option == 4){
        doctors();
    }//option is 4
    if (p_option == 5){
        timings();
    }
    if (p_option == 6){
        feedback();
    }
    if (p_option == 7){
        recommendations();
        clearScreen();
    }//option is 7
    if (p_option == 8){
        exit();
        p_option = 8;
    }//option is 8
        }//while option not 8

    }//if password correct
    else{
        cout << "PASSWORD INCORRECT!"<< endl <<"TRY AGAIN";
        break;
    }
}//user is patient
    }//mainchoice is login
    else{
        break;
    }//mainchoice is exit
}//while mainchoice
}//main


//FUNCTIONS
void mainHeader(){
cout << "  ======================WELCOME TO WOMENS HEALTH CLINIC======================="<<endl;
cout <<endl;
cout << "Choose one of the following" <<endl;
cout << "1. Login" <<endl;
cout << "2. Exit" <<endl;
cout <<endl;
cout << "Your option.....";
cin >> mainchoice;
}

void header (){
    cout << "  ======================WELCOME TO WOMENS HEALTH CLINIC======================="<<endl;
    cout <<endl;
}//header
string login(){
    cout << "Are you admin or patient? " ;
    cin >> user;
    return user;
}//login

int menu ()
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
cout << "7. Change Doctor Timings" <<endl;
cout << "8.	Exit." <<endl;
cout << endl;

cout << "Your option..... " ;
cin >> option;
return option;
}//main menu function

int departments ()
{
cout << endl;
cout << "====================================DEPARTMENTS================================="<<endl;
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

void enterInfo(){
    system("cls");
    cout << "====================================ADD PATIENT===================================";
    cout << endl;
    cout << "Now ..." <<endl;
    cout << "Enter patient number 1 info : " <<endl;
    cout << "1. Enter the patient first name: " ;
    cin >> p_n1;
    cout << "2. Enter the patient last name: ";
    cin >> p_n2;
    cout << "3. Enter patient age here: " ;
    cin >> p_a;
    cout << "4. Enter weight here: " ;
    cin >> p_w;
    cout << "5. Enter date here: " ;
    cin >> p_d;
    cout << "6. Enter month here: ";
    cin >> p_m;
    cout << "7. Enter the year here: ";
    cin >> p_y;
    a= departments();
if(a == 1){
    department = "GYNECOLOGY DEPARTMENT";
    cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
    cout << "Select doctor: " <<endl;
    cout << "1.	Professor Nadia Khan" <<endl;
    cout << "2.	Doctor Fatima sohail" <<endl;

    cout <<endl;
    cout << "Your option...... ";
    cin >> opt1;
if (opt1 == 1){
    doc_n = "Professor Nadia Khan";
    cout << "Enter the visit number here: ";
    cin >> num_of_visit;
if (num_of_visit == 1){
    cout << "Charges = 3000/-";
    fees = 3000;
}
else {
    cout << "Charges = 2500/-";
    fees = 2500;
}
}
if (opt1 == 2){
doc_n = "Doctor Fatima sohail";
cout << "Enter the visit number here: ";
cin >> num_of_visit;
if (num_of_visit == 1){
    cout << "Charges = 2000/-";
    fees = 2000;
}
else {
    cout << "Charges = 1500/-";
    fees = 1500;
}
}
}//1st
if ( a == 2){
cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt2;
    department = "NUTRITION AND DIETETICS";
    if (opt2 == 1){
        doc_n = "Professor Amna Zafar";
        cout << "Enter the visit number here: ";
        cin >> num_of_visit;
        if (num_of_visit == 1){
        cout << "Charge 3000/-";
        fees = 3000;
}
else {
    cout << "Charge 2500/-";
    fees = 2500;
}
        
    }
if (opt2 == 2){
    doc_n = "Doctor Ilyas Ahmed";
cout << "Enter the visit number here: ";
cin >> num_of_visit;
if (num_of_visit == 1){
    cout << "Charge 2000/-";
    fees = 2000;
}
else {
    cout << "Charge 1500/-";
    fees =  1500;
}
    }
}//2nd
if (a == 3){
cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Mustafa for diagnosis" <<endl;
cout << "2.	Professor Fida for ultrasound" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt3;
    department = "ONCOLOGY DEPARTMENT";
    if (opt3 == 1){
        doc_n = "Professor Mustafa for diagnosis";
        cout <<"Special discount for breast cancer awareness month (y/n): ";
    cin >> discount;
if (discount == 'y'){
    cout << "Charge 3800/-";
    fees = 3800;
    }
else {
    cout << "Charge 4000/-";
    fees = 4000;
    }
    }
    if (opt3 == 2){
        doc_n = "Professor Fida for ultrasound";
    cout <<"Special discount for breast cancer awareness month (y/n): ";
    cin >> discount;
if (discount == 'y'){
    cout << "Charge 4800/-";
    fees = 4800;
    }
else {
    cout << "Charge 5000/-";
    fees = 5000;
    }
    }
}//3rd
if (a == 4){
cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Aiysha Tahir" <<endl;
cout << "2.	Professor Zainab Jawed " <<endl;
    
cout << "                  " <<endl;
cout << "Your option..... ";
cin >>opt4;
    department = "PSYCOLOGICAL COUNSELLING DEPARTMENT";
    if (opt4 == 1){
        doc_n = "Professor Aiysha Tahir";
        cout << "Enter the visit number here: ";
cin >> num_of_visit;
if (num_of_visit == 1){
    cout << "Charge 6000/-";
    fees = 6000;
}
else {
    cout << "Charge 5500/-";
    fees = 5500;
}
    }
    if (opt4 == 2){
        doc_n = "Professor Zainab Jawed";
            cout << "Enter the visit number here: ";
cin >> num_of_visit;
if (num_of_visit == 1){
    cout << "Charge 5000/-";
    fees = 5000;
}
else {
    cout << "Charge 4500/-";
    fees = 4500;
}
    }
}//4th
cout <<endl;
cout << "Enter the time of receipt here: " ; 
cin >> p_t;
    info_into_file(p_n1, p_n2, p_a, p_w, p_d,p_m, p_y,department,doc_n,fees,p_t);
    addPatientInfoIntoArray(p_n1, p_n2, p_a, p_w, p_d,p_m, p_y,department,doc_n,fees,p_t);
}
void info_into_file(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y,string department,string doc_n,int fees,int p_t){
    fstream file;
    file.open("projectadmin.txt" , ios::app);
    file << p_n1 + "," + p_n2 + "," + to_string(p_a) + "," + to_string(p_w) + "," + to_string(p_d) + "," + p_m + "," + to_string(p_y) + "," + department + "," + doc_n + "," + to_string(fees) + "," + to_string(p_t) + ","+ '\n';
    file.close();
}
void load_data(){
string data;
int z = 0;
fstream newfile;
newfile.open("projectadmin.txt",ios::in);
while (!(newfile.eof())){
    getline(newfile,data);
    patient_name1[z] = parse(data,1);
    patient_name2[z] = parse(data,2);
    age[z] = stoi(parse(data,3));
    weight[z] = stoi(parse(data,4));
    day[z] = stoi(parse(data,5));
    month[z] = parse(data,6);
    year[z] = stoi(parse(data,7));
    department_name[z] = parse(data,8);
    doctor_name[z] = parse(data,9);
    charges[z] = stoi(parse(data,10));
    time[z] = stoi(parse(data,11));
    z = z + 1;
}
newfile.close();
}

string parse(string data,int field){
int commacount = 1;
string item;
for (int y = 0; y < 100; y++){
    if (data[y] == ','){
        commacount = commacount + 1;
    }
    else if (commacount == field){
        item = item + data[y];
    }
}
return item;
}
void addPatientInfoIntoArray(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y,string department, string doc_n,int fees, int p_t){
    patient_name1[count] = p_n1;
    patient_name2[count] = p_n2;
    age[count] = p_a;
    weight[count] = p_w;
    day[count] = p_d;
    month[count] = p_m;
    year[count] = p_y;
    department_name[count] = department;
    doctor_name[count] = doc_n;
    charges[count] = fees;
    time[count] = p_t;
}//option 1 : Enter student info

void chosen_doctor(){
cout << endl;
cout << "=============================DOCTORS AVAILABILITY=================================" <<endl;
cout << "Is the chosen doctor available (y/n): "<<endl;
cin >> availability;

if (availability == 'n'){
    cout << "Please select another doctor " <<endl;
}
if (availability == 'y'){
cout << "======================================RECIEPT======================================" <<endl;
}
}//chosen doctor function

void reciept(){
    cout << day[i] <<"/"<< month[i] <<"/"<<year[i] <<endl;
    cout << "First name is: "<<patient_name1[i] << "\t"<< " Last name is: "<<patient_name2[i] <<endl;
    cout << "Age: " <<age[i] <<" years" << "\t"<< "Weight: " << weight[i] <<" kgs" <<endl;                
    cout << "Name of Department: "<< department_name[i] <<endl;
    cout << "Name of the Doctor: " <<doctor_name[i] <<endl;
    cout << "Time to see the doctor: "<<time[i] <<"pm" <<endl;
    cout << "Charges are "<< charges[i] <<" rupees only/-"<<endl ;
    cout <<endl;
}//display patient record : option 2

void change_pass (string pass_of_admin_account , string reenter_pass_of_admin_account){
    system("cls"); 
    cout << "                         " <<endl;
    cout << "==================================CHANGE PASSWORD ===============================" <<endl;
    cout << "Enter new password here: ";
    cin >> pass_of_admin_account;
    cout << "Re-enter new password here: ";
    cin >> reenter_pass_of_admin_account;
    if (pass_of_admin_account == reenter_pass_of_admin_account){
        pass_of_admin_account = reenter_pass_of_admin_account;
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

void patientHistory(){
    cout << "==================================VIEW PATIENT HISTORY=============================" <<endl;
    cout << endl;
    cout << "Enter patient first name here : ";
    cin >> history1;
    cout << "Enter patient second name here : ";
    cin >> history2;
    load_data();
    for ( i = 0; i < x; i++){
    if (history1 == patient_name1[i] && history2 == patient_name2[i]){
    cout <<endl;
    reciept ();
    }
    }
}//function of option 5

void sortPatient(){
    int a_temp, w_temp, d_temp, y_temp, time_temp, char_temp;
    string p_1_temp, p_2_temp, dep_temp, doc_temp, m_temp;
load_data();
    for (i = 0; i < x; i++){
        for (j = i + 1; j <= x-1; j++){
            if (age[j] > age[i]){
                a_temp = age[j];
                age[j] = age[i];
                age[i] = a_temp;

                p_1_temp = patient_name1[j];
                patient_name1[j] = patient_name1[i];
                patient_name1[i] = p_1_temp;

                p_2_temp = patient_name2[j];
                patient_name2[j] = patient_name2[i];
                patient_name2[i] = p_2_temp;

                w_temp = weight[j];
                weight[j] = weight[i];
                weight[i] = w_temp;

                dep_temp = department_name[j];
                department_name[j] = department_name[i];
                department_name[i] = dep_temp;

                doc_temp = doctor_name[j];
                doctor_name[j] = doctor_name[i];
                doctor_name[i] = doc_temp;

                d_temp = day[j];
                day[j] = day[i];
                day[i] = d_temp;

                m_temp = month[j];
                month[j] = month[i];
                month[i] = m_temp;

                y_temp = year[j];
                year[j] = year[i];
                year[i] = y_temp;

                time_temp = time[j];
                time[j] = time[i];
                time[i] = time_temp;

                char_temp = charges[j];
                charges[j] = charges[i];
                charges[i] = char_temp;
            }
        }
    }
}//function of option 6

void exit (){
    cout << "========================================EXIT=======================================" <<endl;
}//function for exit

void clearScreen (){
    cout <<endl;
    char x;
    cout << "Press any key: "<<endl;
    getch();
    system ("cls");
}//function of clear screen

//PATIENT FUNCTIONS
void patient_login (){
cout << "                         " <<endl;
    cout << "==============================PATIENTS LOGIN======================================" <<endl;
    cout << "                         " <<endl;
    cout << "Enter the username here: " ;
    cin >> patient_username;
    cout << "Enter password here : ";
    cin >> pass_of_patient_account;
}//patient login function

int p_menu (){
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

void patient_info(){
cout << endl;
cout << "==================================ENTER INFORMATION================================" <<endl;
cout << "Enter first name here: " ;
cin >> p_n1;
cout << "Enter last name here : ";
cin >> p_n2;
cout << "Enter weight here: ";
cin >> p_w;
cout << "Enter age here: ";
cin >> p_a;
cout << "Enter day here: " ;
cin >> p_d;
cout << "Enter month here : ";
cin >> p_m;
cout << "Enter year here : ";
cin >> p_y;
cout << "Enter the number of visit here: ";
cin >> num_of_visit;
cout << "Enter the time here: ";
cin >> p_tm;

addPatientInfoIntoArray2(p_n1, p_n2, p_a, p_w, p_d,p_m, p_y, p_tm);
}
void addPatientInfoIntoArray2(string p_n1, string p_n2,int p_a, int p_w, int p_d, string p_m, int p_y, int p_tm){
    p_name[p_count] = p_n1;
    p_name2[p_count] = p_n2;
    p_age[p_count] = p_a;
    p_weight[p_count] = p_w;
    p_day[p_count] = p_d;
    p_month[p_count] = p_m;
    p_year[p_count] = p_y;
    p_time[p_count] = p_tm;
}
void patient_reciept(){
    if (p_charges[i] > 0){
    cout << p_day[i] <<"/"<< p_month[i] <<"/"<< p_year[i] <<endl;
    cout << "First name is: "<<p_name[i] << "\t"<< " Last name is: "<<p_name2[i] <<endl;
    cout << "Age: " <<p_age[i] <<" years" << "\t"<< "Weight: " << p_weight[i] <<" kgs" <<endl;                
    cout << "Name of Department: "<< p_department_name[i] <<endl;
    cout << "Name of the Doctor: " <<p_doctor_name[i] <<endl;
    cout << "Time to see the doctor: "<<p_time[i] <<"pm" <<endl;
    cout << "Charges are "<< p_charges[i] <<" rupees only/-"<<endl ;
    cout <<endl;
}
}//info display

void p_d1(){
p_department_name[p_count] = "GYNECOLOGY DEPARTMENT";

cout << "----------------------------------WELCOME TO GYNECOLOGY DEPARTMENT-------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Nadia Khan" <<endl;
cout << "2.	Doctor Fatima sohail" <<endl;

cout <<endl;
cout << "Your option...... ";
cin >> opt1;

if (opt1 == 1){
    p_doctor_name[p_count] = "	Professor Nadia Khan";

    if (num_of_visit == 1){
        p_charges[p_count] = 3000 ;
    }
    else {
         p_charges[p_count]= 2500 ;
    }
}//doctor1

if (opt1 == 2){
    p_doctor_name[p_count] = "	Doctor Fatima sohail";

    if (num_of_visit == 1){
        p_charges[p_count] = 2000 ;
    }
    else {
        p_charges[p_count] = 1500 ;
    }
}//doctor2
}//chosen department = gynecology

void p_d2(){
p_department_name[p_count] = "NUTRITION AND DIETETICS";
cout << "---------------------------------WELCOME TO NUTRITION AND DIETETICS DEPARTMENT-------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Amna Zafar" <<endl;
cout << "2.	Doctor Ilyas Ahmed " <<endl;
cout <<endl;
cout << "Your option..... ";
cin >> opt2;

    if (opt2 == 1){
       p_doctor_name[p_count] = "Professor Amna Zafar";

    if (num_of_visit == 1){
        p_charges[p_count] = 3000;
    }
    else {
        p_charges[p_count] = 2500;
    }
}

if (opt2 == 2){
    p_doctor_name[p_count] = "Doctor Ilyas Ahmed ";

    if (num_of_visit == 1){
       p_charges[p_count] = 2000;
    }
    else {
       p_charges[p_count] =  1500;
    }
}
}//chosen department nutrition

void p_d3(){
p_department_name[p_count] = "ONCOLOGY DEPARTMENT";

cout << "----------------------------------WELCOME TO ONCOLOGY DEPARTMENT----------------------------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Mustafa for diagnosis" <<endl;
cout << "2.	Professor Fida for ultrasound" <<endl;

cout << "                  " <<endl;
cout << "Your option..... ";
cin >> opt3;

    if (opt3 == 1){
       p_doctor_name[p_count] = "Professor Mustafa";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        p_charges[p_count] = 3800;
       }
    else {
        p_charges[p_count] = 4000;
       }
    } 
    if (opt3 == 2){
       p_doctor_name[p_count] = "Professor Fida";

       cout <<"Special discount for breast cancer awareness month (y/n): ";
       cin >> discount;
    if (discount == 'y'){
        p_charges[p_count] = 4800;
       }
    else {
        p_charges[p_count] = 5000;
       }
    } 
}//chosen department oncology

void p_d4 (){
p_department_name[count] = "PSYCOLOGICAL COUNSELLING";

cout << "----------------------WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING--------------------------" <<endl;
cout << "Select doctor: " <<endl;
cout << "1.	Professor Aiysha Tahir" <<endl;
cout << "2.	Professor Zainab Jawed " <<endl;
    
cout << "                  " <<endl;
cout << "Your option..... ";
cin >>opt4;

    if (opt4 == 1){
    p_doctor_name[p_count] = "Professor Aiysha Tahir";

    if (num_of_visit == 1){
        p_charges[p_count] = 6000;
    }
    else {
        p_charges[p_count] = 5500;
    }
}
if (opt4 == 2){
    p_doctor_name[p_count] = "Professor Zainab Jawed";

    if (num_of_visit == 1){
        p_charges[p_count] = 5000;
    }
    else {
        p_charges[p_count] = 4500;
    }
}
}//psycological counselling function 

void patient_pass_change(){
    system("cls"); 
    cout << "=================================CHANGE PASSWORD================================" <<endl;
    cout << "Enter new password : " <<endl;
    cin >> pass_of_patient_account;
    cout << "Re-enter new password: " <<endl;
    cin >> reenter_pass_of_patient_account;
    cout << endl;
    if (pass_of_patient_account == reenter_pass_of_patient_account){
        pass_of_patient_account = reenter_pass_of_patient_account;
        cout << "Password changed successfully!!" <<endl;
    }
    else {
        cout << "Try again"<<endl;
    }
    clearScreen();
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
    clearScreen();
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
    clearScreen();
}//function of option 5

void feedback (){
system("cls");
cout << endl;
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
cout << endl;
cout << "Your option..... ";
cin >> choose_doc;

cout << "Add rating " <<endl;
cout << "1.	Great /Excellent " <<endl;
cout << "2.	Good " <<endl;
cout << "3.	Okay " <<endl;
cout << "4.	Bad" <<endl;
cout <<endl;
cout << "Your option..... " ;

for ( i = choose_doc ; i < 9; i++){
    cin >> rt_doc[i]; 
    break;
}
clearScreen();
}//function of option 6

void recommendations(){
doc_names[1] = 	"Professor Aiysha Tahir from Department of Psychological Counselling";
doc_names[2] =  "Professor Zainab Jawed from Department of Psychological Counselling";
doc_names[3] =  "Professor Fida from Department of Oncology";
doc_names[4] =  "Professor Mustafa from Department of Oncology";
doc_names[5] =  "Professor Amna Zafar from Department of Nutrition and Dietetics";
doc_names[6] =  "Doctor Ilyas Ahmed  from Department of Nutrition and Dietetics";
doc_names[7] =  "Professor Nadia Khan from Department of Gynecology";
doc_names[8] =  "Doctor Fatima Sohail from Department of Gynecology";
cout << "===============================RECOMMEMDED DOCTORS=================================" <<endl;
for ( i = 1; i < 9; i++){
    if (rt_doc[i] == 1 || rt_doc[i] == 2){
        cout << doc_names[i] <<endl;
    }
}
}//function of option 7
void pass_file(){
    fstream pfile;
    pfile.open("passadmin.txt", ios::in);
    pfile >> passA;
    pfile.close();
}