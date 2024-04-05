class solution{
    public:
        int fib(int n){
            if(n==0 || n==1)    
                return n;
            return fib(n-1)+fib(n-2);
        }
};

#include<iostream>
using namespace std;
int main(){
    solution s;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<s.fib(n);
}