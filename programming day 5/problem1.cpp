#include <iostream>
using namespace std;

string generation (int x , char y )
{
string result;

if (x == -3 && y == 'm' ){
    cout << "great grandfather";
}    
if (x == -3 && y == 'f' ){
    cout << "great grandmother";
}   
if (x == -2 && y == 'm' ){
    cout << "grandfather";
}   
if (x == -2 && y == 'f' ){
    cout << "grandmother";
}   
if (x == -1 && y == 'm' ){
    cout << "father";
}   
if (x == -1 && y == 'f' ){
    cout << "mother";
}   
if (x == 0 && y == 'm' ){
    cout << "me!!";
}   
if (x == 0 && y == 'f' ){
    cout << "me!!";
}   
if (x == 1 && y == 'm' ){
    cout << "son";
}   
if (x == 1 && y == 'f' ){
    cout << "daughter";
}   
if (x == 2 && y == 'm' ){
    cout << "grandson";
}   
if (x == 2 && y == 'f' ){
    cout << "granddaughter";
}   
if (x == 3 && y == 'm' ){
    cout << "great grandson";
}   
if (x == 3 && y == 'f' ){
    cout << "great granddaughter";
}   
return result;
}


main(){
    int x;
    char y;
    

    cout << "Enter the number here : ";
    cin >> x;
    cout << "Enter the character here : ";
    cin >> y;
   
    generation (x , y);
}