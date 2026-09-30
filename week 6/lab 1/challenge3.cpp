#include<iostream>
using namespace std;

float result (float number1 , float number2 , string oper )
{

float result;

if ( oper == "+"){
    result = (number1 + number2);
    cout<< "The sum of two numbers is "<<result;
}
if ( oper == "-"){
    result = (number1 - number2);
    cout<< "The subtraction of two numbers is "<<result;
}
if ( oper == "*"){
    result = (number1 * number2);
    cout<< "The multiplication of two numbers is "<<result;
}
if ( oper == "/"){
    result = (number1 / number2);
    cout<< "The division of two numbers is "<<result;
}
 return result;
}

main(){
    int num1;
    int num2;
    string op;

    cout << "Enter the number here ";
    cin >> num1;
    cout << "Enter the number here ";
    cin >> num2;
    cout << "Enter the operator here ";
    cin >> op; 

     result(num1 , num2 , op);
}