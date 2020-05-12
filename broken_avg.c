#include<stdio.h>
int main(void){
    float x = 0;
    float y= 0;
    float z = 0;
    int average = 0;
    printf("Input first number: ");
    scanf("%f",&x);
    printf("Input second number: ");
    scanf("%f",&y);
    printf("Input three number: ");
    scanf("%f",&z);
    average = (x+y+z)/3;
    printf("Average is %f\n", average);
    return 0;

}