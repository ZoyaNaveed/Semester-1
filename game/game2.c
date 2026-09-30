#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

char board[24][71] = {
    {"#########################################"},
    {"| E | E | E | E | E | E | E | E | E | E |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|   |   |   |   |   |   |   |   |   |   |"},
    {"|                                       |"},
    {"|                                       |"},
    {"#########################################"}};

void gotoxy(int x, int y);
void print_board();
void leftmovement();
void rightmovement();
void playerfire();
int enemyrandomfire();
bool efiring();

int X = 22, Y = 5; // Zmovement
bool gamerunning = true;
int a = 0, b = 0;
int count = 0;
int Xscore = 0;
int emove = 0, evalue = 0;
int health = 10;

main()
{
    system("cls");
    print_board();
    gotoxy(Y, X);
    cout << "Z";
    while (gamerunning)
    {
        Sleep(100);
        //gamerunning = efiring();

        if (GetAsyncKeyState(VK_LEFT))
        {
            count = 0;
            leftmovement();
            gotoxy(b, a);
            cout << " ";
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            count = 0;
            gotoxy(b, a);
            cout << " ";
            rightmovement();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            playerfire();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gamerunning = false;
        }
        gotoxy(74, 9);
        cout << "SCORE: " << Xscore << endl;
        gotoxy(74, 10);
        cout << "HEALTH: " << health << endl;

        if (Xscore == 10)
        {
            gotoxy(74, 11);
            cout << "PLAYER WON!!";
            break;
        }
    }
}

void print_board()
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 56; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}
void leftmovement()
{
    if (board[X][Y - 1] == ' ')
    {
        gotoxy(Y, X);
        cout << " ";
        Y = Y - 1;
        gotoxy(Y, X);
        cout << "Z";
    }
}

void rightmovement()
{
    if (board[X][Y + 1] == ' ')
    {
        gotoxy(Y, X);
        cout << " ";
        Y = Y + 1;
        gotoxy(Y, X);
        cout << "Z";
    }
}