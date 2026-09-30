#include<iostream>
using namespace std;

int roll_no[] = {31, 32 ,33, 34 ,35 ,36 ,37};
float cgpa[] = {3.5, 3.2, 3.1, 3.4,2.8,3.9,4.0};
int x, j;

void function(){
    x = cgpa[0];
    for (int i = 0; i < 7; i++){
        if (cgpa[i] > x){
            x = cgpa[i];
            j = i;
        }
    }
    cout << "The HIGHEST CGPA IS OF ROLL NO. "<< roll_no[j] <<" IS " <<x;
}
main(){
    function();
}
