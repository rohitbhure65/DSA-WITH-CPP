// Object-Oriented Programming is a methodology or paradigm to design a
// program using classes and objects. It simplifies the software development
// and maintenance by providing some concepts defined below :

#include <iostream>
using namespace std;


// ● Class is a user-defined data type which defines its properties and its
// functions. Class is the only logical representation of the data. For
// example, Human being is a class. The body parts of a human being are its
// properties, and the actions performed by the body parts are known as
// functions. The class does not occupy any memory space till the time an
// object is instantiated.
class Student {
    public:
        int id;
        int mobile;
        string name;

        int add(int x, int y) {
            return x + y;
        }
};


int main(){
    // ● Object is a run-time entity. It is an instance of the class. An object can
    // represent a person, place or any other item. An object can operate on
    // both data members and member functions.

    // Note : When an object is created using a new keyword, then space is
    // allocated for the variable in a heap, and the starting address is stored in
    // the stack memory. When an object is created without a new keyword,
    // then space is not allocated in the heap memory, and the object contains
    // the null value in the stack.

    // --------- there are two ways of create objects ---------------

    // 1)  Stack Allocation (without new):
    // Syntax: Student s1;
    // Memory: The object is created on the stack (automatic memory). The memory is automatically managed, and the object is destroyed when it goes out of scope (e.g., when the function where the object was created returns).
    // Performance: Stack allocation is faster because it doesn't involve heap management (no dynamic memory allocation).
    // Usage: Preferred for short-lived objects that don't need to persist beyond the scope in which they are created.
    Student s2;
    s2.id = 3;
    cout << "using Stack Allocation withou new \n" << s2.id << endl;

    // -------------------------------------------------------------------------------
    
    // 2) Heap Allocation (with new):

    // Syntax: Student* s1 = new Student();
    // Memory: The object is created on the heap (dynamic memory), and you must manually manage its lifetime using delete to free the memory when you're done with it.
    // Performance: Heap allocation is slower because it requires manual memory management. It also introduces the risk of memory leaks if delete isn't called.
    // Usage: Useful when:
    // You need objects to persist beyond their scope (e.g., for a return from a function).
    // The size or lifetime of the object is unpredictable or managed dynamically (e.g., when using data structures like linked lists, dynamic arrays, etc.).
    
    Student* s1 = new Student();
    
    s1->id = 2;
    cout << "using Heap Allocation with new keyword\n" << s1->id << endl;

    delete s1;

    return 0;
}