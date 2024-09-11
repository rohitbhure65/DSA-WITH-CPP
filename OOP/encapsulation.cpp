// ● Encapsulation
// Encapsulation is the process of combining data and functions into a single
// unit called class. In Encapsulation, the data is not accessed directly; it is
// accessed through the functions present inside the class.

// In simpler words,
// attributes of the class are kept private and public getter and setter methods
// are provided to manipulate these attributes. Thus, encapsulation makes the
// concept of data hiding possible.(Data hiding: a language feature to restrict
// access to members of an object, reducing the negative effect due to
// dependencies. e.g. "protected", "private" feature in C++).

#include <iostream>
using namespace std;

class Employee
{
private:
    // Private variables (data encapsulated)
    int id;
    string name;

public:
    // Setter method to set private variables
    void setDetails(int i, string n)
    {
        id = i;
        name = n;
    }

    // Getter methods to get private variables
    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    // Public method to display employee details
    void displayDetails()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

int main()
{
    // Creating an object of Employee
    Employee emp;

    // Setting employee details using setter method
    emp.setDetails(101, "John Doe");

    // Accessing employee details using getter methods and public method
    cout << "Employee ID (using getter): " << emp.getId() << endl;
    cout << "Employee Name (using getter): " << emp.getName() << endl;

    // Displaying employee details using public method
    emp.displayDetails();

    return 0;
}