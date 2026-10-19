#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float weight;
    float minutes;

    cout << "Enter weight in kilograms.\n";
    cin >> weight; //Allows the user to input an value.
    cout << "Enter how many minutes allotted for a workout.\n";
    cin >> minutes;

    cout << "Calories burned:\n\nWalking slowly: " << fixed << setprecision(2) << (minutes*2*3.5*weight)/200 << endl; //Calculates stats for each without manual input
    cout << "Walking quickly: " << fixed << setprecision(1) << (minutes*3*3.5*weight)/200 << endl;
    cout << "Running: " << fixed << setprecision(1) << (minutes*8.8*3.5*weight)/200 << endl;

    double calories;

    cout << "\nEnter projected calories to burn.\n";
    cin >> calories;
    cout << setfill('-'); //Fills empty space with an hashtag
    cout << setw(20) << '-' << endl;
    cout << "Projected minutes:" << endl;
    cout << setw(20) << '-' << endl;
    cout << "Walking slowly:\t\t" << fixed << setprecision(0) << (calories*200)/(2*3.5*weight) << endl; //Sets each line to the same index
    cout << "Walking quickly:\t" << fixed << setprecision(0) << (calories*200)/(3*3.5*weight) << endl;
    cout << "Running:\t\t" << fixed << setprecision(0) << (calories*200)/(8.8*3.5*weight) << endl;

    return 0;
}
