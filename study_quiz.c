#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("How many hours did you spend studying for the test? ");
    scanf("%d",&a);
    if(a>=0 && a<=25){
        printf("%d hours is probably not enough!",a);
    }
    else if(a>=26 && a<=39){
        printf("Good, but was it enough...");
    }
    else{
        printf("Excellent, you should be well prepared for the test!");
    }
}