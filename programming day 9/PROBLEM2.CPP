#include<iostream>
using namespace std;

int x,i, j, y;//index stored 
int o_array[100];
int n_array[100];
int count = 0;
void function(){
    cout << "HOW MANY ELEMENTS YOU WANT TO ENTER: ";
    cin >> x;
    for ( i = 0; i < x; i++){
        cout << "Enter the numbers here: ";
        cin >> o_array[i];
    }
    for ( i = 1; i < x; i++){
        if (o_array[i] > o_array[i - 1] && o_array[i] > o_array[i + 1]){
            y = o_array[i];
            cout << y <<endl;
    }
}
}
main(){
    function();
}