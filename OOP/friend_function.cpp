// ● Friend Function : Friend function acts as a friend of the class. It can access
// the private and protected members of the class. The friend function is not
// a member of the class, but it must be listed in the class definition. The
// non-member function cannot access the private data of the class.
// Sometimes, it is necessary for the non-member function to access the data.

// The friend function is a non-member function and has the ability to
// access the private data of the class.

// Note :
// 1. A friend function cannot access the private members directly, it has
// to use an object name and dot operator with each member name.
// 2. Friend function uses objects as arguments.

#include <bits/stdc++.h>
using namespace std;

class A{
    private:
        int a = 2;
        int b = 4;

    public:
        // friend function
        friend int mul(A k) // k is a object that store private datamemeber
        {
            return (k.a * k.b);
        }
};

int main()
{ 
    A obj;
    int res = mul(obj);
    cout << res << endl;
    return 0;
}