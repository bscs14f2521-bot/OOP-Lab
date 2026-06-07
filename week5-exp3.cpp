#include <iostream>
using namespace std;

class Capital {
private:
    // Static data member declaration
    static int count;

public:
    // Constructor increments count every time an object is created
    Capital() {
        count++;
    }

    // Function to display the current count
    void show() {
        cout << "Current count: " << count << endl;
    }
};

// Definition and initialization of static member outside the class
int Capital::count = 0;

int main() {
    // Creating three objects: x, y, and z
    Capital x;
    Capital y;
    Capital z;

    // Displaying the final count using one of the objects
    z.show();

    return 0;
}
