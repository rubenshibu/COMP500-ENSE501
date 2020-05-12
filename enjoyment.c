#include<stdio.h>
int main(void){
    char a;
    printf("Are you enjoying the COMP500/ENSE501 labs (y/n)? ");
    scanf("%c",a);
    if(a == y){
        printf("Great! keep going this is only week 4!");
    }
    else if(a == n){
        printf("Oh no! Don't worry only eight short weeks to go");
    }
    else{printf("Your response makes no sense!")}
}