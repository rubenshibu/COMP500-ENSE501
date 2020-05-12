#include <stdio.h>
void main()
{   char ch1,ch2,ch3;
    printf("Did you hand in Stage 1 (Y/N)?");
    scanf("%c",ch1);
    printf("Did you hand in Stage 2 (Y/N)?");
    scanf("%c",ch2);
    printf("Did you hand in Stage 3 (Y/N)?");
    scanf("%c",ch3);
    if(ch1==ch2==ch3=='Y')
    {
    printf("Well done!");
    }
    else
    {
        printf("Oh no, those were easy marks!");
    }
   
}

