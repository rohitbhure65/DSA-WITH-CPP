#include<iostream>
using namespace std;

// TODO : SINGLE LEVEL INHERITANCE

// BASE CLASS
class Vehicle{
    public:
        string brand = "ford";
        void honk(){
            cout<< "tuut, tuuuu!"<<endl;
        }
};

// DERIVED CLASS
class Car: public Vehicle{
    public:
        string model = "Mustang";
};

// TODO : MULTILEVEL INHERITANCE
 
// Base class (parent)
class Myclass{
    public:
        void myFunction(){
            cout<<"Some content in parent class.";
        }
};

// Derived class (child)
class MyChild: public Myclass{};

// Derived class (grandchild)
class MyGrandchild: public MyChild{};

// TODO : MULTIPLE INHERITANCE

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main(){
    // TODO : SINGLE LEVEL INHERITANCE
    cout<<"<----- SINGLE LEVEL INHERITANCE ----->";
    Car mycar;
    mycar.honk();
    cout<< "brand = " << mycar.brand<<endl;
    cout<< "model = " << mycar.model<<endl;

    // TODO : MULTILEVEL INHERITANCE
    cout<<"<----- MULTILEVEL INHERITANCE ----->";
    MyGrandchild obj;
    obj.myFunction();

    // TODO : MULTIPLE INHERITANCE
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    
    return 0;
}