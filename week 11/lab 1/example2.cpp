#include<iostream>
#include<fstream>
using namespace std;

main(){
    int integer;
    cout << "Enter the integer here: ";
    cin >> integer;
    ofstream file("integer.txt");
    file << integer;
    file.close();

}