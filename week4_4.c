#include<stdio.h>1

int main()
{
  float den,num;
  printf("Enter Numerator : ");
  scanf("%d",&num);
  printf("Enter Denominator : ");
  scanf("%d",&den);
  if(den==0) printf("Division by zero is undefined");
  else printf("The result is %f",num/den);
}
