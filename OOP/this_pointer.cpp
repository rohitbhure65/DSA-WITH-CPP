// ‘this’ Pointer : this is a keyword that refers to the current instance of the
// class. There can be 3 main uses of ‘this’ keyword:
// 1. It can be used to pass the current object as a parameter to
// another method
// 2. It can be used to refer to the current class instance variable.
// 3. It can be used to declare indexers.

struct node // class or struct
{
    int data;
    node *next;
    node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
}