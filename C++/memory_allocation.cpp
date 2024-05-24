#include<iostream>
using namespace std;

int main(){
    // TODO : VOID POINTER
    int n = 10;
    void *ptr = &n; // void pointer void *ptr
    cout<<*(int*)ptr<<endl; // Type casting

    // TODO : USE OF VOID POINTER
    // void * malloc(size_t size);

    // TODO : WHAT IS A NULL POINTER
    int *ptr1 = NULL; // insted of NULL you can also write 0 but this is not good practice

    // TODO : USE OF NULL POINTER
    int *ptr2;
    ptr2 = (int*)malloc(2*sizeof(int));
    if (ptr2==NULL)
        cout<<"Memory could not be allocated"<<endl;
    else
        cout<<"Memory allocated successfully"<<endl;
    return 0;
}