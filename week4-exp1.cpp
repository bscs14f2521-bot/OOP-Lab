#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructor with all arguments
    Employee(string n, int id, string dept, string pos) {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }

    // Constructor with name and ID only
    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    // Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Mutators (Setters)
    void setName(string n) { name = n; }
    void setIdNumber(int id) { idNumber = id; }
    void setDepartment(string dept) { department = dept; }
    void setPosition(string pos) { position = pos; }

    // Accessors (Getters)
    string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }
};

int main() {
    // Create three Employee objects using different constructors
    Employee emp1("Ali", 47899, "Accounting", "Vice President");
    Employee emp2("Maham", 39119, "IT", "Programmer");
    Employee emp3("Sara", 81774, "Manufacturing", "Engineer");

    // Display headers
    cout << left << setw(20) << "Name" << setw(15) << "ID Number"
        << setw(20) << "Department" << setw(20) << "Position" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    // Display data for each employee
    Employee employees[] = { emp1, emp2, emp3 };
    for (int i = 0; i < 3; i++) {
        cout << left << setw(20) << employees[i].getName()
            << setw(15) << employees[i].getIdNumber()
            << setw(20) << employees[i].getDepartment()
            << setw(20) << employees[i].getPosition() << endl;
    }

    return 0;
}

