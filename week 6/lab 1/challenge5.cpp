#include<iostream>
using namespace std;

int maximum (int a, int b , int c,int d)
{
    int result;
if ( a > b && a > c && a > d){
    cout << a << endl;
}
if ( b > a && b > c && b > d){
    cout << b << endl;
}
if ( c > a && c > d && c > b){
    cout << c << endl;
}
if ( d > a && d > b && d > c){
    cout << d << endl;
}
return result;
}

int minimum ( int a , int b, int c ,int d){

int result;

if ( a < b && a < c && a < d){
    cout << a << endl;
}
if ( b < a && b < c && b < d){
    cout << b << endl;
}
if ( c < a && c < d && c < b){
    cout << c << endl;
}
if ( d < a && d < b && d < c){
    cout << d << endl;
}
return result;
}

main()
{
    int a , b ,c ,d;

    cout << "Enter the number here : ";
    cin >> a;
    cout << "Enter the number here : ";
    cin >> b;
    cout << "Enter the number here : ";
    cin >> c;
    cout << "Enter the number here : ";
    cin >> d;

    maximum (a , b , c , d);
    minimum (a , b , c , d);

}