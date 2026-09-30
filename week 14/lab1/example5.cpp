#include<iostream>
using namespace std;


void change(int num)
{
   cout << "before adding inside function = " << num << endl;
   num = num + 100;
   cout << "After adding inside function = " << num << endl;
}

main()
{
    int x = 100;
    cout << "before calling function = " << x <<endl;
    change(x);
    cout << "After calling function = " << x << endl;
}

    