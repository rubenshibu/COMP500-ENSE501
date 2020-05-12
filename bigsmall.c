#include <stdio.h>
 
void main()
{
    int num1, num2, num3;
 
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d", &num2);
    printf("Please enter a third number: ");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\nBiggest number was: %d",num1);
            printf("\nSmallest number was: %d",num2);

        }
        else
        {
            printf("\nBiggest number was: %d",num3);
            printf("\nSmallest number was: %d",num2);
        }
    }
    else if (num2 > num3)
        printf("\n Biggest number was: %d"num2);
        if(num1>num3){
             printf("\nSmallest number was: %d",num3);
        }
        else{
             printf("\nSmallest number was: %d",num1);
        }
       
    else
            printf("\nBiggest number was: %d",num3);
}