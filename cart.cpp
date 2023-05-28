#include <iostream>
#include <iomanip>
#include "../../C++/Libraries/my_lib.h"
#include "../../C++/Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

void display_items();
void item_list();

int main()
{
    int item_code;
    char cont;
    clrscr();

    display_items();

    do
    {
        cout << "ENTER THE ITEM CODE : ";
        cin >> item_code;

        cout<<"DO YOU WANT TO ADD ITEMS (y/n): ";
        cin>>cont;

        clrscr();
        display_items();
    } while (cont == 'y');

    clrscr();

    return 0;
}


void item_list()
{
    struct list
    {
        int code;
        int quant;
        int cost;
    }apple, banana, pineapple, mango, orange;
    
    apple.code = 101;
    apple.cost = 50;

    banana.code = 102;
    banana.cost = 30;

    mango.code = 103;
    mango.cost = 75;

    pineapple.code = 104;
    pineapple.cost = 20;

    orange.code = 105;
    orange.cost = 40;
}
void display_items()
{
    cout << " " << setw(50) << "ITEM LIST" << endl;
    cout << "______________________________________________________________________________________" << endl;
    cout << " " << setw(20) <<"ITEM CODE"<< setw(20) << "ITEMS" << setw(30) << "PRICE" << endl;
    cout << "______________________________________________________________________________________" << endl;
    cout << " " << setw(15) <<"101"<< setw(25) << "APPLE" << setw(31) << "50 RS." << endl;
    cout << " " << setw(15) <<"102"<< setw(25) << "BANANA" << setw(31) << "30 RS." << endl;
    cout << " " << setw(15) <<"103"<< setw(25) << "MANGO" << setw(31) << "75 RS." << endl;
    cout << " " << setw(15) <<"104"<< setw(25) << "PINEAPPLE" << setw(31) << "20 RS." << endl;
    cout << " " << setw(15) <<"105"<< setw(25) << "ORANGE" << setw(31) << "40 RS." << endl;
    cout << "______________________________________________________________________________________" << endl;
}