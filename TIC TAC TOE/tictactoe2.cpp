#include <iostream>
using namespace std;

char board[3][3];
string ch_O, ch_X;
int i, j, y, x;
char symbol = 'a';
int loop;

void input1();
void input2();
void drawing_board();
bool checkRows(char symbol);
bool checkColumns(char symbol);
bool checkDiagonals(char symbol);
bool isWinner(char symbol);

main()
{
    drawing_board();
    for (loop = 0; loop < 9; loop++)
    {
        input1();
        if (isWinner(symbol) == true)
        {
            cout << "Player " << symbol << " won!!!" << endl;
            break;
        }
        input2();
        if (isWinner(symbol) == true)
        {
            cout << "Player " << symbol << " won!!!" << endl;
            break;
        }
    } // loop
    if (isWinner(symbol) != true){
        cout<<"DRAW :(";
    }
}//main

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
void input1()
{
    if (loop == 0 || loop == 2 || loop == 4 || loop == 6 || loop == 8)
    {
        cout << "PLAYER 1's TURN(symbol = O)." << endl;
        cout << "ROWS ARE LABELLED A,B,C AND COLUMNS ARE LABELLED 1,2,3." << endl;
        cout << "Enter where you want to place your symbol: " << endl;
        cin >> ch_O;

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
        symbol = 'O';
        drawing_board();
    }
}
void input2()
{
    if (loop == 1 || loop == 3 || loop == 5 || loop == 7)
    {
        cout << "PLAYER 2's TURN(symbol = X)." << endl;
        cout << "ROWS ARE LABELLED A,B,C AND COLUMNS ARE LABELLED 1,2,3." << endl;
        cout << "Enter where you want to place your symbol: " << endl;
        cin >> ch_X;
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
        symbol = 'X';
        drawing_board();
    } // if
}
bool checkRows(char symbol)
{
    int count = 0;
    for (x = 0; x < 3; x++)
    {
        count = 0;
        for (y = 0; y < 3; y++)
        {
            if (board[x][y] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return 1;
        }
    }
    return 0;
}
bool checkColumns(char symbol)
{
    int count = 0;
    for (x = 0; x < 3; x++)
    {
        count = 0;
        for (y = 0; y < 3; y++)
        {
            if (board[y][x] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return 1;
        }
    }
    return 0;
}
bool checkDiagonals(char symbol)
{
    int count = 0;
    for (int x = 0; x < 3; x++)
    {
        if (board[x][x] == symbol)
        {
            count = count + 1;
        }
        if (count == 3)
        {
            return 1;
        }
    }

    count = 0;
    for (int x = 0, k = 2; x < 3, k >= 0; x++, k--)
    {
        if (board[x][k] == symbol)
        {
            count = count + 1;
        }
        if (count == 3)
        {
            return 1;
        }
    }

    return 0;
}
bool isWinner(char symbol)
{
    if (checkRows(symbol) || checkDiagonals(symbol) || checkColumns(symbol))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
