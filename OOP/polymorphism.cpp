// Polymorphism is the ability to present the same interface for differing
// underlying forms (data types). With polymorphism, each of these classes
// will have different underlying data. Apoint shape needs only two
// coordinates (assuming it's in a two-dimensional space of course). Acircle
// needs a center and radius. Asquare or rectangle needs two coordinates for
// the top left and bottom right corners and (possibly) a rotation. An irregular
// polygon needs a series of lines. Precisely, Poly means ‘many’ and morphism
// means ‘forms’.

// Types of Polymorphism IMP
// 1. Compile Time Polymorphism (Static)
// 2. Runtime Polymorphism (Dynamic)

// ● Compile Time Polymorphism : The polymorphism which is implemented at
// the compile time is known as compile-time polymorphism. Example -
// Method Overloading

// 1) Method Overloading : Method overloading is a technique which allows you
// to have more than one function with the same function name but with
// different functionality. Method overloading can be possible on the
// following basis:
// 1. The return type of the overloaded function.
// 2. The type of the parameters passed to the function.
// 3. The number of parameters passed to the function.

#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int add(int a, int b, int c)
    {
        return (a + b + c);
    }
};

int main()
{
    Add obj;
    int res1, res2;
    res1 = obj.add(2, 3);
    res2 = obj.add(2, 3, 4);
    cout << res1 << " " << res2 << endl;
    return 0;
}

// 2) Operator overloading: in C++ allows you to define or change the behavior of operators (such as +, -, *, =, etc.) for user-defined types (like classes or structs). This enables objects of those types to be manipulated using operators just like built-in types.

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize values
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &other)
    {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Function to display the complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2.3, 4.5);
    Complex c2(1.2, 3.1);

    // Using overloaded + operator
    Complex c3 = c1 + c2;

    // Displaying the result
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c1 + c2 = ";
    c3.display();

    return 0;
}

// ● Runtime Polymorphism : Runtime polymorphism is also known as dynamic
// polymorphism. Function overriding is an example of runtime
// polymorphism. Function overriding means when the child class contains
// the method which is already present in the parent class. Hence, the child
// class overrides the method of the parent class. In case of function
// overriding, parent and child classes both contain the same function with a
// different definition. The call to the function is determined at runtime is
// known as runtime polymorphism.

// 2) Virtual Funtion: A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class.

// 1. A virtual function is a member function which is present in the
// base class and redefined by the derived class.
// 2. When we use the same function name in both base and derived
// class, the function in base class is declared with a keyword
// virtual.
// 3. When the function is made virtual, then C++ determines at run-time
// which function is to be called based on the type of the object pointed
// by the base class
// pointer. Thus, by making the base class pointer to point to
// different objects, we can execute different versions of the virtual
// functions.

// Key Points :
// 1. Virtual functions cannot be static.
// 2. Aclass may have a virtual destructor but it cannot have a virtual
// constructor.

#include <bits/stdc++.h>
using namespace std;

class Base_class
{
public:
    virtual void show()
    {
        cout << "Apni Kaksha base" << endl;
    }
};

class Derived_class : public Base_class
{
public:
    void show()
    {
        cout << "Apni Kaksha derived" << endl;
    }
};

int main()
{
    Base_class *b;
    Derived_class d;
    b = &d;
    b->show(); // prints the content of show() declared in derived
    return 0;
}

// ---------------------------------------------------------

// Extra expect to the polymorphism

// ● PureVirtual Function :
// 1. Apure virtual function is not used for performing any task. It only
// serves as a placeholder.
// 2. Apure virtual function is a function declared in the base class
// that has no definition relative to the base class.
// 3. Aclass containing the pure virtual function cannot be used to declare
// the objects of its own, such classes are known as abstract base
// classes.
// 4. The main objective of the base class is to provide the traits to the
// derived classes and to create the base pointer used for achieving the
// runtime polymorphism.

#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void show() = 0;
};

class Derived : public Base{
    public:
        void show()
        {
            cout << "You can see me !" << endl;
        }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}