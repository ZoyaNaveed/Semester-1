#include<iostream>
using namespace std;

int a;
// (int array[] , array size)
double average( int array[], int size);
main()
{
    int array[5] = {1000,2,3,17,50};
    double avg;
    avg = average (array, 5);
    cout << avg;
}
double average(int array[], int size)
{
    double d;
    for ( int i = 0; i < size; i++)
    {
        a += array[i];
    }
    d = double (a) / size;
    return d;
}
