//11/13/26

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

int main()
{
    cout << filesystem::current_path() << endl;

    ifstream kankakee ("inData.txt");
    ofstream bloomington ("outData.txt");

    if (kankakee.is_open()) {
        string line;
        string message;
        char new_castle;
        int sum;
        int num2;
        int num1;

        cout << "Success!" << endl;

        kankakee >> num1 >> num2;
        sum = num1 + num2;
        bloomington << sum << endl;

        kankakee >> new_castle;
        bloomington << (new_castle + 1) << endl;

        kankakee >> message;
        bloomington << message << endl;

        kankakee.close();
        bloomington.close();
    }
    else {
        cout << "Fail to open file." << endl;
    }

    return 0;
}

//Use two integers, a character, and a single word string in the input text file.
