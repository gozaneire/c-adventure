//11-23-26

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0)); //Sets random seed

    const int ARRAY_SIZE = 50; //Constant array size is 50
    double alpha[ARRAY_SIZE];
    int line = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i < 25) {
            alpha[i] = rand()%100+1; //Assigns the first 25 numbers random numbers without issues.
        }
        else {
            alpha[i] = (rand()%100+1)*3; //Makes the random number multiplies by 3.
        }

        cout << alpha[i] << ", ";

        if (line >= 9) { //Counts the number of lines in order to indent.
            cout << "\r" << endl;
            line = 0;
        }
        else {
            line++; //Increments the number each time
        }
    }

    double sum = 0;
    int count = 0; //This integer counts each 100 found in the array.
    for (int index = 0; index < 50; index++) {
        sum = sum + alpha[index]; //The total gets added for each item in the array and then it's divided by 50.
        if (alpha[index] == 100) {
            count += 1;
        }
    }
    double average = sum / 50;
    cout << "\rAverage: " << average << endl;
    cout << "\rNumber of 100's: " << count << endl;
}
