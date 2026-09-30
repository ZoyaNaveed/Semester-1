#include<iostream>
using namespace std;

int x, i,j;
int array[100];
int count = 0;
int findOdd(){
    cout << "Enter the length of array ";
    cin >> x;
    cout << "Enter the numbers " <<endl;
    for (i = 0; i < x; i++) {
        cin >> array[i];
    }

    for ( i = 0; i < x; i++){
        for (j = 0; j < x; j++){
            if (array[i] == array[j]){
                count = count + 1;
            }
        }
            if ( count % 2 != 0){
                return array[i];
            }
    }
}
main(){
    cout <<"The odd number is" << findOdd();
}
        
        
    

