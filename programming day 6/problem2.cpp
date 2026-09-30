#include<iostream>
using namespace std;

void dots (int num);

main(){
    int num;
    cout << "Enter the number of dots here: ";
    cin >> num;

    dots( num );
}
void dots (int num){
    int sum = 0;

    for (int i = 1 ; i <= num ; i++){
        sum = sum + i;
}
    cout << sum <<endl;

}
