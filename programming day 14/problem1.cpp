#include<iostream>
using namespace std;

struct studenttype
{
    string studentFname;
    string studentLname;
    int testscore;
    char grade;   
}

studenttype stu[20];

void studentinput();
void studentinput()
{
    cout << "Enter the number of students you want to enter: ";
    cin >> count;
    for ( i = 0; i < count; i++)
    {
        cout << "Enter the student first name here: ";
        cin >> stu[i].studentFname;
        cout << "Enter the student last name here: ";
        cin >> studentLname;
        cout << "Enter the test scores here: ";
        cin >> testscore;
    }
}

