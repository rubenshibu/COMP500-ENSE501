#include <stdio.h>
void main()
{
    int status=0;
    char choice;
    for(int i=0;i<3;i++)
    {
        choice='y';
        printf("Did you hand in Stage %d (Y/N)?",i+1);
        scanf(" %c",&choice);
        if(choice=='n'||choice=='N')
            status=1;
       // fflush(stdin);

    }
    if(status==0)
        printf("Well done!");
    else
        printf("Oh no, those were easy marks!");
}
