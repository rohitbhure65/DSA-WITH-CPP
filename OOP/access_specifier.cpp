// Access modifiers in C++ are keywords used to define the accessibility of class members (attributes and methods). They control how the data within a class can be accessed or modified:

// public: Members are accessible from outside the class.
// private: Members are only accessible within the class itself.
// protected: Members are accessible within the class and by derived classes (through inheritance).

#include <iostream>
using namespace std;

class Person {
private:
    string name;   // Private: can't be accessed directly outside the class

public:
    void setName(string n) {   // Public: accessible outside the class
        name = n;
    }

    string getName() {         // Public: accessible outside the class
        return name;
    }
};

int main() {
    Person p;
    p.setName("John");        // Accessing public methods
    cout << p.getName();      // Outputs: John
    return 0;
}
