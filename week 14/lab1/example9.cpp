#include<iostream>
using namespace std;

void square ( int *p)
{
    *p = *p * *p;
}
main()
{
    int x = 2;
    square ( &x );
    cout << x;
}
