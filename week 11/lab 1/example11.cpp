#include<iostream>
#include<fstream>
using namespace std;

main(){
    string line;
    int count = 0;
    ifstream file("english.txt");
    while(!file.eof()){

        getline(file, line);
        count = count + 1;
    }
    cout << "Total number of lines are " << count;
    file.close();
}