#include<iostream>
using namespace std;
main()
{
 string name1,name2,name3;
 int age1,age2,age3;

    cout<< " Enter NAME of first sibling here: ";
    cin>>name1;
    cout<< " Enter AGE of  first sibling here: ";
    cin>>age1;

    cout<< " Enter NAME of second sibling here: ";
    cin>>name2;
    cout<< " Enter AGE of second sibling here: ";
    cin>>age2;

    cout<< " Enter NAME of third sibling here: ";
    cin>>name3;
    cout<< " Enter AGE of third sibling here: ";
    cin>>age3;

if (age1<age2 && age1<age3){
    cout<<"The youngest sibling is "<<name1;
}

if (age2<age1 && age2<age3){
    cout<<"The youngest sibling is "<<name2;
}
if (age3<age1 && age3<age2){
    cout<<"The youngest sibling is "<<name3;
}

}