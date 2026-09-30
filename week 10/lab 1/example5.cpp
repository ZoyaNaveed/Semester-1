#include <iostream>
using namespace std;

string o_name[5];
int o_age[5];
int i, j,temp;
string temp1;
void input()
{
    for (i = 0; i < 5; i++)
    {
        cout << "Enter name here: ";
        cin >> o_name[i];
        cout << "Enter age here: ";
        cin >> o_age[i];
    }
}
void largest_value(){
for (i = 0; i < 5; i++){
    for ( j = i + 1; j <= 4; j++){
        if (o_age[j] < o_age[i]){
            temp = o_age[j];
            o_age[j] = o_age[i];
            o_age[i] = temp;
            temp1 = o_name[j];
            o_name[j] = o_name[i];
            o_name[i] = temp1;
            }
        }
    }
}
void display(){
    cout << "NAME" <<"\t" << "AGE" <<endl;
    for ( i = 0; i < 5; i++){
        cout << o_name[i] << "\t" << o_age[i] << endl;
}
}

main(){
    input();
    largest_value();
    display()
}