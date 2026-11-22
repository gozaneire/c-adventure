//11/16/26

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int doubleMultiply(int a, int b) { //The function here runs the following code when given integers a and b.
    int product;
    product = a * b * 2;
    return product;
}

double getSum(double a, double b, double c) { //This function accepts three parameters and adds them.
    double result;
    result = a + b + c;
    return result;
}
int main() {
    double first;
    cout << "Type in a floating-point number: \t";
    cin >> first;
    if (first > 0) {
        cout << "Square root: " << round(sqrt(first)*100)/100 << endl; //I use "round" to round to the nearest hundredth.
        cout << "4th power: " << round(pow(first,4)*100)/100 << endl;
        cout << "Highest integer: " << floor(first) << endl;
    }

    int num1, num2;
    cout << "\nEnter two integers: \t";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
        << doubleMultiply(num1, num2) << endl; //The function will return a product using num1 and num2.

    double star, diamond, niclas;
    cout << "\nEnter three floats separated by spaces: \t";
    cin >> star >> diamond >> niclas;
    cout << "The sum of all three floating numbers are: "
        << round(getSum(star, diamond, niclas)*100)/100 << endl; //The three inputted numbers will be added and rounded.
}
