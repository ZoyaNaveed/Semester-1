#include<iostream>
#include<fstream>
using namespace std;

//1  //2  //3 //4 //5
string battleship[5][5] = {
{".", ".", ".", "*", "*"},//A
{".", "*", ".", ".", "."},//B
{".", "*", ".", ".", "."},//C
{".", "*", ".", ".", "."},//D
{".", ".", "*", "*", "."}//E
};

int i , j;
string ch;

string input (){
    cout << "Enter where you want to check character here: ";
    cin >> ch;
    return ch;
}

string fire(string ch){
    if (ch[0] == 'A'){
        i = 0;
    }
    if (ch[0] == 'B'){
        i = 1;
    }
    if ( ch[0] == 'C'){
        i = 2;
    }
    if (ch[0] == 'D'){
        i = 3;
    }
    if (ch[0] == 'E'){
        i = 4;
    }
    if (ch[1] == '1'){
        j = 0;
    }
    if (ch[1] == '2'){
        j = 1;
    }
    if (ch[1] == '3'){
        j = 2;
    }
    if (ch[1] == '4'){
        j = 3;
    }
    if (ch[1] == '5'){
        j = 4;
    }
if ( battleship[i][j] == "."){
    cout << "splash";
}
 if (battleship[i][j] == "*"){
    cout << "BOOM!";
}
}
main(){
    ch = input();
    fire(ch);
}