#include<iostream>
using namespace std;

// TODO : INSIDE EXAMPLE

class YyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

// TODO : OUTSIDE EXAMPLE

class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!"<<endl;
}

// TODO : PARAMETERS

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method

  Car mycar; // Create an object of Car
  cout << mycar.speed(200)<<endl; // Call the method with an argument
  return 0;
}
