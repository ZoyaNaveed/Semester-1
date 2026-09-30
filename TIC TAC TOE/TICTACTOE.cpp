#include <iostream>
using namespace std;

char board[3][3];
string ch_O, ch_X;
int i, j, y, x;
char symbol = 'A';

void input();
void drawing_board();
bool checkRows(char symbol);
bool checkColumns(char symbol);
bool checkDiagonals(char symbol);
bool isWinner(char symbol);

main()
{
    drawing_board();
    input();
}

void drawing_board()
{
    system("cls");
    cout << board[0][0] << "   | " << board[0][1] << "   | " << board[0][2] << endl;
    cout << "------------" << endl;
    cout << board[1][0] << "   | " << board[1][1] << "   | " << board[1][2] << endl;
    cout << "------------" << endl;
    cout << board[2][0] << "   | " << board[2][1] << "   | " << board[2][2] << endl;
    cout << endl;
}
void input()
{
    for (y = 0; y < 9; y++)
    {
        if (y == 0 || y == 2 || y == 4 || y == 6 || y == 8)
        {
            cout << "PLAYER 1's TURN(symbol = O)." << endl;
            cout << "ROWS ARE LABELLED A,B,C AND COLUMNS ARE LABELLED 0, 1, 2." << endl;
            cout << "Enter where you want to place your symbol: " << endl;
            cin >> ch_O;
            symbol = 'O';
            if (ch_O[0] == 'A')
            {
                i = 0;
            }
            if (ch_O[0] == 'B')
            {
                i = 1;
            }
            if (ch_O[0] == 'C')
            {
                i = 2;
            }
            if (ch_O[1] == '1')
            {
                j = 0;
            }
            if (ch_O[1] == '2')
            {
                j = 1;
            }
            if (ch_O[1] == '3')
            {
                j = 2;
            }
            board[i][j] = 'O';
            drawing_board();
            isWinner(symbol);
        }
        else if (y == 1 || y == 3 || y == 5 || y == 7)
        {
            cout << "PLAYER 2's TURN(symbol = X)." << endl;
            cout << "ROWS ARE LABELLED A,B,C AND COLUMNS ARE LABELLED 0, 1, 2" << endl;
            cout << "Enter where you want to place your symbol: " << endl;
            cin >> ch_X;
            symbol ='X';
            if (ch_X[0] == 'A')
            {
                i = 0;
            }
            if (ch_X[0] == 'B')
            {
                i = 1;
            }
            if (ch_X[0] == 'C')
            {
                i = 2;
            }
            if (ch_X[1] == '1')
            {
                j = 0;
            }
            if (ch_X[1] == '2')
            {
                j = 1;
            }
            if (ch_X[1] == '3')
            {
                j = 2;
            }
            board[i][j] = 'X';
            drawing_board();
            isWinner(symbol);
        } // else if
    }// for loop
} // end of input function

bool checkRows(char symbol){
    int count = 0;
    for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++){
            if (board[x][y] == symbol){
                count = count + 1;
            }
        }
    if ( count == 3){
        return 1;
    }
    }
    return 0;
}
bool checkColumns(char symbol){
    int count = 0;
    for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++){
            if (board[y][x] == symbol){
                count = count + 1;
            }
        }
    if ( count == 3){
        return 1;
    }
    }
    return 0;
}
bool checkDiagonals(char symbol){
    int count = 0;
for (x = 0; x < 3; x++){
    if (board[x][y] == symbol){
        count = count + 1;
    }
}
if (count == 3){
    return 1;
}
count = 0;
for ( x = 0, y = 2; x < 3; x++, y--){
    if (board[x][y] == symbol){
        count = count + 1;
    }
}
if ( count == 3){
    return 1;
}
return 0;
}
bool isWinner(char symbol){
    if (checkRows(symbol) || checkDiagonals(symbol) || checkColumns(symbol)){
        return 0;
    }
    else{
        return 1;
    }
}