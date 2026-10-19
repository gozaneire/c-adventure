#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float gigabyte;

    cout << "Enter the value of gigabyte(s):\t";
    cin >> gigabyte;

    double megabyte = gigabyte * 1000.0;
    double low = megabyte/43.2;
    double medium = megabyte/72;
    double high = megabyte/115.2;

    cout << fixed << setprecision(1) << "Low:\t" << low << " hours\n" << "Medium:\t" << medium << " hours\n" << "High:\t" << high << " hours" << endl;

    return 0;
}
