#include <stdio.h>
void main(){
    int no;
    printf("key:    January is 1\n\tFebruary is 2\n\tMarch is 3\n\tApril is 4\n\tMay is 5\n\tJune is 6\n\tJuly is 7\n\tAugust is 8\n\tSeptember is 9\n\tOctober is 10\n\tNovember is 11\n\tDecember is 12\n");
    printf("What month were you born in?");
    scanf("%d",&no);
     if (no==1)
    {
        printf("January in New Zealand is in Summer. ");
    }
    else if (no==2)
    {
        printf("February in New Zealand is in Summer.");
    }
    else if (no==3)
    {
        printf("March in New Zealand is in Autumn.");
    }
    else if (no==4)
    {
        printf("April in New Zealand is in Autumn.");
    }
    else if (no==5)
    {
        printf("May in New Zealand is in Autumn.");
    }
    else if (no==6)
    {
        printf("June in New Zealand is in Winter.");
    }
    else if (no==7)
    {
        printf("July in New Zealand is in Winter.");
    }else if (no==8)
    {
        printf("August in New Zealand is in Winter.");
    }
    else if (no==9)
    {
        printf("September in New Zealand is in Spring.");
    }
    else if (no==10)
    {
        printf("October in New Zealand is in Spring.");
    }else if (no==11)
    {
        printf("November in New Zealand is in Spring.");
    }
    else if (no==12)
    {
        printf("December in New Zealand is in Summer.");
    }
    else
    {
        printf("Invalid");
    }

}
