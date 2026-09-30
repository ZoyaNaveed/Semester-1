#include<iostream>
using namespace std;

void function ( int *p);
main()
{
    int num;
    cout << "Enter the number here: ";
    cin >> num;
    function ( &num);
}
void function(int *p)
{
    cout << *p;

}
