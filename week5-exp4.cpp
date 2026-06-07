#include <iostream>

using namespace std;

class ComplexNumber {
private:
    double realPart;
    double imaginaryPart;

public:
    // Default Constructor
    ComplexNumber() : realPart(0), imaginaryPart(0) {}

    // Parameterized Constructor
    ComplexNumber(double r, double i) : realPart(r), imaginaryPart(i) {}

    // Destructor
    ~ComplexNumber() {}

    // Addition: (a1 + a2) + (b1 + b2)j
    ComplexNumber add(const ComplexNumber& other) {
        return ComplexNumber(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
    }

    // Subtraction: (a1 - a2) + (b1 - b2)j
    ComplexNumber sub(const ComplexNumber& other) {
        return ComplexNumber(realPart - other.realPart, imaginaryPart - other.imaginaryPart);
    }

    // Multiplication: (a1a2 - b1b2) + (a1b2 + a2b1)j
    ComplexNumber mul(const ComplexNumber& other) {
        double r = (realPart * other.realPart) - (imaginaryPart * other.imaginaryPart);
        double i = (realPart * other.imaginaryPart) + (imaginaryPart * other.realPart);
        return ComplexNumber(r, i);
    }

    // Print function
    void print() const {
        cout << realPart << (imaginaryPart >= 0 ? " + " : " - ") << abs(imaginaryPart) << "j" << endl;
    }
};

int main() {
    // Testing the class
    ComplexNumber c1(3.0, 4.0);
    ComplexNumber c2(1.0, 2.0);

    cout << "C1: "; c1.print();
    cout << "C2: "; c2.print();

    ComplexNumber sum = c1.add(c2);
    cout << "Sum: "; sum.print();

    ComplexNumber diff = c1.sub(c2);
    cout << "Difference: "; diff.print();

    ComplexNumber prod = c1.mul(c2);
    cout << "Product: "; prod.print();

    return 0;
}
