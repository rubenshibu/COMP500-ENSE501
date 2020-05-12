#include <stdio.h>
int main(void){
    int x;
    int d1,d2,d3;
    printf("Input the total purchase price: ");
    scanf("%d",&x);
    if(x<2500){
        d1=x-x*(0/100);
         printf ("Discount is: %d",d1);
         printf("Payable Total is: %d",x-d1);
    }
    else if(x>=2500 && x<6500){
        d2=x-x*(5/100);
         printf ("Discount is: %d",d2);
         printf("Payable Total is: %d",x-d2);
    }
    else if(x>=6500 && x<=10000){
        d3=x-x*(10/100);
         printf ("Discount is: %d",d3);
         printf("Payable Total is: %d",x-d3);

    }
    else{
        a=x-x*(12.5/100);
        printf ("Discount is: %d",a);
        printf("Payable Total is: %d",x-a);

    }
}