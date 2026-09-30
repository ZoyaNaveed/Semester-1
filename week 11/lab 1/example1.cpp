#include<iostream>
#include<fstream>
using namespace std;

main(){
    string name;

    cout <<"enter your name here : ";
    cin >> name;
    ofstream file("my.txt");
    file << name;
    file.close();

}