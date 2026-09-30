#include<iostream>
using namespace std;

void message()
{
    char x = 'y';
    while (x == 'y'){
    cout << "I'm happy" << endl;
    cout << "press y to continue and any key to exit ";
    cin >> x;
    }
}

main(){
    
    message();
}
