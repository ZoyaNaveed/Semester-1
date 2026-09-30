#include<iostream>
using namespace std;

void bound (int num);

main(){
    int num;
    cout << "Enter the number here : ";
    cin >> num;
    
    bound (num);
}

void bound (int num){

for (int i = 1 ; i <= num ; i++){
    
    int amplify = 0;
    int x = (i % 4);
    if (x == 0){
        amplify = i * 10;
        cout << amplify <<endl;
    }
    else{
        cout << i <<endl;
    }
}
}
