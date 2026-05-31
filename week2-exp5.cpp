#include <iostream>

using namespace std;

// Structure for distance measurement
struct Distance {
    int feet;
    float inches;
};

// Structure for a triangle using Distance structures
struct Triangle {
    Distance base;
    Distance height;
};

int main() {
    Triangle t;

    // Input for Base
    cout << "Enter base (feet and inches): " << endl;
    cout << "Feet: ";
    cin >> t.base.feet;
    cout << "Inches: ";
    cin >> t.base.inches;

    // Input for Height
    cout << "Enter height (feet and inches): " << endl;
    cout << "Feet: ";
    cin >> t.height.feet;
    cout << "Inches: ";
    cin >> t.height.inches;

    // Convert everything to total inches for calculation
    float totalBaseInches = (t.base.feet * 12) + t.base.inches;
    float totalHeightInches = (t.height.feet * 12) + t.height.inches;

    // Calculate area: 1/2 * base * height
    float area = 0.5 * totalBaseInches * totalHeightInches;

    // Output result
    cout << "\n--- Result ---" << endl;
    cout << "The area of the triangle is: " << area << " square inches." << endl;

    return 0;
}
