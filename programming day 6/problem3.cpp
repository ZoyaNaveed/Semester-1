#include<iostream>
using namespace std;

void treated_patients(int days , int patients){
    cout << "Enter the number of days here : ";
    cin >> days;
    int total_untreated = 0;
    int total_treated = 0;

for (int i = 1 ; i <= days ; i++ ){

    cout << "Enter the patients here ";
    cin >> patients;
//doctors available is 7
int un_treated = 0 ;
int treated = 7;

if (patients <= 7){
    cout << "Number of treated patients are "<<patients <<endl;
    cout << "Number of untreated patients are"<<" 0" <<endl;
}
else if (patients > 7){
    cout << "Number of treated patients are "<<"7" <<endl;
    cout << "Number of untreated patients are " << un_treated <<endl;
    un_treated = patients - 7;
}

total_untreated = total_untreated + un_treated;
total_treated = total_treated + treated;
}
cout << total_untreated <<endl;
cout << total_treated <<endl;

}

main(){
    int days , patients;
    treated_patients(days , patients);
}