#include<iostream>
using namespace std;

float taxcalculator ( char type , float price)
{
    float tax_amount;
    float final_price;

if ( type == 'M' ){
    tax_amount = price * 0.06 ;
    final_price = price + tax_amount;
    cout << "The final price of vehicle type M is "<< final_price;
}
if ( type == 'E' ){
    tax_amount = price * 0.08 ;
    final_price = price + tax_amount;
    cout << "The final price of vehicle type E is "<< final_price;
}
if ( type == 'S' ){
    tax_amount = price * 0.1 ;
    final_price = price + tax_amount;
    cout << "The final price of vehicle type S is "<< final_price;
}
if ( type == 'V' ){
    tax_amount = price * 0.12 ;
    final_price = price + tax_amount;
    cout << "The final price of vehicle type V is "<< final_price;
}
if ( type == 'T' ){
    tax_amount = price * 0.15 ;
    final_price = price + tax_amount;
    cout << "The final price of vehicle type T is "<< final_price;
}
return final_price;

}

main ()
{
    float price;
    float tax_amount;
    float final_price;
    char type;
    
    cout << "Enter the vehicle type here :";
    cin >> type;
    cout <<"Enter the vehicle price here : ";
    cin >> price;

    taxcalculator ( type , price);


}
