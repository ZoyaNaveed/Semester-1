#include<iostream>
#include<fstream>
using namespace std;

main(){
    int roll;
    float cgpa;
    string name;
    char grade;

    cout <<"enter your roll no here: ";
    cin >> roll;
    cout << "enter your name here: ";
    cin >> name;
    cout << "enter your cgpa here: ";
    cin >> cgpa;
    cout << "enter your grade here: ";
    cin >> grade;

    ofstream file("result_card.txt");
    file << roll << "\t" << name << "\t" << cgpa << "\t" << grade << "\t";
    file.close();
}