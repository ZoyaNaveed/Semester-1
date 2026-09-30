#include<iostream>
using namespace std;

string pasta[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
int num[5];
int i;

void function(){
    for ( i = 0; i < 5; i++){
        cout << "Enter the number of pasta here: ";
        cin >> num[i];
        num [i] = sales[i];
    }//input
    for (i = 0; i < 5; i++){
        cout << "SALES FOR EACH PASTA TYPE: " << endl;
        cout << "For " << pasta[i] << " = "<< sales[i] <<endl;
    }
    
}
main(){
    function();
}