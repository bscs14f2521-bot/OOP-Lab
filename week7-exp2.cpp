#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Month {
private:
    string name;
    int monthNumber;

    // Helper to keep names in one place
    const vector<string> monthNames = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    void setNameFromNumber() {
        if (monthNumber >= 1 && monthNumber <= 12)
            name = monthNames[monthNumber - 1];
    }

    void setNumberFromName(string n) {
        for (int i = 0; i < 12; i++) {
            if (monthNames[i] == n) {
                monthNumber = i + 1;
                name = n;
                return;
            }
        }
        // Default if name is invalid
        monthNumber = 1;
        name = "January";
    }

public:
    // Default constructor
    Month() {
        monthNumber = 1;
        name = "January";
    }

    // Constructor with name
    Month(string n) {
        setNumberFromName(n);
    }

    // Constructor with number
    Month(int num) {
        if (num < 1 || num > 12) monthNumber = 1;
        else monthNumber = num;
        setNameFromNumber();
    }

    // Mutators and Accessors
    void setName(string n) { setNumberFromName(n); }
    void setMonthNumber(int num) {
        if (num >= 1 && num <= 12) monthNumber = num;
        setNameFromNumber();
    }
    string getName() const { return name; }
    int getMonthNumber() const { return monthNumber; }

    // Prefix ++
    Month operator++() {
        monthNumber++;
        if (monthNumber > 12) monthNumber = 1;
        setNameFromNumber();
        return *this;
    }

    // Postfix ++
    Month operator++(int) {
        Month temp = *this;
        ++(*this);
        return temp;
    }

    // Prefix --
    Month operator--() {
        monthNumber--;
        if (monthNumber < 1) monthNumber = 12;
        setNameFromNumber();
        return *this;
    }

    // Postfix --
    Month operator--(int) {
        Month temp = *this;
        --(*this);
        return temp;
    }

    // Overloaded Stream Operators
    friend ostream& operator<<(ostream& os, const Month& m) {
        os << m.name << " (Month " << m.monthNumber << ")";
        return os;
    }

    friend istream& operator>>(istream& is, Month& m) {
        int num;
        cout << "Enter month number (1-12): ";
        is >> num;
        m.setMonthNumber(num);
        return is;
    }
};

int main() {
    Month m1;           // Default
    Month m2("March");  // By name
    Month m3(12);       // By number

    cout << "Initial m3: " << m3 << endl;

    m3++;
    cout << "After postfix ++ (December -> January): " << m3 << endl;

    --m1;
    cout << "After prefix -- (January -> December): " << m1 << endl;

    cin >> m2;
    cout << "You entered: " << m2 << endl;

    return 0;
}
