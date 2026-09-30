#include<iostream>
using namespace std;

string function (char alphabet)
{
string result;

if ( alphabet == 'A'){
    cout << "You have entered Capital A";
}
if ( alphabet == 'a'){
    cout << "You have entered small A";
}
return result;
}

main(){
    char alphabet;
    
    cout << "Enter the alphabet here: ";
    cin >> alphabet;

    function ( alphabet );
}