//11/9/26

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int days = 0;

    cout << "Enter your first name:" << endl;
    cin >> name;

    while (days < 1){ //Stops invalid inputs
        cout << "How many days do you want to work out?" << endl;
        cin >> days;
    }

    int deficit_days = 0;
    int maintenance = 0;
    int surplus_day = 0; //Those three integers account days

    const int total = days; //Accounts total amount of days
    int passed = 0; //Amount of passed days
    double avg_net = 0;

    while (days >= 1) {
        passed += 1;
        cout << setfill('-') << setw(50) << '-' << endl;
        cout << "Day " << passed << endl;

        float minutes;
        double weight;
        float consumption;

        cout << "How many minutes did you jog today?" << endl;
        cin >> minutes;
        cout << "What is your weight today?" << endl;
        cin >> weight;
        cout << "How many calories did you consume?" << endl;
        cin >> consumption;

        double burned = minutes * 8.8 * 3.5 * weight / 200; //Assigned amount burned
        double net = consumption - burned;

        if (net < 1500)
            deficit_days += 1;
        if (net >= 1500 && net <= 2200)
            maintenance += 1;
        if (net > 2200) //No brackets needed because it's only one line.
            surplus_day += 1;

        avg_net += net; //Adds the net calorie to the total to be divided.

        cout << "Day " << passed << " Summary:" << endl;
        cout << setfill('-') << setw(50) << '-' << endl;
        cout << "Minutes: \t" << minutes << endl;
        cout << "Avg Weight: \t" << weight << endl;
        cout << "Calories consumed: \t" << consumption << " calories" << endl;

        cout << "Net calories: " << net << endl;

        days -= 1; //Subtracts 1 from day until all days are gone.
    }

    cout << setfill('-') << setw(50) << '-' << endl;
    cout << "Total days: " << total << endl;

    cout << "Deficit days: " << deficit_days << endl;
    cout << "Balanced days: " << maintenance << endl;
    cout << "Surplus days: " << surplus_day << endl;

    cout << "Average daily net: " << fixed << setprecision(2) << avg_net / total << " calories" << endl;

    cout << "The operation has been completed, " << name << "." << endl;

    return 0;
}
