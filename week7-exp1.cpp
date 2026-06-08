#include <iostream>
using namespace std;

class Complex {
private:
    double rp; // real part
    double ip; // imaginary part

public:
    // Constructor
    Complex(double r = 0, double i = 0) : rp(r), ip(i) {}

    // Overloading + operator
    Complex operator+(const Complex& obj) {
        return Complex(rp + obj.rp, ip + obj.ip);
    }

    // Overloading - operator
    Complex operator-(const Complex& obj) {
        return Complex(rp - obj.rp, ip - obj.ip);
    }

    // Overloading * operator
    Complex operator*(const Complex& obj) {
        return Complex((rp * obj.rp) - (ip * obj.ip), (rp * obj.ip) + (ip * obj.rp));
    }

    // Overloading = operator
    void operator=(const Complex& obj) {
        rp = obj.rp;
        ip = obj.ip;
    }

    // Print function
    void print() {
        cout << rp << (ip >= 0 ? " + " : " - ") << (ip >= 0 ? ip : -ip) << "i" << endl;
    }
};

int main() {
    Complex c1(5.0, 4.0), c2(2.0, 3.0);
    Complex res;

    cout << "c1: "; c1.print();
    cout << "c2: "; c2.print();

    res = c1 + c2;
    cout << "Addition (c1 + c2): "; res.print();

    res = c1 - c2;
    cout << "Subtraction (c1 - c2): "; res.print();

    res = c1 * c2;
    cout << "Multiplication (c1 * c2): "; res.print();

    return 0;
}
