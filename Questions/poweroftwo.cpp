#include <iostream>
using namespace std;

// for calculate n raised to power of p
int power(int n, int p){
    if (p==0)
        return 1;

    int previourp = power(n, p-1);
    return n*previourp;
}

// for check power program

// bool ispoweroftwo(int n){
//     if (n==1) return true;
//     if (n<=0 || n%2!=0) return false;
//     return ispoweroftwo(n/2);
// }

int main(){
    int n, p;
    cout << "Enter a number" << endl;
    cin >> n >> p;

    cout << power(n, p) << endl;
    return 0;
}