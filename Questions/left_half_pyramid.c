#include <stdio.h>

int main()
{
    int row;

    printf("Enter a no\n");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        // printf("%d", 2 * (row - i) - 1);
        for (int j = 0; j < 2 * (row - i) - 1; j++)
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