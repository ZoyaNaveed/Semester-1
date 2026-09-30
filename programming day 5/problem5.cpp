#include <iostream>
using namespace std;

int cat (int human_years)
{
int cat_years = 0;

if (human_years == 1 ){
    cat_years = 15;
    cout << "Cat years : " << cat_years << endl;;
}
 if (human_years > 1 && human_years <= 2){
    cat_years = 15 + 9;
    cout << "Cat years : " << cat_years << endl;;
}
if (human_years > 2){

    cat_years = 15 + 9 + ((human_years - 2) * 4);
    cout << "Cat years : " << cat_years << endl;
}
return cat_years;
}

int dog (int human_years)
{
    int dog_years = 0;

if (human_years == 1 ){
    dog_years = 15;
    cout << "Dog years : " << dog_years << endl;
}
if (human_years > 1 && human_years <= 2){
    dog_years = 15 + 9;
    cout << "Dog years : " << dog_years << endl;
}
 if (human_years > 2){
    dog_years = 15 + 9 + ((human_years - 2) * 5);
    cout << "Dog years : " << dog_years << endl;
}
return dog_years;
}

main()
{
    int human_years;
    int cat_years;
    int dog_years;

    cout<< "Enter number of human years here: ";
    cin >> human_years;

    cout << "Human years : "<<human_years << endl;

    cat (human_years);
    dog (human_years);
  
    
}