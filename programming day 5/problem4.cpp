#include <iostream>
using namespace std;

int leapyears (int year1 , int year2)
{

int result ;

int cal1 = (year1 + 1) % 4;
int cal2 = (year1 + 1 ) % 100;
int cal3 = (year1 + 1 ) % 400;

if ( cal1 == 0 && cal2 == 0 && cal3 == 0){
    cout << "3 leap years";
}
if (cal1 == 0 && cal2 != 0){
    cout << "3 leap years";
}
else{
    cout << "2 years";
}

int cal4 = (year1 + 2) % 4;
int cal5 = (year1 + 2 ) % 100;
int cal6 = (year1 + 2 ) % 400;

if ( cal4 == 0 && cal5 == 0 && cal6 == 0){
    cout << "3 leap years";
}
if (cal4 == 0 && cal5 != 0){
    cout << "3 leap years";
}
else{
    cout << "2 years";
}
return result;
}


main(){
    int year1;
    int year2;
    int result;

    cout << "Enter year number 1 here : ";
    cin >> year1;
    cout << "Enter year number 2 here (10 years difference) : ";
    cin >> year2;
    
    leapyears ( year1 ,  year2);
  
}