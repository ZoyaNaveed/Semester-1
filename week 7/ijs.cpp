#include<iostream>
using namespace std ;

void percent1 (int n){
    float count_2 = 0,count_3 = 0,count_4 = 0;
    int m ;  
    float p1 = 0, p2 = 0, p3 = 0 ;
    
    for(int i = 1; i <= n; i++){
        cout << "enter a number: " ;
        cin >> m ;

        if(m % 2 == 0){
            count_2 = count_2 + 1 ;
            

        }
        
        if(m % 3 == 0){
            count_3 = count_3 + 1 ;
            

        }

        if(m % 4 == 0){
            count_4 = count_4 + 1 ;
            

        }

     
    }
        
    p1 = (count_2 / n) * 100.0 ;
    p2 = (count_3 / n) * 100.0 ;
    p3 = (count_4 / n) * 100.0 ;

    cout << "2." << p1 << endl ;
    cout << "3." << p2 << endl;
    cout << "4." << p3 << endl;
}


main(){
    int n ;
    cout << "enter range: " ;
    cin >> n ;

    percent1 ( n);
}