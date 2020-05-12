#include <stdio.h>

int main()
{
  char stage1, stage2, stage3;
  printf("Did you hand in Stage 1 (Y/N)? ");
  scanf("%c", &stage1);
  printf("Did you hand in Stage 2 (Y/N)? ");
  scanf("%c", &stage2);
  printf("Did you hand in Stage 3 (Y/N)? ");
  scanf("%c", &stage3);
  
  if(stage1=='Y' || stage2=='Y' || stage3=='Y')
  {
      printf("Great, that should be worth some marks!.");
  }
  else
  {
      printf("Oh no, those were easy marks!.");
  }
  return 0;

}