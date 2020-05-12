#include<stdio.h>
int main(void){
    int a;
printf("What is your income");
scanf("%d",a);
if(a>=0 && a<=14000){
    printf("Tax rate: 10.5%");
}
else if(a>=14001 && a<=48000){
    printf("Tax rate: 17.5%");
}
else if(a>=48001 && a<=70000){
    printf("Tax rate: 30.0%");
}
else{
    printf("Tax rate: 33.0%")
}
return 0;
}