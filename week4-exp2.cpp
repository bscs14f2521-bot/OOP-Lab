#include <iostream>
#include <iomanip>

using namespace std;

class Circle {
private:
    double radius;
    double pi = 3.14159;

public:
    // Default Constructor
    Circle() {
        radius = 0.0;
    }

    // Constructor with argument
    Circle(double r) {
        radius = r;
    }

    // Mutator function
    void setRadius(double r) {
        radius = r;
    }

    // Accessor function
    double getRadius() const {
        return radius;
    }

    // Member functions for calculations
    double getArea() const {
        return pi * radius * radius;
    }

    double getDiameter() const {
        return radius * 2;
    }

    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double userRadius;

    // Ask the user for the circle's radius
    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    // Create a Circle object
    Circle myCircle(userRadius);

    // Report the results
    cout << fixed << setprecision(4);
    cout << "\n--- Circle Properties ---" << endl;
    cout << "Area:          " << myCircle.getArea() << endl;
    cout << "Diameter:      " << myCircle.getDiameter() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
