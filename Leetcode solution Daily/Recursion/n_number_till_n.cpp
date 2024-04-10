// print n0 till n using recurssion

#include<iostream>
using namespace std;

void inc(int n){
    if (n==1){
        cout<< "1" << endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main(){
    inc(14);
    return 0;
}