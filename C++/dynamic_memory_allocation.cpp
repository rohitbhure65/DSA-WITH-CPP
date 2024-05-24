#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the integer number"<<endl;
    cin>>n;

    int *ptr = (int*)malloc(n*sizeof(int));

    if (ptr==NULL){
    cout<<"MEMORY NOT ALLOCATED"<<endl;
    exit(1);
    }
    for (i = 0; i < n; i++)
    {
        cout<<"Enter integer value: ";
        cin>>*(ptr+i);
    }
    for (i = 0; i < n; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}