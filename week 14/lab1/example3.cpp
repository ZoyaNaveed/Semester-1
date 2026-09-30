#include<iostream>
using namespace std;

main()
{
    int num = 7;
    int *p;
    p = &num;
    *p = 6;
    cout << num << endl;
    cout << *p;
}
