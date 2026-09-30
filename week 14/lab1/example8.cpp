#include<iostream>
using namespace std;

void addone( int *p )
{
    (*p)++; // or *p = 90;
}

main()
{
    int num = 70;
    addone (&num);
    cout << num;
}
    