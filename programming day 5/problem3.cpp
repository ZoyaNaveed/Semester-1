#include <iostream>
using namespace std;

string leapyear (int year)
{
string result;
int cal1 = year % 4;
int cal2 = year % 100;
int cal3 = year % 400;

if ( cal1 == 0 && cal2 == 0 && cal3 == 0){
    cout << "True";
}
if (cal1 == 0 && cal2 != 0){
    cout << "True";
}
if (cal1 != 0){
    cout << "False";
}
if (cal1 == 0 && cal2 == 0 && cal3 != 0){
    cout << "False";
}
return result;
}

main()
{
    int year;

    cout<< "Enter the year here : ";
    cin >> year;

    leapyear (year);

}