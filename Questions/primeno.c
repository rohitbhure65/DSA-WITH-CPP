#include<stdio.h>

int main(){
    int n, flag = 0;

    printf("Enter the no\n");
    scanf("%d", &n);

    if(n==0 | n==1){
        flag = 1;
    }

    for (int i = 2; i < n/2; ++i)
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
    return 0;
}