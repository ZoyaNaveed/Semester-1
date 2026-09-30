#include <iostream>
#include <windows.h>
#include <time.h>
#include <fstream>
using namespace std;

char board[25][71] = {
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
void efiring();
void fire1();
void fire2();
void fire3();
void fire4();
void fire5();
void fire6();
void fire7();
void fire8();
void fire9();
void fire10();
void healthdecrease();
void mazeintofile();
void mazefromfile();
void HideCursor();
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

int X = 22, Y = 5; // Zmovement
bool gamerunning = true;
int a = 0, b = 0;
int count = 0;
int Xscore = 0;
int emove = 0, evalue = 0;
int health = 8;
int EX, EY;
char bullet;

main()
{
    system("cls");
    mazeintofile();
    mazefromfile();
    HideCursor();
    gotoxy(Y, X);
    cout << "Z";
    SetConsoleTextAttribute(h,13);

    while (gamerunning)
    {
        Sleep(100);
            efiring();
            fire1();
            fire2();
            fire3();
            fire4();
            fire5();
            fire6();
            fire7();
            fire8();
            fire9();
            fire10();
         healthdecrease();
        if (GetAsyncKeyState(VK_LEFT))
        {
            count = 0;
            leftmovement();
            if (board[a][b] != '|')
            {
                gotoxy(b, a);
                cout << " ";
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            count = 0;

            rightmovement();
            if (board[a][b] != '|')
            {
                gotoxy(b, a);
                cout << " ";
            }
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
        cout << "LIVES: " << health << endl;

        if (Xscore == 10)
        {
            gotoxy(74, 11);
            SetConsoleTextAttribute(h,2);

            cout << "PLAYER WON!!";
            break;
        }
        if (health == 0)
        {
            gotoxy(74, 11);
            SetConsoleTextAttribute(h,4);
            cout << " PLAYER LOST :(";
            break;
        }
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

void playerfire()
{
    if (count == 0)
    {
        a = X - 1;
        b = Y;
        if (board[a][b] != '|')
        {
            gotoxy(b, a);
            cout << ".";
            count = count + 1;
        }
    }
    else if (count > 0 && count < 20)
    {
        gotoxy(b, a);
        cout << " ";
        a = a - 1;
        b = Y;
        gotoxy(b, a);
        cout << ".";
        count = count + 1;
    }
    else if (count == 20)
    {
        gotoxy(b, a);
        cout << " ";

        a = a - 1;
        b = Y;
        if (board[a][b] != ' ')
        {
            gotoxy(b, a);
            cout << "X";
            board[a][b] = ' ';
            Xscore = Xscore + 1;
        }
        count = count + 1;
    }
}

int enemyrandomfiring()
{
    srand(time(0));
    emove = 1 + rand() % 10;
    return emove;
}

void efiring()
{
    evalue = enemyrandomfiring();
    bool A1, A2, A3, A4, A5, A6, A7, A8, A9, A10;

    for (int i = 0; i < 22; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'o')
            {
                A1 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 4; j < 7; j++)
        {
            if (board[i][j] == 'o')
            {
                A2 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 8; j < 11; j++)
        {
            if (board[i][j] == 'o')
            {
                A3 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 12; j < 15; j++)
        {
            if (board[i][j] == 'o')
            {
                A4 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 16; j < 19; j++)
        {
            if (board[i][j] == 'o')
            {
                A5 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 20; j < 23; j++)
        {
            if (board[i][j] == 'o')
            {
                A6 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 23; j < 27; j++)
        {
            if (board[i][j] == 'o')
            {
                A7 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 28; j < 31; j++)
        {
            if (board[i][j] == 'o')
            {
                A8 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 32; j < 35; j++)
        {
            if (board[i][j] == 'o')
            {
                A9 = 1;
            }
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 36; j < 39; j++)
        {
            if (board[i][j] == 'o')
            {
                A10 = 1;
            }
        }
    }
    if (evalue == 1)
    {
        if (!A1)
        {
            EX = 2;
            EY = 2;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 2)
    {
        if (!A2)
        {
            EX = 2;
            EY = 6;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 3)
    {
        if (!A3)
        {
            EX = 2;
            EY = 10;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 4)
    {
        if (!A4)
        {
            EX = 2;
            EY = 14;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 5)
    {
        if (!A5)
        {
            EX = 2;
            EY = 18;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 6)
    {
        if (!A6)
        {
            EX = 2;
            EY = 22;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 7)
    {
        if (!A7)
        {
            EX = 2;
            EY = 26;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 8)
    {
        if (!A8)
        {
            EX = 2;
            EY = 30;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 9)
    {
        if (!A9)
        {
            EX = 2;
            EY = 34;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
    if (evalue == 10)
    {
        if (!A10)
        {
            EX = 2;
            EY = 38;
            if (board[EX - 1][EY] == 'E')
            {
                gotoxy(EY, EX);
                cout << "o";
                board[EX][EY] = 'o';
                bullet = board[EX][EY];
            }
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void fire1()
{
    for (int i = 22; i > 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire2()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 3; j < 7; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire3()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 7; j < 11; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire4()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 11; j < 15; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire5()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 16; j < 19; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire6()
{
    for (int i = 22; i > 0; i--)
    {
        for (int j = 20; j < 23; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire7()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 24; j < 27; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire8()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 28; j < 31; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire9()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 32; j < 35; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void fire10()
{

    for (int i = 22; i > 0; i--)
    {
        for (int j = 35; j < 39; j++)
        {
            if (board[i][j] == 'o')
            {
                gotoxy(j, i);
                cout << bullet;
                board[i][j] = bullet;
                bullet = board[i + 1][j];
                gotoxy(j, i + 1);
                cout << "o";
                board[i + 1][j] = 'o';
            }
            if (i == 22)
            {
                gotoxy(j, i + 1);
                cout << " ";
                board[i + 1][j] = ' ';
            }
        }
    }
}
void mazeintofile()
{
    fstream file;
    file.open("gamemaze.txt" , ios::out);
    for ( int x = 0; x < 25; x++)
    {
        for ( int y = 0; y < 41; y++)
        {
            file << board[x][y];
        }
        file << '\n';
    }
    file.close();
}
void mazefromfile()
{
    string n;
    fstream nfile;
    nfile.open ("gamemaze.txt", ios::in);
    while (!nfile.eof())
    {
        getline(nfile , n);
        SetConsoleTextAttribute(h,3);

        cout << n << endl;
    }
}
void HideCursor()
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon, &cci);
}
void healthdecrease()
{
    if (board[X][Y] == 'o')
    {
    health = health - 1;
}
}




