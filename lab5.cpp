//10/26/2026 — 11/05/2026

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    float weightkg = 0;

    while (weightkg <= 0) {
        cout << "How heavy are you in kilograms?" << endl;
        cin >> weightkg;
    }

    char hash = '-';

    while (true) {
        bool valid = false;
        int choice = 0;
        float minutes = 0;


        string activityname = "FILLER_NO_INPUT";
        float met = 0;

        while (valid == false) {
            cout << "Select your movement.\n1) Walking slowly, 2) Walking quickly, 3) Jogging, 4) Cycling, 5) Swimming\n";
            cin >> choice;

            switch (choice) {
                case 1:
                    met = 2.0;
                    valid = true;
                    activityname = "Walking Slowly";
                    break;

                case 2:
                    met = 3.0;
                    valid = true;
                    activityname = "Walking Quickly";
                    break;

                case 3:
                    met = 8.8;
                    valid = true;
                    activityname = "Jogging";
                    break;

                case 4:
                    met = 7.5;
                    valid = true;
                    activityname = "Cycling";
                    break;

                case 5:
                    met = 6.0;
                    valid = true;
                    activityname = "Swimming";
                    break;

                default:
                    cout << "Error: Invalid input." << endl;
            }
        }

        while (minutes <= 0) {
            cout << "How many minutes are you willing to workout?" << endl;
            cin >> minutes;
        }

        cout << left << setw(43) << setfill('-') << hash << endl;
        cout << "Activity: " << activityname << endl;
        cout << "Duration: " << minutes << " minutes" << endl;
        cout << "Weight: " << weightkg << " kg" << endl;
        cout << "Calories Burned: " << minutes*met*3.5*weightkg/200 << " cal" << endl;
        cout << setw(43) << setfill('-') << hash << endl;

    }
}
