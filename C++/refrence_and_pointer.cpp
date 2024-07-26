#include <iostream>
using namespace std;

// call by value
void swap_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// call by reference
void swap_reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// function with pointer
void swap_pointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    swap_value(a, b);     // call by value
    swap_reference(a, b); // call by reference
    swap_pointer(&a, &b); // function with pointer
    return 0;
}