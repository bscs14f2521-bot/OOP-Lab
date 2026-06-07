#include <iostream>
using namespace std;

class Travel {
private:
    int kilometer;
    int hour;

public:
    // Constructor
    Travel() {
        kilometer = 0;
        hour = 0;
    }

    // Destructor
    ~Travel() {}

    // Input data for the object
    void input() {
        cout << "Enter kilometers: ";
        cin >> kilometer;
        cout << "Enter hours: ";
        cin >> hour;
    }

    // Show data of the object
    void show() {
        cout << "Kilometers: " << kilometer << ", Hours: " << hour << endl;
    }

    // Add data members of current object and parameter object
    void add(Travel p) {
        int totalKM = kilometer + p.kilometer;
        int totalHR = hour + p.hour;
        cout << "\nTotal Result after addition:" << endl;
        cout << "Total Kilometers: " << totalKM << endl;
        cout << "Total Hours: " << totalHR << endl;
    }
};

int main() {
    Travel t1, t2;

    cout << "Input for object t1:" << endl;
    t1.input();

    cout << "\nInput for object t2:" << endl;
    t2.input();

    // Call add function with t1 and pass t2 as argument
    t1.add(t2);

    return 0;
}
