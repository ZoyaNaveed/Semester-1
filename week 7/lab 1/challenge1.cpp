#include<iostream>
using namespace std;

void print_table (int number);

main(){
    int n1,n2,n3;
    cout << "Enter the number here : ";
    cin >> n1;
    cout << "Enter the number here : ";
    cin >> n2;
    cout << "Enter the number here : ";
    cin >> n3;
    cout << "The table of "<<n1 <<" is :"<<endl;
    print_table (n1);
    cout <<endl;
    cout << "The table of "<<n2 <<" is :"<<endl;
    print_table (n2);
    cout <<endl;
    cout << "The table of "<<n3 <<" is :"<<endl;
    print_table (n3);
}

void print_table (int number){
    int result = 0;
    for (int i = 1 ; i <= 10; i ++ ){
        result = number * i;
        
        cout << result <<endl;
    }
}