#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, d;
  double root1, root2;
  printf("Enter the value of a");
  scanf("%f",&a);
   printf("Enter the value of b");
  scanf("%f",&b);
   printf("Enter the value of c");
  scanf("%f",&c);
printf("Solving the quadratic: ");
  printf("%fx^2 + %fx + %f\n",a,b,c);
printf("Two real roots found... ");
  d = b*b - 4*a*c;

  if (d < 0) {
    printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else {
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);

    printf("x is = %.2lf\n", root1);
    printf("Or...")
    printf("y is %.2lf\n", root2);
  }

  return 0;
}
