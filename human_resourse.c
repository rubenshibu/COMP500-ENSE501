#include <stdio.h>

int main()
{
  int experience;
  char c;
  printf("How many year's experience? ");
  scanf("%d", &experience);
  printf("Does the candidate know C (y/n)? ");
  scanf("%c", &c);
  
  if(experience>=3 || c=='y')
  {
      printf("This candidate must be interviewed.");
  }
  else
  {
      printf("This candidate is not eligible for the interview.");
  }
  return 0;

}