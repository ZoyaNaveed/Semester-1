#include<iostream>
using namespace std;

int series (int numberseries){
int num1 = 0 ,num2 = 1;
cout << num1 <<","<<num2;
int sum = 0;
for (int i = 1 ; i <= numberseries - 2 ; i = i + 1){
    sum = num1 + num2;
    cout <<","<< sum;
    num1 = num2;
    num2 = sum;
}
return sum;
}
main(){
    int numberseries;
    cout << "Enter how many numbers you want to see on the console: ";
    cin >> numberseries;

    series ( numberseries);

}