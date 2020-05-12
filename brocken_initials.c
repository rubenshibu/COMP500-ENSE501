#include<stdio.h>
int main(void){
    char first_initial;
    char last_initial;

    printf("Input the initials of your first name");
    scanf("%c",first_initial);
    printf("Input the initial of your last name");
    scanf("%c\n",last_initial);
    printf("\n");
    printf("your initials are: ");
    printf("%c %c\n",first_initial,last_initial);
    return 0;

}