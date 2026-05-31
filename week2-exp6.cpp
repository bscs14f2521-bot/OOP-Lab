#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Structure to store daily work data
struct WorkDay {
    int id;
    string day;
    int hours;
    int minutes;
};

int main() {
    // Wage rate per hour
    const double WAGE_RATE = 11.0;

    // Data from Table 01
    vector<WorkDay> schedule = {
        {1, "Monday", 5, 35},
        {1, "Tuesday", 6, 17},
        {1, "Wednesday", 7, 18},
        {1, "Thursday", 4, 40},
        {1, "Friday", 3, 31}
    };

    int totalHours = 0;
    int totalMinutes = 0;

    // Calculate total hours and minutes using structural approach
    for (const auto& entry : schedule) {
        totalHours += entry.hours;
        totalMinutes += entry.minutes;
    }

    // Convert excess minutes into hours
    totalHours += totalMinutes / 60;
    totalMinutes = totalMinutes % 60;

    // Convert total time to a decimal value (e.g., 27 hours 21 mins -> 27.35 hours)
    double totalHoursDecimal = totalHours + (totalMinutes / 60.0);

    // Calculate total wage
    double totalWage = totalHoursDecimal * WAGE_RATE;

    // Output Results
    cout << "--- Wage Calculation Report ---" << endl;
    cout << "Total Time Worked: " << totalHours << " hours and " << totalMinutes << " minutes" << endl;
    cout << "Total Time in Decimal: " << fixed << setprecision(2) << totalHoursDecimal << " hours" << endl;
    cout << "Hourly Wage Rate: " << WAGE_RATE << " EUR" << endl;
    cout << "-------------------------------" << endl;
    cout << "TOTAL WEEKLY WAGE: " << totalWage << " EUR" << endl;

    return 0;
}
