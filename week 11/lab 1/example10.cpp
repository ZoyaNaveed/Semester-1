#include<iostream>
#include<fstream>
using namespace std;

main(){
    string line;
    ifstream file("english.txt");
    while(!file.eof()){
        getline(file , line);
        cout << line << endl;
    }
    file.close();
}