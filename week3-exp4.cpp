#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    string company;
    int speed;

public:
    // Constructor
    Car(int year, string make) {
        yearModel = year;
        company = make;
        speed = 0; // Initialize speed to 0
    }

    // Mutators
    void setYearModel(int year) { yearModel = year; }
    void setCompany(string make) { company = make; }
    void setSpeed(int s) { speed = s; }

    // Accessors
    int getYearModel() const { return yearModel; }
    string getCompany() const { return company; }
    int getSpeed() const { return speed; }

    // Member functions
    void accelerate() {
        speed += 5;
    }

    void brake() {
        if (speed >= 5) {
            speed -= 5;
        }
        else {
            speed = 0; // Prevent negative speed
        }
    }
};

int main() {
    // Create a Car object
    Car myCar(2023, "Porsche");

    cout << "Accelerating..." << endl;
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }

    cout << "\nBraking..." << endl;
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }

    return 0;
}
