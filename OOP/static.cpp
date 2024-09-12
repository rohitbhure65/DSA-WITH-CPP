// static keyword is used to define members (variables or methods) that belong to the class itself rather than to instances (objects) of the class. This means that static members are shared by all objects of the class and have the same value for all instances.

// Key Characteristics of static in OOP:

// 1) Static Data Members: A static variable is shared among all objects of the class. There is only one copy of the static variable, no matter how many objects are created.
// 2) Static Member Functions: A static function can only access static data members and other static member functions. It cannot access non-static members because it doesn't operate on a specific object.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    
public:
    static int studentCount;  // Static data member (shared by all objects)

    // Constructor
    Student(string n) {
        name = n;
        studentCount++;  // Increment static variable
    }

    // Static function to get the count of students
    static int getStudentCount() {
        return studentCount;
    }

    // Non-static function to display student name
    void display() {
        cout << "Student Name: " << name << endl;
    }
};

// Define and initialize static member outside the class
int Student::studentCount = 0;

int main() {
    // Create student objects
    Student s1("Alice");
    Student s2("Bob");

    // Call static function to get the student count
    cout << "Total Students: " << Student::getStudentCount() << endl;

    s1.display();  // Display details of student s1
    s2.display();  // Display details of student s2

    return 0;
}
