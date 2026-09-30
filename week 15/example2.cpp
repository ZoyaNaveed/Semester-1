#include <iostream>
using namespace std;

struct laptopType
{
    string manufacturer;
    string model;
    float processor;
    int ramsize;
    int hardsize;
    int generation;
    double pricelaptop;
    laptopType *next;
};

laptopType *head = NULL;
string manu;
string mode;
float pro;
int ram, hard, gene, price;

void input();
void display();
void addRecord (string manu, string model, float pro, int  ram, int hard, int gene, int price);
laptopType *getlastrecord (laptopType *temp);
void printrecords ( laptopType *l);
main()
{
    input();
    input();
    display();
}
void input()
{
    cout << "Enter the following data:- " << endl;
    cout << endl;
    cout << "Enter manufacturer's name: ";
    cin >> manu;
    cout << "Enter model here: ";
    cin >> mode;
    cout << "Enter processor type here: ";
    cin >> pro;
    cout << "Enter RAM here: ";
    cin >> ram;
    cout << "Enter hard drive here: ";
    cin >> hard;
    cout << "Enter generation here: ";
    cin >> gene;
    cout << "Enter price here: ";
    cin >> price;
    addRecord (manu, mode, pro, ram, hard, gene, price);
}

void addRecord (string manu, string mode, float pro, int  ram, int hard, int gene, int price)
{
    laptopType *record = new laptopType;
    record->manufacturer = manu;
    record->model = mode;
    record->processor = pro;
    record->ramsize = ram;
    record->hardsize = hard;
    record->generation = gene;
    record->pricelaptop = price;
    record->next = NULL;
    if (head == NULL)
    {
        head = record;
    }
    else{
        laptopType *temp = getlastrecord(head);
        temp->next = record;
    }
}
laptopType *getlastrecord (laptopType *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

void printrecords ( laptopType *l)
{
    laptopType s;
    //cout << "INFO ENTERED: " << endl;
    cout << endl;
    cout << s.manufacturer << endl;
    cout << s.model << endl;
    cout << s.processor << endl;
    cout << s.ramsize << endl;
    cout << s.hardsize << endl;
    cout << s.generation << endl;
    cout << s.pricelaptop;
}
void display ()
{
    laptopType *temp;
    while ( temp != NULL)
    {
        printrecords (temp);
        temp = temp->next;
    }
}