#include<iostream>
using namespace std;
main()
{


char service;
cout<<"enter the service type here (r/p): ";
cin>>service;

float minutes;
cout<<"Enter the number of minutes here: ";
cin>>minutes;

if (service == 'R' || service == 'r'){
    cout<<"The service is regular service."<<endl;
}

cout<<"The minutes used are "<<minutes<<endl;

//regular service

if (minutes < 50){
cout<<"10$ and free first 50 minutes" ;  
}

if (minutes > 50){
float per_min;
per_min=( minutes*0.20 );
cout<<"The charges are "<<per_min<<"$";   
}

//premium service
string dn;

if (service == 'P' || service == 'p'){
    cout<<"The service is premium service."<<endl;
    cout<<"Enter D for daytime and N for nighttime: ";
    cin>>dn;

if (minutes <= 75 ){
    cout<<"25$ and first 75 minutes are free";
}

if (time=="day" && minutes > 75){
    float per_min1;
    per_min1=(minutes*0.10);
        cout<<"The charges are "<<per_min1<<"$";
    }
}

if (minutes <= 100 ){
    cout<<"first 100 minutes are free";
}

if (time== "night" && minutes > 100){
    float per_min2;
    per_min2=(minutes*0.05);
        cout<<"The charges are "<<per_min2<<"$";
    }
}
}
}