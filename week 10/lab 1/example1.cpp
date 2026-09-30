#include<iostream>
using namespace std;

int roll_no[] = {1,2,3,4,5};
int age[] = {18, 17, 20, 21, 48};

void function(){
    for (int i = 0; i < 5; i++){
        cout << "ROLL NO. "<<roll_no[i]<<" age is " <<age[i] <<endl;
    }
}
main(){
    function();
}