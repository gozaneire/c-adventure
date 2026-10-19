//October 5, 2026

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string cerealName;
    float calories; //Converting all variables to floats because we use division
    float ounces;
    float maxCalories;

    cout << "Enter a name for your cereal.\n";
    cin >> cerealName; //Assign the cereal name the input of "cin"
    cout << "Enter number of calories in an serving as an integer.\n";
    cin >> calories;
    cout << "Enter number of ounces in an serving as an integer.\n";
    cin >> ounces;
    cout << "Grams per serving: " << fixed << setprecision(2) << ounces*28.3495 << endl;

    float caloriesPerOunce = calories / ounces; //This is why floats are useful here because "per ounce" uses decimals

    cout << "One serving of " << cerealName << " is " << ounces << " ounces and has " << fixed << setprecision(2) << caloriesPerOunce << " calories per ounce." << endl;

    cout << "How many calories are you willing to eat at maximum today?\n"; //I set an maximum calorie value to use as a divisor
    cin >> maxCalories;

    float maxOunces = maxCalories / caloriesPerOunce;
    float servings = maxCalories / calories;

    cout << "You can eat an maximum of " << fixed << setprecision(1) << maxOunces << " ounces before reaching your calory limit." << endl; //Used setprecision to limit decimal value to the tenth place
    cout << "You can also eat an maximum of " << fixed << setprecision(1) << servings << " servings before reaching your calory limit." << endl;

    float caloriesPerGram = maxOunces*28.3495; //Extra because I have time.

    cout << "When converted, you can eat " << fixed << setprecision(2) << caloriesPerGram << " calories per gram." << endl;
    return 0;
}
