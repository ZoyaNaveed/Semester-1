#include<iostream>
using namespace std;

char code[] = {'a', 'b', 'c', 'd', 'e'};
float discount[] = {0.25, 0.10, 0.20, 0.30, 0.50};
int price_per_item, total_item;
char dis_code;
int cal, total_bill , multi ;
int x;
void function(){
    cout << "Enter the price per item : ";
    cin >> price_per_item;
    cout << "Enter total items: ";
    cin >> total_item;
    cout << "Enter discount code here: ";
    cin >> dis_code;
multi = (total_item * price_per_item);

    for (int i = 0; i < 5; i++){
        if (dis_code == code[i]){
            x = i;
        }
    }
    cal = multi * discount [x];
    total_bill = multi - cal;
    cout << total_bill;
}
main(){
    function();
}