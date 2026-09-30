#include<iostream>
using namespace std;

void function( int arr1[] , int size1, int arr2[], int size2)
{
    int c = size1 + size2;
    int arr3 [c];
    cout << c;
    for ( int i = 0; i < c; i++){
         arr3 [c] = arr1[c];
    }
    cout << arr3[0];
}
main()
{
    int arr1[5] = { 1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    function ( arr1 , 5, arr2 , 5);
}