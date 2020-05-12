#include <stdio.h>
void main()
{   char ch;
    char cch;
    char chh;
    int sum=0;
    printf("At least 80% of their Lap Tutorial sessions(y/n)?");
    scanf("%c",ch);
    printf("Minimum of 40% achieved in Final exam(y/n)?");
    scanf("%c",cch);
    printf("Minimum of C- overall grade (y/n)?");
    scanf("%c",chh);
    if(ch==chh==cch=='y')
    {
        printf("Student passes COMP500/ENSE501");
    }
    else{
        printf("Student fails COMP500/ENSE501");
    }
    }