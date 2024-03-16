#include <iostream>
using namespace std;

double areaOfCircle(double radius, double pi = 3.14159) {
    return pi * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = areaOfCircle(radius);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
