#include <stdio.h>
#include <stdlib.h>
int main() {
  int c, n,guess;

  printf("Ten random numbers in [1,10]\n");
  
  n = rand() % 10 + 1;
  
  for (c = 1; c <= 3; c++) 
  {
    scanf("%d", &guess);
    if(guess==n)
    {
        printf("Guess was correct");
    }
    else
    {
        printf("Guess is wrong");
    }
  }

  return 0;
}
