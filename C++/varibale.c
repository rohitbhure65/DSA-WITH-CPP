#include <stdio.h>

int main()
{
    unsigned short c = 233; // you can also write short without int keyword because short takes bydefault int
    unsigned short int x = 34;
    unsigned long int v = 3452343243242;
    unsigned long long int myviews = 8580944534534534530;
    
    printf("\t%hd\n", c);
    printf("\t%hd\n", x);
    printf("\t%lu\n", v);
    printf("\t%llu\n", myviews);
    return 0;
}