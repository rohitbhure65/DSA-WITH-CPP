#include <iostream>
using namespace std;

int number1 = 10; // global variable
int number = 1;
int main()
{
    int number2 = 20; // local variable to main function
    int number = 2;
    {
        int number3 = 30; // local to this function
        cout << "Number3  " << number3 << endl;
    }
    // ‘number3’ was not declared in this scope; did you mean ‘number2’?
    // cout << "Number3  " << number3 << endl;
    cout << "Number2  " << number2 << endl;
    cout << "Number1  " << number1 << endl;

    // local variable obtains highest priority in its scope
    cout << "Number " << number << endl;

    // For accessing gloabl varable and solve problem of conflict with local variable we use :: Scope resolution operator
    cout << "Number " << ::number << endl;
    return 0;
}