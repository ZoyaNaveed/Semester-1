#include<iostream>
#include<fstream>
using namespace std;

main(){
    int integer;
    ifstream file("integer.txt");
    file >> integer;
    cout << integer <<endl;
    cout << "Operation done succesfully! ";
    file.close();
}