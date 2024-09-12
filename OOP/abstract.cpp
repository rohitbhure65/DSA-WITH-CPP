// ● Abstract Classes : In C++ class is made abstract by declaring at least one of
// its functions as a pure virtual function. Apure virtual function is specified
// by placing "= 0" in its declaration. Its implementation must be provided
// by derived classes.
// Example :

#include <bits/stdc++.h>
using namespace std;

// abstract class
class Shape
{
public:
    virtual void draw() = 0;
};

class Rectangle : Shape
{
public:
    void draw()
    {
        cout << "Rectangle" << endl;
    }
};

class Square : Shape
{
public:
    void draw()
    {
        cout << "Square" << endl;
    }
};

int main()
{
    Rectangle rec;
    Square sq;
    rec.draw();
    sq.draw();
    return 0;
}
