#include<iostream>
using namespace std;

main()
{

int h;
cout<< "Enter the value of h here: ";
cin>> h;

int x;
cout<< "Enter the vale of coordinate of x here :";
cin>> x;

int y;
cout<< "Enter the value of coordinate of y here :";
cin>> y;

if ((x >= 0 && x <= 3 * h) && y == 0){
        cout<< "The point lies on the border";
}

else if (x == 0 && y == h){
        cout<< "The point lies on the border";
}

else if (x == 3 * h && y == h ){
        cout<< "The point lies on the border";
}

else if (x == 2 * h && (y == h || y == 2 * h || y == 3 * h || y == 4 * h)){
        cout<< "The point lies on the border";
}

else if (x == h && (y == h || y == 2 * h || y == 3 * h || y == 4 * h)){
        cout<< "The point lies on the border";
}

else if (x > 0 && x < 3 * h && y == 0 ){
        cout<< "The point lies on the inside";
}

else if (x > 0 && x < 3 * h && y < h){
        cout<< "The point lies on the inside";
}

else if (x > h && x < 2 * h &&(y < 4 * h && y >h)){
         cout<< "The point lies on the inside";
}

else{
        cout<< "The point lies on the outside";
}
}
