#include <stdio.h>

void main()
{
    char playerHealth, playerLocation;
    printf("Is the player's health low or high (l/h)? ");
    scanf("%c", &playerHealth);
    printf("Where is the player, close or far (c/f)? ");
    scanf("%c", &playerLocation);
    
    if(playerHealth=='h' && playerHealth=='c')
    {
        printf("The AI should call for reinforcement.");    
    }
    
    else if(playerHealth=='h' && playerHealth=='f')
    {
        printf("The AI should go to sleep.");    
    }
    
    else if(playerHealth=='l' && playerHealth=='c')
    {
        printf("The AI should attack.");    
    }
    
    else if(playerHealth=='l' && playerHealth=='f')
    {
        printf("The AI should start searching.");    
    }
    
    else
    {
        printf("Invalid input!!!");    
    }

}