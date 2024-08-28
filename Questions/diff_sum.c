#include<stdio.h>

int differnce_sum(int n, int m){
    int sum1 =0, sum2 =0;
    for (int i = 0; i <= m; i++)
    {
        if (i%n==0)
        {
            sum1 += i;
        }else{
            sum2 += i;
        }
        
    }
    return sum2-sum1;
    
}

int main(){
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);

    int result = differnce_sum(n,m);
    printf("%d\n", result);
    return 0;
}