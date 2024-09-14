#include <iostream>
#include <cmath>
using namespace std;

void palindrome(int n){
    int flag = 0;
    
    if(n==0 || n==1){
        flag = 1;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag = 1;
            break;
        }
        
    }

    if (flag == 0){
        cout << "Number is prime" << endl;
    }else{
        cout << "Number is not prime" << endl;
    }
    
}

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    palindrome(n);
    return 0;
}