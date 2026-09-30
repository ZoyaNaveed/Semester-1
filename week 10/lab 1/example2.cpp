#include<iostream>
using namespace std;

int roll_no[] = {31, 32 ,33, 34 ,35 ,36 ,37};
float cgpa[] = {3.5, 3.2, 3.1, 3.4,2.8,3.9,4.0};
int x;

void function(){
cout << "Enter the roll no. here : ";
cin >> x;
    for (int i = 0; i < 7; i++){
        if (x == roll_no[i]){
            cout << "CGPA OF ROLL NO. " << roll_no[i] << " IS:" << "\t" << cgpa[i];
        }
    }
}
main(){
    function();
}