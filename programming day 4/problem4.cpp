#include<iostream>
using namespace std;
main()
{
int day;
cout<<"Enter the date here: ";
cin>>day;

string month;
cout<<"Enter the month here: ";
cin>>month;

if (month == "march" ){
    if(day>21 && day<=31){
        cout<<"ARIES";
    }
}

if (month=="april" ){
    if( day >=1 && day <= 19){
        cout<<"ARIES";
    }
    if (day > 19 && day <= 30){
        cout<<"TAURUS";
    }
}

if (month=="may" ){
    if( day >=1 && day <= 20){
        cout<<"TAURUS";
    }
    if (day >= 21 && day <= 31){
        cout<<"GEMINI";
    }
}

if (month=="june" ){
    if( day >=1 && day <= 20){
        cout<<"GEMINI";
    }
    if (day >=21 && day <= 30){
        cout<<"CANCER";
    }
}

if (month=="july" ){
    if( day >=1 && day <= 22){
        cout<<"CANCER";
    }
    if (day >= 23 && day <= 31){
        cout<<"LEO";
    }
}
if (month=="august" ){
    if( day >=1 && day <= 22){
        cout<<"LEO";
    }
    if (day >= 23 && day <= 31){
        cout<<"VIRGO";
    }
}

if (month=="september" ){
    if( day >=1 && day <= 22){
        cout<<"VIRGO";
    }
    if (day >= 23 && day <= 30){
        cout<<"LIBRA";
    }
}

if (month=="october" ){
    if( day >=1 && day <= 22){
        cout<<"LIBRA";
    }
    if (day >= 23 && day <= 31){
        cout<<"SCORPIO";
    }
}

if (month=="november" ){
    if( day >=1 && day <= 21){
        cout<<"SCORPIO";
    }
    if (day >= 22 && day <= 30){
        cout<<"SAGITTARIUS";
    }
}
if (month=="december" ){
    if( day >=1 && day <= 21){
        cout<<"SAGITTARIUS";
    }
    if (day >= 22 && day <= 31){
        cout<<"CAPRICON";
    }
}

if (month=="january" ){
    if( day >=1 && day <= 19){
        cout<<"CAPRICON";
    }
    if (day >= 20 && day <= 30){
        cout<<"AQUARIUS";
    }
}
if (month=="febuary" ){
    if( day >=1 && day <= 28){
        cout<<"AQUARIUS";
    }
    if (day >= 19 && day <= 31){
        cout<<"PISCES";
    }
}
if (month=="march" ){
    if( day >=1 && day <= 20){
        cout<<"PISCES";
    }
}
}

