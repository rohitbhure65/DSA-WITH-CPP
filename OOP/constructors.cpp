// ● Constructor : Constructor is a special method which is invoked automatically
// at the time of object creation. It is used to initialize the data members of
// new objects generally. The constructor in C++ has the same name as class or
// structure.

// --------- There can be three types of constructors in C++.

// 1. Default constructor : A constructor which has no argument is known
// as default constructor. It is invoked at the time of creating an
// object.

// 2. Parameterized constructor : Constructor which has parameters is
// called a parameterized constructor. It is used to provide
// different values to distinct objects.

// 3. Copy Constructor : A Copy constructor is an overloaded
// constructor used to declare and initialize an object from another
// object. It is of two types - default copy constructor and user
// defined copy constructor.

#include <bits/stdc++.h>
using namespace std;
class go
{
public:
  int x;

  go()
  { // Default Constructor / non parametrized constructor
    cout << "Default constructor";
  }

  go(int a)
  { // parameterized constructor.
    x = a;
  }

  go(go &i)
  { // copy constructor
    x = i.x;
  }
};

int main()
{
  go a1(20); // Calling the parameterized constructor.
  go a2(a1); // Calling the copy constructor.
  cout << a2.x << endl;
  return 0;
}

// ● Destructor : Adestructor works opposite to constructor; it destructs the
// objects of classes. It can be defined only once in a class. Like constructors, it
// is invoked automatically. A destructor is defined like a constructor. It must
// have the same name as class, prefixed with a tilde sign (~).

#include <bits/stdc++.h>
using namespace std;

class A{
public:
  // constructor and destructor are called automatically,

  once the object is instantiated
  A()
  {
    cout << "Constructor in use" << endl;
  }
  ~A() // Destructor
  {
    cout << "Destructor in use" << endl;
  }
};

int main(){
  APNI KAKSHA

  Aa;
  Ab;
  return 0;
}