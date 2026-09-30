#include<iostream>
using namespace std;
main()
{
    string temp;
    cout<<"Enter the temperature here: ";
    cin>>temp;

    string humidity;
    cout<<"Enter the humidity here: ";
    cin>>humidity;

    if (temp=="warm"){
        if (humidity=="dry"){
            cout<<"Play tennis";
        }
        if (humidity=="humid"){
            cout<<"Swim";
        }
    }
    if (temp=="cold"){
        if (humidity=="dry"){
            cout<<"Play basketball";
        }
        if (humidity=="humid"){
            cout<<"Watch TV";
        }
    }
}