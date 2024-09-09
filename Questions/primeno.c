#include<stdio.h>

void is_prime(int n){
    int flag = 0;
    if(n==0 || n==1){
        flag = 1;
    }

    for (int i = 2; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            flag = 1;
            break;
        }
    }

    if (flag==0)
    {
        printf("%d is prime no\n", n);
    }else{
        printf("%d is not a prime no\n", n);
    }   
}

int main(){
    int n;

    printf("Enter the no\n");
    scanf("%d", &n);
    is_prime(n);
}