#include<iostream>
#include<fstream>
using namespace std;

main(){
    char ch;
    int count = 0;
    ifstream file("english.txt");
    while(!file.eof()){
        file >> ch;
        cout << ch << endl;
        count = count + 1;
    }
    cout << "Total characters are: " << count;
    file.close();
}