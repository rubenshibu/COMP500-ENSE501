#include<stdio.h>1

int main()
{
  float marks;
  printf("Please enter your practical test 1 percentage: ");
  scanf("%f",&marks);
  if(marks>=90) printf("A+");
  else if(marks>=85) printf("%f is a 'A'",marks);
  else if(marks>=80) printf("%f is a 'A-'",marks);
  else if(marks>=75) printf("%f is a 'B+'",marks);
  else if(marks>=70) printf("%f is a 'B'",marks);
  else if(marks>=65) printf("%f is a 'B-'",marks);
  else if(marks>=60) printf("%f is a 'C+'",marks);
  else if(marks>=55) printf("%f is a 'C'",marks);
  else if(marks>=50) printf("%f is a 'C-'",marks);
  else printf("%f is a 'D'",marks);

}
