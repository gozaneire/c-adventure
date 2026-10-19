//10-13-26

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    char chosed; //I used "char" to store an character for the input."
    cout << "Input an character to surround your text." << endl;
    cin >> chosed;

    string line1 = "Ways to access the Task Manager on your Windows computer:";
    string line2 = "Press the key combination Ctrl + Shift + Escape";
    string line3 = "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\"";
    string line4 = "Type \"Task Manager\" in the Windows Start menu search";

    cout << right << setfill(chosed) << setw(83) << chosed << endl; //I had to have an manual character at the end in order to fill.
    cout << setfill(' ');
    cout << chosed << setw(82) << chosed << endl;
    cout << chosed << left << setw(81) << line1 << chosed << endl; // Turned the first line back to left because it is orientated that way.
    cout << chosed << "\t" << setw(74) << line2 << chosed << endl; //Used tab to put each string on the same index.
    cout << chosed << "\t" << setw(74) << line3 << chosed << endl;
    cout << chosed << "\t" << setw(74) << line4 << chosed << endl;
    cout << chosed << right << setw(82) << chosed << endl;
    cout << setfill(chosed) << setw(83) << chosed << endl; //Rewriting the first line.

    return 0;
}
