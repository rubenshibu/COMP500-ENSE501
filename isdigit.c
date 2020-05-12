#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Input a character: ");
    scanf("%c", &ch);


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("the input is a character");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("The input was a digit);
    }
    else 
    {
        printf("is special character.");
    }

    return 0;
}