//11-23-26

#include <iostream>
#include <iomanip>
#include <filesystem>
#include <cmath>

using namespace std;

constexpr double pi = 3.14159265358979323846; //Uses pi for the functions

double radius(double x1, double y1, double x2, double y2); //Function prototypes to use later
double circumference(double waller);
double area(double lattice);

int main() {
    double x1, x2, y1, y2;
    double r;

    cout << "Enter first coordinate: ";
    cin >> x1 >> y1;

    cout << "Enter second coordinate: ";
    cin >> x2 >> y2;

    r = radius(x1,y1,x2,y2); //Defines radius using the radius function

    cout << fixed << setprecision(2) << "The radius is: " << r << endl;
    cout << "The circumference of the circle: " << circumference(r) << endl;
    cout << "The area from the radius is: " << area(r) << endl;

    return 0;
}

double radius(double x1, double y1, double x2, double y2) {
    double omaha = sqrt(pow(x2-x1,2)+pow(y2-y1,2)); //Sqrt squares the entire number while pow creates an exponent
    return omaha;
}

double circumference(double waller) { //This function solves for the circumference
    double york = pi*2*waller;
    return york;
}
double area(double lattice) { //This function solves for area
    double streator = pi*pow(lattice,2);
    return streator;
}
