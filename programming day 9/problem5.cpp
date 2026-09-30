#include<iostream>
using namespace std;

int x, i, temp, j, count;
int array[100];
void cons(){
    cout << "Enter length of array: ";
    cin >> x;
    cout << "Enter the numbers here: ";
    for ( i = 0; i < x; i++){
        cin >> array[i];
    }
//sorting
    for ( i = 0 ; i < x; i++){
        for ( j = i + 1; j < x; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

        }//inner loop
    }//outer loop
    for (i = 1; i < x; i++){
        for (j = i - 1; j < x; j++){
        if (array[i] == array[j] + 1 && array[i] != array[j]){
            count = count + 1;
            break;
        }
        }
    }
    if (count == x - 1){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }

}//end of function

main(){
    cons();
}