// Inheritance is a process in which Derived class acquires all the properties and
// behaviors of its base class automatically. In such a way, you can reuse,
// extend or modify the attributes and behaviors which are defined in other
// classes.

// In C++, the class which inherits the members of another class is called
// derived class and the class whose members are inherited is called base class.
// The derived class is the specialized class for the base class.

//////////////////// Types of Inheritance :
// 1. Single inheritance : When one class inherits another class, it is known
// as single level inheritance
// 2. Multiple inheritance : Multiple inheritance is the process of deriving
// a new class that inherits the attributes from two or more classes.
// 3. Hierarchical inheritance : Hierarchical inheritance is defined as the
// process of deriving more than one class from a base class.
// 4. Multilevel inheritance : Multilevel inheritance is a process of deriving a
// class from another derived class.
// 5. Hybrid inheritance : Hybrid inheritance is a combination of
// simple, multiple inheritance and hierarchical inheritance.

#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    string name;

    void eat()
    {
        cout << name << " is eating." << endl;
    }
};

// Derived class (inherits from Animal)
class Dog : public Animal
{
public:
    void bark()
    {
        cout << name << " is barking." << endl;
    }
};

int main()
{
    // Create an object of Dog class
    Dog d1;

    d1.name = "Rex";

    // Call methods
    d1.eat();  // Inherited from Animal
    d1.bark(); // Defined in Dog

    return 0;
}
