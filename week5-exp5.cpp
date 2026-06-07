#include <iostream>
using namespace std;

class Room {
private:
    double width;

public:
    // Member function to set the width
    void setWidth(double w) {
        width = w;
    }

    // Declaration of the friend function
    friend void printWidth(Room r);
};

// Definition of the friend function (Defined outside the class)
// Note: It does not use the :: operator because it is not a member function.
void printWidth(Room r) {
    cout << "Width of the room: " << r.width << endl;
}

int main() {
    // Create an object of the Room class
    Room myRoom;

    // Call setWidth() to pass 10.10 as the argument
    myRoom.setWidth(10.10);

    // Call the friend function to print the width
    printWidth(myRoom);

    return 0;
}
