#include <iostream>
using namespace std;

float pyramidvolume (float length , float width , float height, string units){
    float result;
    float cal1;
    float volume;

    cal1 = length * width * height;
    volume = (cal1 / 3);

if (units == "centimeters"){
    volume = volume * 1000000;
    cout << volume <<" cubic centimeters";
}
if (units == "millimeters"){
    volume = volume * 1000000000;
    cout << volume << " cubic millimeters";
}
if (units == "kilometers"){
    volume = volume / 1000000000;
    cout << volume << " cubic kilometers";
}
    
return result;
} 


main()
{
    float length;
    float width;
    float height;
    string units;

    cout << "Enter the length here :";
    cin >> length;
    cout << "Enter the width here : ";
    cin >> width;
    cout << "Enter the height here : ";
    cin >> height;
    cout << "Enter the units here : ";
    cin >> units;

    pyramidvolume (length , width , height , units );


}