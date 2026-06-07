#include <iostream>
#include <iomanip>

using namespace std;

// Design the Payroll class
class Payroll {
private:
    double hourlyRate;
    double hoursWorked;
    double totalPay;

public:
    // Constructor
    Payroll() {
        hourlyRate = 20.0; // Default hourly rate
        hoursWorked = 0.0;
        totalPay = 0.0;
    }

    // Mutator to set hours with validation
    void setHours(double hours) {
        hoursWorked = hours;
        calculatePay();
    }

    // Calculate total pay
    void calculatePay() {
        totalPay = hoursWorked * hourlyRate;
    }

    // Accessor for gross pay
    double getGrossPay() const {
        return totalPay;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    Payroll employees[NUM_EMPLOYEES];
    double inputHours;

    cout << "Enter the hours worked for " << NUM_EMPLOYEES << " employees.\n";

    // Loop to collect input for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Employee #" << (i + 1) << ": ";
        cin >> inputHours;

        // Input Validation: Do not accept values greater than 60
        while (inputHours < 0 || inputHours > 60) {
            cout << "Invalid input. Please enter hours between 0 and 60: ";
            cin >> inputHours;
        }

        employees[i].setHours(inputHours);
    }

    // Display gross pay for each employee
    cout << "\n--- Weekly Gross Pay ---\n";
    cout << fixed << setprecision(2);
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Employee #" << (i + 1) << ": $" << employees[i].getGrossPay() << endl;
    }

    return 0;
}
