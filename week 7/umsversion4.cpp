#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void header ()
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
cout<< "6.Exit "<<endl;

cout<< "Your option... ";
int option;
cin>> option;
return option;

}//main menu function


void display_student(string name , float matric , float fsc , float ecat , string pref1 , string pref2 ,string pref3 )
{
    if (matric > 0){
    cout<< "Student's info is : "<<"\t"<<name<<"\t"<<matric<<"\t"<<fsc<<"\t"<<ecat<<"\t" << "Preferences are : " << "\t" <<pref1 <<"\t" << pref2 << "\t" << pref3 << "\t";
}
}//display function


float aggregate( float matric , float fsc , float ecat ){
    float aggregate = (((matric / 1100) * 100) * 0.25) + (((fsc / 1100 ) * 100) * 0.45) + (((ecat / 400) * 100) * 0.30);
    return aggregate;

}//aggregate function

void clearScreen (){
    char x;
    cout << "Press any key: "<<endl;
    getch();
}//function of clear screen

main(){
string name1;
string name2;
string name3;
string name4;
float matric1=0 , fsc1=0 , ecat1=0;
float matric2=0 , fsc2=0 , ecat2=0;
float matric3=0 , fsc3=0 , ecat3=0;
float matric4=0 , fsc4=0 , ecat4=0;
float aggre1 = 0;
float aggre2 = 0;
float aggre3 = 0;
float aggre4 = 0;
string pref1_1;
string pref1_2;
string pref1_3;
string pref2_1;
string pref2_2;
string pref2_3;
string pref3_1;
string pref3_2;
string pref3_3;
string pref4_1;
string pref4_2;
string pref4_3;


int count;
count = 0;
int option;

while (option != 6){
     header ();
    option = menu ();
    system("cls");
if (option == 1){
    cout << "Main Menu > New student record" <<endl;
    if (count == 0){
        cout << "Enter your name here: ";
        cin >> name1;
        cout << "Enter your matric marks here: ";
        cin >> matric1;
        cout << "Enter your fsc marks here: ";
        cin >> fsc1;
        cout << "Enter your ecat marks here: ";
        cin >> ecat1;

        cout <<endl;

        cout << "Enter your preferences from following programs here: " <<endl;
        cout << "CS                  SE                  IT" <<endl;
        cout << "Enter 1st preference here : ";
        cin >> pref1_1;
        cout << "Enter 2nd preference here : ";
        cin >> pref1_2;
        cout <<  "Enter 3rd preference here: ";
        cin >> pref1_3;

        count = count + 1;
        system("cls");
        clearScreen ();
    }
    else if (count == 1){
        cout << "Enter your name here: ";
        cin >> name2;
        cout << "Enter your matric marks here: ";
        cin >> matric2;
        cout << "Enter your fsc marks here: ";
        cin >> fsc2;
        cout << "Enter your ecat marks here: ";
        cin >> ecat2;

        cout <<endl;

        cout << "Enter your preferences from following programs here: " <<endl;
        cout << "CS                  SE                  IT" <<endl;
        cout << "Enter 1st preference here : ";
        cin >> pref2_1;
        cout << "Enter 2nd preference here : ";
        cin >> pref2_2;
        cout <<  "Enter 3rd preference here: ";
        cin >> pref2_3;

        count = count + 1;
        system("cls");
        clearScreen ();
    }
    else if (count == 2){
        cout << "Enter your name here: ";
        cin >> name3;
        cout << "Enter your matric marks here: ";
        cin >> matric3;
        cout << "Enter your fsc marks here: ";
        cin >> fsc3;
        cout << "Enter your ecat marks here: ";
        cin >> ecat3;

        cout <<endl;

        cout << "Enter your preferences from following programs here: " <<endl;
        cout << "CS                  SE                  IT" <<endl;
        cout << "Enter 1st preference here : ";
        cin >> pref3_1;
        cout << "Enter 2nd preference here : ";
        cin >> pref3_2;
        cout <<  "Enter 3rd preference here: ";
        cin >> pref3_3;

        count = count + 1;
        system("cls");
        clearScreen ();
    }
    else if (count == 3){
        cout << "Enter your name here: ";
        cin >> name4;
        cout << "Enter your matric marks here: ";
        cin >> matric4;
        cout << "Enter your fsc marks here: ";
        cin >> fsc4;
        cout << "Enter your ecat marks here: ";
        cin >> ecat4;

        cout <<endl;

        cout << "Enter your preferences from following programs here: " <<endl;
        cout << "CS                  SE                  IT" <<endl;
        cout << "Enter 1st preference here : ";
        cin >> pref4_1;
        cout << "Enter 2nd preference here : ";
        cin >> pref4_2;
        cout <<  "Enter 3rd preference here: ";
        cin >> pref4_3;

        count = count + 1;
        system("cls");
        clearScreen ();
    }
}//end of if statment 1

if (option == 2){
    system("cls");
    header();
    cout << endl;
    cout << "Main Menu > View all records " <<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3);
    cout << endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
    clearScreen ();

}//end of if statement 2

if (option == 3){
     aggre1 = aggregate(  matric1 ,  fsc1 ,  ecat1 );
     aggre2 = aggregate(  matric2 ,  fsc2 ,  ecat2 );
     aggre3 = aggregate(  matric3 ,  fsc3 ,  ecat3 );
     aggre4 = aggregate(  matric4 ,  fsc4 ,  ecat4 );
     system ("cls");
     header ();
     cout << endl;
    cout << "Main Menu > Print record in merit order " <<endl;
    cout << "***********************************RECORD IN MERIT ORDER**********************************" <<endl;
    //Highest aggregate

if (aggre1 > aggre2 && aggre1 > aggre3 && aggre1 > aggre4){
    cout<<"First aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

 if (aggre2 > aggre1 && aggre2 > aggre3 && aggre2 > aggre4){
    cout<<"First aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

 if (aggre3 > aggre1 && aggre3 > aggre2 && aggre3 > aggre4){
    cout<<"First aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3 );
    cout << endl;
}

 if (aggre4 > aggre1 && aggre4 > aggre3 && aggre4 > aggre2){
    cout<<"First aggregate is "<<aggre4 << " of" <<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

//Second highest

if (aggre1 > aggre2 && aggre1 > aggre3 && aggre1 < aggre4){
    cout<<"Second aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

 if (aggre1 > aggre2 && aggre1 < aggre3 && aggre1 > aggre4){
    cout<<"Second aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

 if (aggre1 < aggre2 && aggre1 > aggre3 && aggre1 > aggre4){
    cout<<"Second aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1, pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

 if (aggre2 > aggre1 && aggre2 > aggre3 && aggre2 < aggre4){
    cout<<"Second aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

 if (aggre2 > aggre1 && aggre2 < aggre3 && aggre2 > aggre4){
    cout<<"Second aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

 if (aggre2 < aggre1 && aggre2 > aggre3 && aggre2 > aggre4){
    cout<<"Second aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

 if (aggre3 > aggre1 && aggre3 > aggre2 && aggre2 < aggre4){
    cout<<"Second aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3);
    cout << endl;

}

 if (aggre3 > aggre1 && aggre3 < aggre2 && aggre2 > aggre4){
    cout<<"Second aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3, pref3_1 , pref3_2 , pref3_3);
    cout << endl;
}

 if (aggre3 < aggre1 && aggre3 > aggre2 && aggre2 > aggre4){
    cout<<"Second aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3);
    cout << endl;
}

 if (aggre4 > aggre1 && aggre4 > aggre2 && aggre4 < aggre3){
    cout<<"Second aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

 if (aggre4 > aggre1 && aggre4 < aggre2 && aggre4 > aggre3){
    cout<<"Second aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

 if (aggre4 < aggre1 && aggre4 > aggre2 && aggre4 > aggre3){
    cout<<"Second aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

//Third highest aggregate

if (aggre1 > aggre2 && aggre1 < aggre3 && aggre1 < aggre4){
    cout<<"Third aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

if (aggre1 < aggre2 && aggre1 > aggre3 && aggre1 < aggre4){
    cout<<"Third aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

if (aggre1 < aggre2 && aggre1 < aggre3 && aggre1 > aggre4){
    cout<<"Third aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3);
    cout << endl;
}

if (aggre2 > aggre1 && aggre2 < aggre3 && aggre2 < aggre4){
    cout<<"Third aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

if (aggre2 < aggre1 && aggre2 > aggre3 && aggre2 < aggre4){
    cout<<"Third aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

if (aggre2 < aggre1 && aggre2 < aggre3 && aggre2 > aggre4){
    cout<<"Third aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

if (aggre3 > aggre1 && aggre3 < aggre2 && aggre3 < aggre4){
    cout<<"Third aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3);
    cout << endl;
}

if (aggre3 > aggre2 && aggre3 < aggre1 && aggre3 < aggre4){
    cout<<"Third aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3, pref3_1 , pref3_2 , pref3_3);
    cout << endl;
}

if (aggre3 > aggre4 && aggre3 < aggre2 && aggre3 < aggre1){
    cout<<"Third aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3);
    cout << endl;
}

if (aggre4 > aggre1 && aggre4 < aggre2 && aggre4 < aggre3){
    cout<<"Third aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

if (aggre4 > aggre2 && aggre4 < aggre1 && aggre4 < aggre3){
    cout<<"Third aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

if (aggre4 > aggre3 && aggre4 < aggre2 && aggre4 < aggre1){
    cout<<"Third aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

//Last aggregate

if (aggre1 < aggre2 && aggre1 < aggre3 && aggre1 < aggre4){
    cout<<"Last aggregate is "<<aggre1<< " of"<<endl;
    display_student (name1 , matric1 , fsc1 , ecat1 , pref1_1 , pref1_2 , pref1_3); 
    cout << endl;
}

if (aggre2 < aggre1 && aggre2 < aggre3 && aggre2 < aggre4){
    cout<<"Last aggregate is "<<aggre2<< " of"<<endl;
    display_student (name2 , matric2 , fsc2 , ecat2 , pref2_1 , pref2_2 , pref2_3);
    cout << endl;
}

 if (aggre3 < aggre1 && aggre3 < aggre2 && aggre3 < aggre4){
    cout<<"Last aggregate is "<<aggre3<< " of"<<endl;
    display_student (name3 , matric3 , fsc3 , ecat3 , pref3_1 , pref3_2 , pref3_3);
    cout << endl;
}

if (aggre4 < aggre1 && aggre4 < aggre3 && aggre4 < aggre2){
    cout<<"Last aggregate is "<<aggre4<< " of"<<endl;
    display_student (name4 , matric4 , fsc4 , ecat4 , pref4_1 , pref4_2 , pref4_3);
    cout << endl;
}

clearScreen();
}//end of if statement 3

if (option == 4){
    system ("cls");
    cout << "Main Menu > Student Merit List" << endl;
    cout << "*********************************MERIT LIST*********************************" <<endl;
    
}


}//end of while loop

}//end of menu