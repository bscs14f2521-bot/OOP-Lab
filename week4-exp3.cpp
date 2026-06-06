#include <iostream>
#include <iomanip>

using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default Constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }

    // Constructor #2
    Inventory(int id, int q, double c) {
        setItemNumber(id);
        setQuantity(q);
        setCost(c);
        setTotalCost();
    }

    // Mutators (Setters) with Input Validation
    void setItemNumber(int id) {
        itemNumber = (id >= 0) ? id : 0;
    }

    void setQuantity(int q) {
        quantity = (q >= 0) ? q : 0;
    }

    void setCost(double c) {
        cost = (c >= 0) ? c : 0;
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Accessors (Getters)
    int getItemNumber() const { return itemNumber; }
    int getQuantity() const { return quantity; }
    double getCost() const { return cost; }
    double getTotalCost() const { return totalCost; }
};

int main() {
    int id, qty;
    double price;

    cout << "--- Inventory Management System ---\n";

    // User Input
    cout << "Enter Item Number: ";
    cin >> id;
    cout << "Enter Quantity: ";
    cin >> qty;
    cout << "Enter Unit Cost: ";
    cin >> price;

    // Create object using Constructor #2
    Inventory item(id, qty, price);

    // Display Results
    cout << fixed << setprecision(2);
    cout << "\n--- Item Details ---\n";
    cout << "Item Number: " << item.getItemNumber() << endl;
    cout << "Quantity:    " << item.getQuantity() << endl;
    cout << "Unit Cost:   $" << item.getCost() << endl;
    cout << "Total Cost:  $" << item.getTotalCost() << endl;

    return 0;
}
