#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

//------------------------------PROTYPES------------------------------------//
void mainHeader();            // mainHeader//admin + patient
void header();                // header//admin+patient
string login();               // login function//admin + patient
void exit();                  // eXit option//admin + patient
void clearScreen();           // clear screen function//admin + patient
int departments();            // departments menu function // for admin + patient
void doc_info_from_file();    // loading doctors info and charges in arrays function//for option 4 , 6
void timings_from_file();     // loading doctor timings from file
void doc_charges_from_file(); // loading doctor charges from file
//-------------------ADMIN'S---------------//
int menu();
void pass_file();                                                                                                                                           // admin menu
void enterInfo();                                                                                                                                           // option 1//add a patient//enter information function
void addPatientInfoIntoArray(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t); // add a patient//add info into array function
void info_into_file(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t);          // saving info in a file function
void load_data();                                                                                                                                           // loading patient info function
string parse(string data, int field);                                                                                                                       // comma separation function
void chosen_doctor();
void reciept();            // option 2 //patient reciept function
void change_pass();        // option 3 //change password function
void discounts();          // option 4//discounts function
void patientHistory();     // option 5//see patient history function
void sortPatient();        // option 6//sorting patient by age function
void change_timings();     // option 7//changing timings of doctors
void change_doc_charges(); // option 8//changing doctor charges

//---------------PATIENT'S-----------------//
int p_menu();
void pass_file_of_patient();                                                                                                                                 // patient's menu
void patient_info();                                                                                                                                         // option 1//store information entered function
void addPatientInfoIntoArray2(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t); // adding info entered into array function
void p_info_into_file(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t);         // saving info into function
void p_load_data();                                                                                                                                          // load data in arrays function
void patient_reciept();                                                                                                                                      // option 2//patient reciept function
void patient_pass_change();                                                                                                                                  // option 3//password change function
void doctor_charges();                                                                                                                                       // option 4// viewing doctors and their charges
void sorted_doctors();                                                                                                                                       // option 5//doctor's most eXpensive to least eXpensive
void timings();                                                                                                                                              // option 6//doctor's timings
void feedback();                                                                                                                                             // option 7//patient feedback function
void recommendations();                                                                                                                                      // option 8//see recommendations function

//----------------------------------DATA STRUCTURES--------------------------//
const int X = 100; // constant
//--------------ADMIN'S------------//
string patient_name1[X], patient_name2[X], month[X], department_name[X], doctor_name[X], doc_timings[X], doc_charges[X];
int age[X], weight[X], day[X], year[X], time[X], charges[X];
//------------PATIENT'S-----------//
string p_name[X], p_name2[X], p_month[X], p_department_name[X], p_doctor_name[X], doc_names[X], ch[X];
int p_age[X], p_weight[X], p_day[X], p_year[X], p_time[X], p_charges[X], rt_doc[X];

//--------------------------------------VARIABLES---------------------------//
int i = 0, j = 0, y = 0, c = 0, v = 0, b = 0, k = 0;
int mainchoice;
int a; // department selection variable
int opt1, opt2, opt3, opt4;
char availability, discount;
int num_of_visit;
string p_n1, p_n2, p_m;
int p_a, p_w, p_d, p_y, p_tm, fees, p_t;
string department, doc_n;
//-------------ADMIN'S------------//
string user, pass_of_admin_account, reenter_pass_of_admin_account, dis_name, dis_name2;
int option, count = 0, dis_charges, dis_cal;
string history1, history2, passA;
//-----------PATIENT'S-----------//
string patient_username, pass_of_patient_account, reenter_pass_of_patient_account;
int p_option, p_count = 0, choose_doc, d;
string check1, check2, passP, recs;

main()
{
    mainHeader();
    while (true)
    {
        if (mainchoice == 1)
        {
            cout << " =============================== LOGIN PAGE ================================== " << endl;
            user = login();
            if (user == "admin")
            {

                cout << " =============================== ADMIN LOGIN ================================= " << endl;
                cout << endl;
                cout << "Enter the password here " << endl;
                cin >> pass_of_admin_account;
                pass_file();
                system("cls");
                if (pass_of_admin_account == passA)
                {
                    cout << endl;
                    cout << "YOU HAVE BEEN LOGGED IN!" << endl;
                    option = 0;
                    clearScreen();
                    load_data();
                    doc_info_from_file();
                    doc_charges_from_file();
                    timings_from_file();
                    cout << endl;
                    while (option != 9)
                    {
                        cout << endl;
                        header();
                        cout << " ===================================== ADMIN ==================================== " << endl;
                        cout << endl;
                        option = menu();
                        if (option == 1)
                        {
                            system("cls");
                            enterInfo();
                            chosen_doctor();
                            if (availability == 'y')
                            {
                                clearScreen();
                                cout << " ================================== RECIEPT ===================================== " << endl;

                                // RECIEPT:-
                                header();
                                cout << endl;
                                cout << day[count] << "/" << month[count] << "/" << year[count] << endl;
                                cout << "First name is: " << patient_name1[count] << "\t"
                                     << "Last name is: " << patient_name2[count] << endl;
                                cout << "Age: " << age[count] << " years"
                                     << "\t "
                                     << "Weight:" << weight[count] << " kgs" << endl;
                                cout << "Name of Department: " << department_name[count] << endl;
                                cout << "Name of the Doctor: " << doctor_name[count] << endl;
                                cout << "Time to see the doctor: " << time[count] << "pm" << endl;
                                cout << "Charges are " << charges[count] << " rupees only/-" << endl;

                                count = count + 1;
                                clearScreen();
                            }
                        } // option 1
                        if (option == 2)
                        {
                            system("cls");
                            header();
                            cout << " =============================== PATIENT RECORD ===================================== " << endl;
                            cout << endl;
                            for (i = 0; i < X; i++)
                            {
                                if (charges[i] > 0)
                                {
                                    reciept();
                                }
                            } // loop
                            clearScreen();
                        } // option 2
                        if (option == 3)
                        {
                            system("cls");
                            change_pass();
                            clearScreen();
                        } // option 3
                        if (option == 4)
                        {
                            system("cls");
                            discounts();
                            clearScreen();
                        } // option 4
                        if (option == 5)
                        {
                            system("cls");
                            patientHistory();
                            clearScreen();
                        } // option 5
                        if (option == 6)
                        {
                            system("cls");
                            sortPatient();
                            for (i = 0; i < X; i++)
                            {
                                if (charges[i] > 0)
                                {
                                    reciept();
                                }
                            }
                            clearScreen();
                        } // option 6
                        if (option == 7)
                        {
                            system("cls");
                            change_timings();
                            clearScreen();
                        }
                        if (option == 8)
                        {
                            system("cls");
                            change_doc_charges();
                            clearScreen();
                        }
                        if (option == 9)
                        {
                            system("cls");
                            exit();
                            clearScreen();
                        }
                    } // while option is not 8
                }     // if admin pass is correct
                else
                {
                    cout << endl;
                    cout << "TRY AGAIN!!" << endl;
                    clearScreen();
                } // if password is incorrect

            } // user is admin
            if (user == "patient")
            {
                cout << " =============================== USER LOGIN ================================== " << endl;
                cout << "                         " << endl;
                cout << "Enter the username here: ";
                cin >> patient_username;
                cout << "Enter password here : ";
                cin >> pass_of_patient_account;
                pass_file_of_patient();
                system("cls");
                if (patient_username == "zoyahdh" && pass_of_patient_account == passP)
                {
                    cout << endl;
                    cout << "YOU HAVE LOGGED IN!!!" << endl;
                    clearScreen();
                    p_load_data();
                    doc_info_from_file();
                    timings_from_file();
                    doc_charges_from_file();
                    p_option = 0;
                    while (p_option != 9)
                    {
                        cout << endl;
                        header();
                        cout << " =================================== USER ======================================= " << endl;
                        cout << endl;
                        p_option = p_menu();
                        if (p_option == 1)
                        {
                            system("cls");
                            patient_info();
                            chosen_doctor();
                            if (availability == 'y')
                            {
                                clearScreen();
                                // RECIEPT:-
                                header();
                                cout << " ================================== RECIEPT ===================================== " << endl;

                                cout << endl;
                                cout << p_day[p_count] << "/" << p_month[p_count] << "/" << p_year[p_count] << endl;
                                cout << "First name is: " << p_name[p_count] << "\t"
                                     << " Last name is: " << p_name2[p_count] << endl;
                                cout << "Age: " << p_age[p_count] << " years"
                                     << "\t"
                                     << "Weight: " << p_weight[p_count] << " kgs" << endl;
                                cout << "Name of Department: " << p_department_name[p_count] << endl;
                                cout << "Name of the Doctor: " << p_doctor_name[p_count] << endl;
                                cout << "Time to see the doctor: " << p_time[p_count] << "pm" << endl;
                                cout << "Charges are " << p_charges[p_count] << " rupees only/-" << endl;

                                p_count = p_count + 1;
                                clearScreen();
                            }
                            else
                            {
                                system("cls");
                                cout << "Appointment not confirmed" << endl;
                            }
                        } // option 1

                        if (p_option == 2)
                        {
                            system("cls");
                            header();
                            cout << " =========================== PREVIOUS APPOINTMENTS ============================== " << endl;
                            cout << "Enter your first name here: ";
                            cin >> check1;
                            cout << "Enter your second name here: ";
                            cin >> check2;
                            for (i = 0; i < X; i++)
                            {
                                if (p_name[i] == check1 && p_name2[i] == check2)
                                {
                                    patient_reciept();
                                }
                            }
                            clearScreen();
                        } // option 2
                        if (p_option == 3)
                        {
                            system("cls");
                            patient_pass_change();
                            clearScreen();
                        } // option is 3
                        if (p_option == 4)
                        {
                            system("cls");
                            doctor_charges();
                            clearScreen();
                        } // option is 4
                        if (p_option == 5)
                        {
                            system("cls");
                            sorted_doctors();
                            clearScreen();
                        } // option is 5
                        if (p_option == 6)
                        {
                            system("cls");
                            timings();
                            clearScreen();
                        } // option is 7
                        if (p_option == 7)
                        {
                            system("cls");
                            feedback();
                            clearScreen();
                        } // option is 7
                        if (p_option == 8)
                        {
                            system("cls");
                            recommendations();
                            clearScreen();
                        }
                        if (p_option == 9)
                        {
                            system("cls");
                            exit();
                            clearScreen();
                        }
                    } // while option is not 8
                }     // if password correct
                else
                {
                    cout << endl;
                    cout << "TRY AGAIN!!";
                    clearScreen();
                }
            } // user is patient
        }     // if mainchoice is login
        else
        {
            exit();
            break;
        } // if mainchoice is eXit
    }     // while true//mainchoice
} // main

//-------------------------------------------------FUNCTIONS-------------------------------------//
void mainHeader()
{
    cout << " ========================= WELCOME TO WOMENS HEALTH CLINIC ====================== " << endl;
    cout << endl;
    cout << "Choose one of the following" << endl;
    cout << "1. Login" << endl;
    cout << "2. Exit" << endl;
    cout << endl;
    cout << "Your option.....";
    cin >> mainchoice;
}

void header()
{
    cout << " ========================= WELCOME TO WOMENS HEALTH CLINIC ====================== " << endl;
    cout << endl;
} // header

string login()
{
    cout << "Are you admin or patient? ";
    cin >> user;
    return user;
} // login

void chosen_doctor()
{
    cout << endl;
    cout << " ============================== DOCTORS AVAILABILITY =================================== " << endl;
    cout << "Confirm Doctor (y/n): " << endl;
    cin >> availability;

} // chosen doctor function

int departments()
{
    cout << endl;
    cout << " =================================== DEPARTMENTS ======================================= " << endl;
    cout << "Select department: " << endl;
    cout << "1.	Gynecology Department" << endl;
    cout << "2.	Nutrition and Dietetics" << endl;
    cout << "3.	Oncology Department" << endl;
    cout << "4.	Psychological Counselling Department" << endl;

    cout << "                  " << endl;
    cout << "Your option..... ";
    cin >> a;
    return a;
} // departments menu function // for admin + patient

void exit()
{
    cout << endl;
    cout << " ======================================= EXIT ==================================== " << endl;
} // function for exit

void clearScreen()
{
    cout << endl;
    char x;
    cout << "Press any key: " << endl;
    getch();
    system("cls");
} // function of clear screen

void doc_charges_from_file()
{
    fstream t;
    t.open("doccharges.txt", ios::in);
    int v = 0;
    while (!t.eof())
    {
        getline(t, doc_charges[v]);
        v++;
    }
}

void doc_info_from_file()
{
    fstream p;
    p.open("docnames.txt", ios::in);
    int v = 0;
    while (!(p.eof()))
    {
        getline(p, doc_names[v]);
        v++;
    }
}

void timings_from_file()
{
    fstream t;
    t.open("doctimings.txt", ios::in);
    int v = 0;
    while (!t.eof())
    {
        getline(t, doc_timings[v]);
        v++;
    }
}
//----------------------------------------------ADMIN'S-----------------------------------------//

void pass_file()
{
    fstream passfile;
    passfile.open("passadmin.txt", ios::in);
    passfile >> passA;
    passfile.close();
}

int menu()
{
    cout << " =================================== MAIN MENU ================================== " << endl;
    cout << endl;
    cout << "Main menu options:" << endl;
    cout << "1.	Add patient." << endl;
    cout << "2.	View all patient record." << endl;
    cout << "3.	Change admin password." << endl;
    cout << "4.	Special discounts." << endl;
    cout << "5.	View patient history." << endl;
    cout << "6.	View patient record (sorted by age)." << endl;
    cout << "7.	Change doctor timings. " << endl;
    cout << "8.      Change doctor charges. " << endl;
    cout << "9.      Exit. " << endl;
    cout << endl;

    cout << "Your option..... ";
    cin >> option;
    return option;
} // main menu function

void enterInfo()
{
    system("cls");
    cout << " ==================================== ADD PATIENT ====================================== ";
    cout << endl;
    cout << "Now ..." << endl;
    cout << "Enter patient number 1 info : " << endl;
    cout << "1. Enter the patient first name: ";
    cin >> p_n1;
    cout << "2. Enter the patient last name: ";
    cin >> p_n2;
    cout << "3. Enter patient age here: ";
    cin >> p_a;
    cout << "4. Enter weight here: ";
    cin >> p_w;
    cout << "5. Enter date here: ";
    cin >> p_d;
    cout << "6. Enter month here: ";
    cin >> p_m;
    cout << "7. Enter the year here: ";
    cin >> p_y;
    a = departments();
    if (a == 1)
    {
        department = "GYNECOLOGY DEPARTMENT";
        cout << " -------------------------- WELCOME TO GYNECOLOGY DEPARTMENT --------------------------- " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Nadia Khan" << endl;
        cout << "2.	Doctor Fatima sohail" << endl;

        cout << endl;
        cout << "Your option...... ";
        cin >> opt1;
        if (opt1 == 1)
        {
            doc_n = "Professor Nadia Khan";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[6];
                fees = stoi(doc_charges[6]);
            }
            else
            {
                fees = stoi(doc_charges[6]) - 500;
                cout << fees << endl;
            }
        }
        if (opt1 == 2)
        {
            doc_n = "Doctor Fatima sohail";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[7];
                fees = stoi(doc_charges[7]);
            }
            else
            {
                fees = stoi(doc_charges[7]) - 500;
                cout << fees << endl;
            }
        }
    } // 1st
    if (a == 2)
    {
        cout << " ------------------- WELCOME TO NUTRITION AND DIETETICS DEPARTMENT --------------------- " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Amna Zafar" << endl;
        cout << "2.	Doctor Ilyas Ahmed " << endl;

        cout << "                  " << endl;
        cout << "Your option..... ";
        cin >> opt2;
        department = "NUTRITION AND DIETETICS";
        if (opt2 == 1)
        {
            doc_n = "Professor Amna Zafar";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[4];
                fees = stoi(doc_charges[4]);
            }
            else
            {
                fees = stoi(doc_charges[4]) - 500;
                cout << fees << endl;
            }
        }
        if (opt2 == 2)
        {
            doc_n = "Doctor Ilyas Ahmed";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[5];
                fees = stoi(doc_charges[5]);
            }
            else
            {
                fees = stoi(doc_charges[5]) - 500;
                cout << fees << endl;
            }
        }
    } // 2nd
    if (a == 3)
    {
        cout << " ---------------------------- WELCOME TO ONCOLOGY DEPARTMENT --------------------------- " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Mustafa for diagnosis" << endl;
        cout << "2.	Professor Fida for ultrasound" << endl;

        cout << "                  " << endl;
        cout << "Your option..... ";
        cin >> opt3;
        department = "ONCOLOGY DEPARTMENT";
        if (opt3 == 1)
        {
            doc_n = "Professor Mustafa for diagnosis";
            cout << "Special discount for breast cancer awareness month (y/n): ";
            cin >> discount;
            if (discount == 'y')
            {
                fees = stoi(doc_charges[3]) - 200;
                cout << fees;
            }
            else
            {
                cout << doc_charges[3];
                fees = stoi(doc_charges[3]);
            }
        }
        if (opt3 == 2)
        {
            doc_n = "Professor Fida for ultrasound";

            cout << "Special discount for breast cancer awareness month (y/n): ";
            cin >> discount;

            if (discount == 'y')
            {
                fees = stoi(doc_charges[2]) - 200;
                cout << fees;
            }
            else
            {
                cout << doc_charges[2];
                fees = stoi(doc_charges[2]);
            }
        }
    } // 3rd
    if (a == 4)
    {
        cout << "------------------- WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING ------------------ " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Aiysha Tahir" << endl;
        cout << "2.	Professor Zainab Jawed " << endl;

        cout << "                  " << endl;
        cout << "Your option..... ";
        cin >> opt4;
        department = "PSYCOLOGICAL COUNSELLING DEPARTMENT";
        if (opt4 == 1)
        {
            doc_n = "Professor Aiysha Tahir";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[0];
                fees = stoi(doc_charges[0]);
            }
            else
            {
                fees = stoi(doc_charges[0]) - 500;
                cout << fees << endl;
            }
        }
        if (opt4 == 2)
        {
            doc_n = "Professor Zainab Jawed";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[1];
                fees = stoi(doc_charges[1]);
            }
            else
            {
                fees = stoi(doc_charges[1]) - 500;
                cout << fees << endl;
            }
        }
    } // 4th
    cout << endl;
    cout << "Enter the time of receipt here: ";
    cin >> p_t;
    addPatientInfoIntoArray(p_n1, p_n2, p_a, p_w, p_d, p_m, p_y, department, doc_n, fees, p_t);
    info_into_file(p_n1, p_n2, p_a, p_w, p_d, p_m, p_y, department, doc_n, fees, p_t);
}

void addPatientInfoIntoArray(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t)
{
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
} // option 1 : Enter student info

void info_into_file(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t)
{
    fstream file;
    file.open("projectadmin.txt", ios::app);
    file << '\n' + p_n1 + "," + p_n2 + "," + to_string(p_a) + "," + to_string(p_w) + "," + to_string(p_d) + "," + p_m + "," + to_string(p_y) + "," + department + "," + doc_n + "," + to_string(fees) + "," + to_string(p_t) + ",";
    file.close();
}
void load_data()
{
    string data;
    int z = 0;
    fstream newfile;
    newfile.open("projectadmin.txt", ios::in);
    while (!(newfile.eof()))
    {
        getline(newfile, data);
        patient_name1[z] = parse(data, 1);
        patient_name2[z] = parse(data, 2);
        age[z] = stoi(parse(data, 3));
        weight[z] = stoi(parse(data, 4));
        day[z] = stoi(parse(data, 5));
        month[z] = parse(data, 6);
        year[z] = stoi(parse(data, 7));
        department_name[z] = parse(data, 8);
        doctor_name[z] = parse(data, 9);
        charges[z] = stoi(parse(data, 10));
        time[z] = stoi(parse(data, 11));
        z = z + 1;
    }
    newfile.close();
}
string parse(string data, int field)
{
    int commacount = 1;
    string item;
    for (int y = 0; y < 100; y++)
    {
        if (data[y] == ',')
        {
            commacount = commacount + 1;
        }
        else if (commacount == field)
        {
            item = item + data[y];
        }
    }
    return item;
}

void reciept()
{
    cout << day[i] << "/" << month[i] << "/" << year[i] << endl;
    cout << "First name is: " << patient_name1[i] << "\t"
         << " Last name is: " << patient_name2[i] << endl;
    cout << "Age: " << age[i] << " years"
         << "\t"
         << "Weight: " << weight[i] << " kgs" << endl;
    cout << "Name of Department: " << department_name[i] << endl;
    cout << "Name of the Doctor: " << doctor_name[i] << endl;
    cout << "Time to see the doctor: " << time[i] << "pm" << endl;
    cout << "Charges are " << charges[i] << " rupees only/-" << endl;
    cout << endl;
} // function of option 2 and display

void change_pass()
{
    system("cls");
    cout << "                         " << endl;
    cout << " ================================ CHANGE PASSWORD =============================== " << endl;
    cout << "Enter new password here: ";
    cin >> pass_of_admin_account;
    cout << "Re-enter new password here: ";
    cin >> reenter_pass_of_admin_account;
    if (pass_of_admin_account == reenter_pass_of_admin_account)
    {
        fstream fload;
        fload.open("passadmin.txt", ios::out);
        fload << pass_of_admin_account;
        cout << "The password has been changed successfully!!" << endl;
    }
    else
    {
        cout << "Password not changed";
    }
} // function of option 3

void discounts()
{
    system("cls");
    cout << endl;
    cout << " ================================ SPECIAL DISCOUNTS ============================= " << endl;
    cout << "1.	5% discount if patient older than 60 years of age" << endl;
    cout << "2.	5% discount if patient younger than 10 years of age" << endl;

    cout << "Enter patient name here: ";
    cin >> dis_name;
    cout << "Enter patient's last name: ";
    cin >> dis_name2;

    for (int h = 0; h < X; h++)
    {
        if (patient_name1[h] == dis_name && patient_name2[h] == dis_name2)
        {
            dis_charges = charges[h];

            if (age[h] >= 60)
            {
                dis_cal = ((dis_charges / 100) * 5);
                dis_charges = dis_charges - dis_cal;
                charges[h] = dis_charges;
            }
            if (age[h] < 10)
            {
                dis_cal = ((dis_charges / 100) * 5);
                dis_charges = dis_charges - dis_cal;
                charges[h] = dis_charges;
            }
            cout << "Discounted charges for patient " << patient_name1[h] << " " << patient_name2[h] << " is " << charges[h];
        }
    }
} // function for option 4

void patientHistory()
{
    cout << " ================================ VIEW PATIENT HISTORY ========================== " << endl;
    cout << endl;
    cout << "Enter patient first name here : ";
    cin >> history1;
    cout << "Enter patient second name here : ";
    cin >> history2;
    for (i = 0; i < X; i++)
    {
        if (history1 == patient_name1[i] && history2 == patient_name2[i])
        {
            cout << endl;
            reciept();
        }
    }
} // function of option 5

void sortPatient()
{
    cout << endl;
    cout << " ================================= SORTED DATA ================================== " << endl;
    int a_temp, w_temp, d_temp, y_temp, time_temp, char_temp;
    string p_1_temp, p_2_temp, dep_temp, doc_temp, m_temp;
    for (i = 0; i < X; i++)
    {
        for (j = i + 1; j <= X - 1; j++)
        {
            if (age[j] > age[i])
            {
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
} // function of option 6

void change_timings()
{
    int k;
    string e;
    cout << " ================================ CHANGE TIMINGS ================================ " << endl;
    cout << endl;
    cout << "NOTE: " << endl;
    cout << "Write in the format pm or am/to/ pm or am." << endl;
    cout << endl;
    for (int u = 0; u < 8; u++)
    {
        cout << u + 1 << ". " << doc_names[u] << endl;
    }
    cout << endl;
    cout << "Enter which doctor's timings you want to change: ";
    cin >> k;
    cout << "Enter new timings here: ";
    cin >> doc_timings[k - 1];
    fstream w;
    w.open("doctimings.txt", ios::out);
    for (int u = 0; u < 8; u++)
    {
        w << doc_timings[u] << endl;
    }
    cout << "TIMINGS CHANGED SUCCESSFULLY!!" << endl;
}

void change_doc_charges()
{
    for (int u = 0; u < 8; u++)
    {
        cout << u + 1 << ". " << doc_names[u] << endl;
    }
    cout << " ============================= CHANGE DOCTOR FEES =============================== " << endl;
    cout << endl;
    cout << "Enter which doctor's charges you want to change: ";
    cin >> k;
    cout << "Enter new Charges here: ";
    cin >> doc_charges[k - 1];
    fstream w;
    w.open("doccharges.txt", ios::out);
    for (int u = 0; u < 8; u++)
    {
        w << doc_charges[u] << endl;
    }
    cout << "CHARGES CHANGED." << endl;
}
//--------------------------------------------PATIENT'S------------------------------------------//

int p_menu()
{
    cout << " ================================= MAIN MENU ==================================== " << endl;
    cout << "Select one of the following" << endl;
    cout << "1.	Book an appointment." << endl;
    cout << "2.	View previous appointments." << endl;
    cout << "3.	Change password." << endl;
    cout << "4.      View all Doctors fees." << endl;
    cout << "5.	View Doctors (from most expensive to least expensive)." << endl;
    cout << "6.	View Doctor timings." << endl;
    cout << "7.	Add Rating." << endl;
    cout << "8.	See Doctor recommendations." << endl;
    cout << "9.	Exit" << endl;

    cout << endl;
    cout << "Your option.....";
    cin >> p_option;
    return p_option;
}

void pass_file_of_patient()
{
    fstream passfile;
    passfile.open("passuser.txt", ios::in);
    passfile >> passP;
    passfile.close();
}

void patient_info()
{
    system("cls");
    cout << " ================================= BOOK AN APPOINTMENT ================================= ";
    cout << endl;
    cout << "Now ..." << endl;
    cout << "Enter patient number 1 info : " << endl;
    cout << "1. Enter your first name: ";
    cin >> p_n1;
    cout << "2. Enter your last name: ";
    cin >> p_n2;
    cout << "3. Enter your age here: ";
    cin >> p_a;
    cout << "4. Enter weight here: ";
    cin >> p_w;
    cout << "5. Enter date here: ";
    cin >> p_d;
    cout << "6. Enter month here: ";
    cin >> p_m;
    cout << "7. Enter the year here: ";
    cin >> p_y;
    a = departments();
    if (a == 1)
    {
        department = "GYNECOLOGY DEPARTMENT";
        cout << "--------------------------- WELCOME TO GYNECOLOGY DEPARTMENT --------------------------- " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Nadia Khan" << endl;
        cout << "2.	Doctor Fatima sohail" << endl;

        cout << endl;
        cout << "Your option...... ";
        cin >> opt1;
        if (opt1 == 1)
        {
            doc_n = "Professor Nadia Khan";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[6];
                fees = stoi(doc_charges[6]);
            }
            else
            {
                fees = stoi(doc_charges[6]) - 500;
                cout << fees << endl;
            }
        }
        if (opt1 == 2)
        {
            doc_n = "Doctor Fatima sohail";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[7];
                fees = stoi(doc_charges[7]);
            }
            else
            {
                fees = stoi(doc_charges[7]) - 500;
                cout << fees << endl;
            }
        }
    } // 1st
    if (a == 2)
    {
        cout << "---------------------- WELCOME TO NUTRITION AND DIETETICS DEPARTMENT ------------------- " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Amna Zafar" << endl;
        cout << "2.	Doctor Ilyas Ahmed " << endl;

        cout << "                  " << endl;
        cout << "Your option..... ";
        cin >> opt2;
        department = "NUTRITION AND DIETETICS";
        if (opt2 == 1)
        {
            doc_n = "Professor Amna Zafar";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[4];
                fees = stoi(doc_charges[4]);
            }
            else
            {
                fees = stoi(doc_charges[4]) - 500;
                cout << fees << endl;
            }
        }
        if (opt2 == 2)
        {
            doc_n = "Doctor Ilyas Ahmed";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[5];
                fees = stoi(doc_charges[5]);
            }
            else
            {
                fees = stoi(doc_charges[5]) - 500;
                cout << fees << endl;
            }
        }
    } // 2nd
    if (a == 3)
    {
        cout << "---------------------------- WELCOME TO ONCOLOGY DEPARTMENT ---------------------------- " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Mustafa for diagnosis" << endl;
        cout << "2.	Professor Fida for ultrasound" << endl;

        cout << "                  " << endl;
        cout << "Your option..... ";
        cin >> opt3;
        department = "ONCOLOGY DEPARTMENT";
        if (opt3 == 1)
        {
            doc_n = "Professor Mustafa for diagnosis";
            cout << "Special discount for breast cancer awareness month (y/n): ";
            cin >> discount;
            if (discount == 'y')
            {
                fees = stoi(doc_charges[3]) - 200;
                cout << fees;
            }
            else
            {
                fees = stoi(doc_charges[3]) - 200;
                cout << fees;
            }
        }
        if (opt3 == 2)
        {
            doc_n = "Professor Fida for ultrasound";

            cout << "Special discount for breast cancer awareness month (y/n): ";
            cin >> discount;

            if (discount == 'y')
            {
                fees = stoi(doc_charges[2]) - 200;
                cout << fees;
            }
            else
            {
                fees = stoi(doc_charges[2]) - 200;
                cout << fees;
            }
        }
    } // 3rd
    if (a == 4)
    {
        cout << "-------------------- WELCOME TO DEPARTMENT OF PSYCOLOGICAL COUNSELLING------------------ " << endl;
        cout << "Select doctor: " << endl;
        cout << "1.	Professor Aiysha Tahir" << endl;
        cout << "2.	Professor Zainab Jawed " << endl;

        cout << "                  " << endl;
        cout << "Your option..... ";
        cin >> opt4;
        department = "PSYCOLOGICAL COUNSELLING DEPARTMENT";
        if (opt4 == 1)
        {
            doc_n = "Professor Aiysha Tahir";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[0];
                fees = stoi(doc_charges[0]);
            }
            else
            {
                fees = stoi(doc_charges[0]) - 500;
                cout << fees << endl;
            }
        }
        if (opt4 == 2)
        {
            doc_n = "Professor Zainab Jawed";
            cout << "Enter the visit number here: ";
            cin >> num_of_visit;
            if (num_of_visit == 1)
            {
                cout << doc_charges[1];
                fees = stoi(doc_charges[1]);
            }
            else
            {
                fees = stoi(doc_charges[1]) - 500;
                cout << fees << endl;
            }
        }
    } // 4th
    cout << endl;

    cout << "Enter the time of receipt here: ";
    cin >> p_t;

    addPatientInfoIntoArray2(p_n1, p_n2, p_a, p_w, p_d, p_m, p_y, department, doc_n, fees, p_t);
    p_info_into_file(p_n1, p_n2, p_a, p_w, p_d, p_m, p_y, department, doc_n, fees, p_t);
}

void addPatientInfoIntoArray2(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t)
{
    p_name[p_count] = p_n1;
    p_name2[p_count] = p_n2;
    p_age[p_count] = p_a;
    p_weight[p_count] = p_w;
    p_day[p_count] = p_d;
    p_month[p_count] = p_m;
    p_year[p_count] = p_y;
    p_department_name[p_count] = department;
    p_doctor_name[p_count] = doc_n;
    p_time[p_count] = p_t;
    p_charges[p_count] = fees;
}

void p_info_into_file(string p_n1, string p_n2, int p_a, int p_w, int p_d, string p_m, int p_y, string department, string doc_n, int fees, int p_t)
{
    fstream pfile;
    pfile.open("projectuser.txt", ios::app);
    pfile << '\n' + p_n1 + "," + p_n2 + "," + to_string(p_a) + "," + to_string(p_w) + "," + to_string(p_d) + "," + p_m + "," + to_string(p_y) + "," + department + "," + doc_n + "," + to_string(fees) + "," + to_string(p_t) + ",";
    pfile.close();
}
void p_load_data()
{
    string pdata;
    int z = 0;
    fstream newPfile;
    newPfile.open("projectuser.txt", ios::in);
    while (!(newPfile.eof()))
    {
        getline(newPfile, pdata);
        p_name[z] = parse(pdata, 1);
        p_name2[z] = parse(pdata, 2);
        p_age[z] = stoi(parse(pdata, 3));
        p_weight[z] = stoi(parse(pdata, 4));
        p_day[z] = stoi(parse(pdata, 5));
        p_month[z] = parse(pdata, 6);
        p_year[z] = stoi(parse(pdata, 7));
        p_department_name[z] = parse(pdata, 8);
        p_doctor_name[z] = parse(pdata, 9);
        p_charges[z] = stoi(parse(pdata, 10));
        p_time[z] = stoi(parse(pdata, 11));
        z = z + 1;
    }
    newPfile.close();
}

void patient_reciept()
{
    cout << endl;
    cout << p_day[i] << "/" << p_month[i] << "/" << p_year[i] << endl;
    cout << "First name is: " << p_name[i] << "\t"
         << " Last name is: " << p_name2[i] << endl;
    cout << "Age: " << p_age[i] << " years"
         << "\t"
         << "Weight: " << p_weight[i] << " kgs" << endl;
    cout << "Name of Department: " << p_department_name[i] << endl;
    cout << "Name of the Doctor: " << p_doctor_name[i] << endl;
    cout << "Time to see the doctor: " << p_time[i] << "pm" << endl;
    cout << "Charges are " << p_charges[i] << " rupees only/-" << endl;
    cout << endl;
} // function of option 2

void patient_pass_change()
{
    cout << " ================================ CHANGE PASSWORD =============================== " << endl;
    cout << "Enter new password : " << endl;
    cin >> pass_of_patient_account;
    cout << "Re-enter new password: " << endl;
    cin >> reenter_pass_of_patient_account;
    cout << endl;
    if (pass_of_patient_account == reenter_pass_of_patient_account)
    {
        fstream pload;
        pload.open("passuser.txt", ios::out);
        pload << pass_of_patient_account;
        cout << "Password changed successfully!!" << endl;
    }
    else
    {
        cout << "Try again" << endl;
    }
} // function of option 3

void doctor_charges()
{
    for (int u = 0; u < 8; u++)
    {
        cout << doc_names[u] << " = " << doc_charges[u] << endl;
    }
} // option 4

void sorted_doctors()
{
    int d_c[X];
    int temp_expense;
    string temp_doc;
    for (b = 0; b < 8; b++)
    {
        d_c[b] = stoi(doc_charges[b]);
    }
    cout << "================================== SORTED DOCTORS ================================= "<<endl;
    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j <= 7; j++)
        {
            if (d_c[j] > d_c[i])
            {
                temp_expense = d_c[j];
                d_c[j] = d_c[i];
                d_c[i] = temp_expense;

                temp_doc = doc_names[j];
                doc_names[j] = doc_names[i];
                doc_names[i] = temp_doc;
            }
        }
    }
    for (b = 0; b < 8; b++)
    {
        cout << doc_names[b] << endl;
    }
}

void timings()
{
    cout << endl;
    cout << " ===================================== TIMINGS ================================== " << endl;
    for (int u = 0; u < 8; u++)
    {
        cout << u + 1 << ". " << doc_names[u] << " = " << doc_timings[u] << endl;
    }

} // function of option 6

void feedback()
{
    cout << endl;
    cout << " =============================== PATIENTS RATINGS =============================== " << endl;
    cout << "Choose one of the following doctors" << endl;
    for (int u = 0; u < 8; u++)
    {
        cout << u + 1 << ". " << doc_names[u] << endl;
    }
    cout << endl;
    cout << "Your option..... ";
    cin >> choose_doc;

    cout << "Add rating " << endl;
    cout << "1.	Great /Excellent " << endl;
    cout << "2.	Good " << endl;
    cout << "3.	Okay " << endl;
    cout << "4.	Bad" << endl;
    cout << endl;
    cout << "Your option..... ";
    cin >> d;
    cout << endl;
    cout << "THANKS FOR LEAVING YOUR FEEDBACK!!" << endl;

    for (i = choose_doc; i < 9; i++)
    {
        if (d == 1 || d == 2)
        {
            fstream precs;
            precs.open("patientrecs.txt", ios::app);
            precs << doc_names[i - 1] + '\n';
            precs.close();
        }
        break;
    }

} // function of option 7

void recommendations()
{
    cout << " ============================== RECOMMENDED DOCTORS ============================= " << endl;
    fstream rfile;
    rfile.open("patientrecs.txt", ios::in);
    while (!rfile.eof())
    {
        getline(rfile, ch[c]);
        c++;
    }
    for (int a = 0; a < 8; a++)
    {
        for (int b = a + 1; b < 8; b++)
        {
            if (ch[a] == ch[b])
            {
                ch[b] = ' ';
            }
        }
        cout << ch[a] << endl;
    }
    rfile.close();
} // Option 8