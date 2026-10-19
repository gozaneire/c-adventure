//9-30

#include <iostream>
#include <string>
using namespace std;

int main() {
    double total = 0; //using double for total due to tax and price multiplication
    int Discount = -1; //Used everytime when making a purchase to lure customers to thinking they're getting a good deal like White Castle
    bool Oregon = false; //Boolean to determine whether if sales tax is applied
    char unit = 36; // Assigns a character corresponding to it's ASCII decimal code
    char tax = 37;
    float chocolate = 2.00; //The following floats are items of the items and their prices in the shop. I used a float so decimals would be able to added instead of integers.
    float sourCandy = 1.50;
    float chewCandy = 1.50;
    float jellyBeans = 4.19;
    float chips = 2.50;
    float ferreroRocher = 6.59;
    float noSugarDrink = 2.29;
    float york = 1.39;
    float cookies = 2.39;
    float celery = 1.19;
    float spicyTubes = 5.59;
    float caviar = 499.99;
    string stock = "Chocolate = 2.00\n Sour Candy = 1.50\n Chewing Candy = 1.50\n Jelly Beans = 4.19\n Chips = 2.50\n Ferrero Rocher = 6.59\n No Sugar Drink = 2.29\n York = 1.39\n Cookies = 2.39\n Celery = 1.19\n Spicy Sticks = 5.59\n Caviar = 499.99\n"; //Thought we were making an entire tycoon

    cout << "2+5 = " << 2+5 << "\n" << endl;
    cout << "13+89 = " << 13+89 << "\n" << endl;
    cout << "34-20 = " << 34-20 << "\n" << endl;
    cout << "45-90 = " << 45-90 << "\n" << endl;
    cout << "2*7 = " << 2*7 << "\n" << endl;
    cout << "5/2 = " << 5/2 << "\n" << endl;
    cout << "14/7 = " << 14/7 << "\n" << endl;
    cout << "34%5 = " << 34%5 << "\n" << endl;
    cout << "4%6 = " << 4%6 << "\n" << endl;
    cout << "5.0+3.5 = " << 5.0+3.5 << "\n" << endl;
    cout << "3.0+9.4 = " << 3.0+9.4 << "\n" << endl;
    cout << "16.3-5.2 = " << 16.3-5.2 << "\n" << endl;
    cout << "4.2*2.5 = " << 4.2*2.5 << "\n" << endl;
    cout << "5.0/2.0 = " << 5.0/2.0 << "\n" << endl;
    cout << "34.5/6.0 = " << 34.5/6.0 << "\n" << endl;
    cout << "34.5/6.5 = " << 34.5/6.5 << "\n" << endl;

    cout << unit << "\"36\"" << " is smaller than " << tax << "\"37\"" << "\n" << endl; //This statement is used to compare the value of each boolean.

    cout << "2 + 3.5 =" << 2 + 3.5 << endl;
    cout << "6/4 + 3.9 =" << 6/4 + 3.9 << endl;
    cout << "5.4 * 2 - (13.6 + 18/2) =" << 5.4 * 2 - 22.6 << "\n" << endl; //Copying the equation printed and solved

    int six = 6;
    int four = 4;
    double decimalFour = 4.0;

    cout << "6 / 4" << six - four << "\n6 / 4.0" << six - decimalFour << endl; // 6 divided by 4 is 1 because each number is an integer meaning no decimal remainders while 6 divided by 4.0 is 1.5 because "double" converts 4.0 to an float allowing the dividend to have an decimal value
    return 0; //To exit code
}
