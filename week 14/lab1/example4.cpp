#include<iostream>
using namespace std;

main()
{
    int c = 5 , d = -15;
    int *p;
    p = &c;
    cout << *p << endl;
    p = &d;
    cout << *p ;
}