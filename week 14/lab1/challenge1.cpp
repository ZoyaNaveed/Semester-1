#include<iostream>
using namespace std;

main()
{
    int x;
    int *p;
    cout << "enter the number here: ";
    cin >> x;
    p = &x;
    cout << *p;
}
    