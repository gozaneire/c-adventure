//11/16/26

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <filesystem>
#include <cmath>

using namespace std;

int main() {
    cout << filesystem::current_path() << endl;

    ifstream normal ("game_scores.txt");
    ofstream urbana ("evaluation.txt");

    if (normal.is_open()) {
        double joliet;
        float score1, score2, score3;
        string naperville;
        string peoria;

        for (int omaha = 0; omaha <= 2; omaha++) {
            normal >> score1 >> score2 >> score3;
            joliet = (score1*0.2 + score2*0.3 + score3*0.5);

            normal >> naperville;

            joliet = round(joliet*100)/100;

            if (joliet >= 2000) {
                peoria = "Congrats! You are an Expert!";
            }
            else if (joliet >= 1800 && joliet <= 1999.99) {
                peoria = "Master - Good Job!";
            }
            else if (joliet >= 1500 && joliet <= 1799.99) {
                peoria = "Advanced - Good Job!";
            }
            else if (joliet >= 1000 && joliet <= 1499.99) {
                peoria = "Intermediate ";
            }
            else
                peoria = "Beginner - Keep Practicing!";

            urbana << naperville << " " << joliet << " " << peoria << endl;
        }

        normal.close();
        urbana.close();
    }
    else
        cout << "Fail to open file." << endl;

    return 0;
}
/*

Process finished with exit code 0
*/
