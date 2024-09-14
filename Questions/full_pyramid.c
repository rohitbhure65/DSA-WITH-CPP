#include<stdio.h>

int main(){
    int row;

    printf("Enter a no\n");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        // printf("%d", row-i);
        for (int j = 0; j < row - i ; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
           printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}