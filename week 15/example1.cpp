#include <iostream>
using namespace std;

struct laptopType
{
    string manufacturer;
    string model;
    float processor;
    int ram;
    int hardsize;
    int generation;
    double price;
    laptopType *next;
};

laptopType *head = NULL;
laptopType input();
laptopType s[5];
void display(laptopType s);

main()
{
    for (int i = 0; i < 5; i++)
    {
        s[i] = input();
    }
    for (int i = 0; i < 5; i++)
    {
        display(s[i]);
    }
}
laptopType input()
{
    laptopType z;

    cout << "Enter the following data:- " << endl;
    cout << endl;
    cout << "Enter manufacturer's name: ";
    cin >> z.manufacturer;
    cout << "Enter model here: ";
    cin >> z.model;
    cout << "Enter processor type here: ";
    cin >> z.processor;
    cout << "Enter RAM here: ";
    cin >> z.ram;
    cout << "Enter hard drive here: ";
    cin >> z.hardsize;
    cout << "Enter generation here: ";
    cin >> z.generation;
    cout << "Enter price here: ";
    cin >> z.price;
    return z;
}
void display(laptopType s)
{
    cout << "INFO ENTERED: " << endl;
    cout << endl;
    cout << s.manufacturer << endl;
    cout << s.model << endl;
    cout << s.processor << endl;
    cout << s.ram << endl;
    cout << s.hardsize << endl;
    cout << s.generation << endl;
    cout << s.price;
}