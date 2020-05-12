#include <stdio.h>

int main()
{
    char temperature, humidity;
    printf("Is the temperature warm or cold (w/c)? ");
    scanf("%c", &temperature);
    printf("Is it dry or humid (d/h)? ");
    scanf("%c", &humidity);
    
    if(temperature=='w' && humidity=='d')
    {
        printf("You should play tennis.");    
    }
    
    else if(temperature=='w' && humidity=='h')
    {
        printf("You should go swimming.");    
    }
    
    else if(temperature=='c' && humidity=='d')
    {
        printf("You should study programming 1.");    
    }
    
    else if(temperature=='c' && humidity=='h')
    {
        printf("You should read a book.");    
    }
    
    else
    {
        printf("Invalid input!!!");    
    }
    
    return 0;

}