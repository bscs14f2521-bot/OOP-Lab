#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor: runs automatically when an object is created
    MyClass() {
        cout << "Hello! An object of this class has been created." << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    return 0;
}
