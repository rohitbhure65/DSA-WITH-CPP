#include<stdio.h>
#include<string.h>

int isvowel(char ch){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    return 0;
    
}

int vowel(char input[]){
    int count = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isvowel(input[i]))
        {
            count++;
        }
        
    }
    return count;
}

int main(){
    char input[100];
    
    printf("Enter a string\n");
    fgets(input, sizeof(input), stdin);

    printf("%d\n", vowel(input));
    return 0;
}