#include<iostream>
using namespace std;
main()
{
char x;
cout<< "enter here";
cin>>x;
if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
cout<<"vowels";
}
else{

if (x=='0'||x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'){
cout<<"numbers";
}
else{
cout<< "consonants";
}
}
}