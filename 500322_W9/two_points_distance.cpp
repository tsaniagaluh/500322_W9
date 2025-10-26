#include <iostream>
#include <cmath>   // header file for sqrt()

using namespace std;

const double PI = 3.1416; // global constant for pi

// Function Prototypes
double distance(double x1, double y1, double x2, double y2);
double radius(double cx, double cy, double px, double py);
double diameter(double r);
double circumference(double r);
double area(double r);

int main() {
    double cx, cy, px, py;

    cout << "Enter circle center (x1 y1): ";
    cin >> cx >> cy;
    cout << "Enter point on circle (x2 y2): ";
    cin >> px >> py;

    double r  = radius(cx, cy, px, py);
    double d  = diameter(r);
    double c  = circumference(r);
    double ar = area(r);

    cout << "\nCircle measurements:\n";
    cout << "  Radius        = " << r  << '\n';
    cout << "  Diameter      = " << d  << '\n';
    cout << "  Circumference = " << c  << '\n';
    cout << "  Area          = " << ar << '\n';

    return 0;
}

// Function Definitions

// Distance between two points
double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

// Radius = distance from center to a point
double radius(double cx, double cy, double px, double py) {
    return distance(cx, cy, px, py);
}

// Diameter = 2r
double diameter(double r) {
    return 2 * r;
}

// Circumference = 2πr
double circumference(double r) {
    return 2 * PI * r;
}

// Area = πr²
double area(double r) {
    return PI * r * r;
}