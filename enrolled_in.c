#include <stdio.h>
int main(void){
    ch x;
    printf("Which course are you enrolled in, COMP500 (C) or ENSE501 (E)? ");
    scanf("%d",x);
    if(x == 'E'){
         printf("The use is entrolled in ENSE501");
    }
    else{
         printf("The use is entrolled in COMP500");     
    }
}