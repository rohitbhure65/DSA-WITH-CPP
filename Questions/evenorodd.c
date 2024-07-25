// TODO : FIND A NUMBER IS EVEN OR ODD?
#include<stdio.h>
void even_or_odd(int n){
    n%2==0? printf("Number is even\n"):printf("Number is odd\n");
}

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    even_or_odd(n);
    return 0;
}