#include<iostream>
#include<fstream>
using namespace std;

main(){
    char ch;
    ifstream file ("english.txt");
    while(!file.eof()){
        file >> ch;
        cout << ch <<endl;
    }
    file.close();
}