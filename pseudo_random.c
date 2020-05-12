#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Generates and prints 'count' random
// numbers in range [lower, upper].
int printLRandoms(int lower, int upper,  
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int left = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ", left);
        return left;
    }
}


int printRRandoms(int lower, int upper,  
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int right = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ",right);
        return right;
    }
}
 
// Driver code
int main()
{
    int lower = 2, upper = 12, count = 1;
    int user_response,correct;
    int l,r;
 
    // Use current time as  
    // seed for random generator
    srand(time(0));
    printf("What is ");
   l= printLRandoms(lower, upper, count);
    printf("x ");
   r= printRRandoms(lower, upper, count);
    printf("? ");
    scanf("%d",user_response);
    printf("\n");
    correct = l*r;
    printf("Correct=%d",correct);
    if(user_response ==  correct)
     {
         printf("Congratulations!");
     }
     else
     {
      printf(" Incorrect! ");
      printf("%d",l);
      printf(" x ");
      printf("%d",r);
      printf(" is ");
      printf("%d",correct);
      printf("!");
     }
     return 0;
}