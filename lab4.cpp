//10/19/26

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string fruit;
    float grams;
    int count = 0;
    int count_two = 0;

    cout << "Give an name for your fruit and it's sugar content by cups.\n";
    cin >> fruit >> grams;
    count = count + 1;
    count_two = count_two + 1;

    const float tsp = grams/4;

    while (count != 0) {
        if (grams < 10) {
            cout << "LOW SUGAR FRUIT" << endl;
        }
        else if (grams >= 10 and grams <= 14) {
            cout << "MEDIUM SUGAR FRUIT" << endl;
        }
        else {
            cout << "HIGH SUGAR FRUIT" << endl;
        } //Three statements for each sugar content level.
        count = count - 1;
    }

    while (count_two != 0) {
        cout << "The fruit has " << tsp << " teaspoons." << endl;

        if (tsp < 3) {
            cout << "This fruit is a great low-sugar option!" << endl;
        }
        else if (tsp >= 3 and tsp <= 6) {
            cout << "Enjoy in moderation." << endl;
        }
        else {
            cout << "This fruit is high in sugar-limit portion size." << endl;
        } //Three statements for each sugar per teaspoon content level.
        count_two = count_two - 1;
    }

    cout << "\n" << fruit << "\t(" << grams << "g): ";

    while (grams > 0) {
        cout << "*";
        grams = grams-1;
    }
}
