#include<iostream>
using namespace std;

void display (int *p)
{
    cout << *p << "\t";
}
main()
{
    int array[5] = { 0,1,2,3,4};
    for ( int i = 0; i < 5; i++)
    {
        display ( &array[i]);
    }
}
