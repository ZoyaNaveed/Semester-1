#include<iostream>
using namespace std;

int vote (int age)
{
int vote;
if ( age >= 18 ){
    cout<<"ELIGIBLE";
}
else{
    cout<<"NOT ELIGIBLE";
}
return vote;
}

main()
{
    int age;

    cout <<"Enter your age here ";
    cin >> age;

    vote (age);
}