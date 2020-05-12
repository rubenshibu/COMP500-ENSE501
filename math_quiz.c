#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
  
// Generates and prints 'count' random 
// numbers in range [lower, upper]. 
void printRandoms(int lower, int upper,  
                             int count) 
{ 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
        printf("%d ", num); 
    } 
} 
int main() 
{ 
int lower = 1;
int upper = 100;
int count = 2;
int a,b,c; 
  
   a = printRandoms(lower, upper, count); 
   b = printRandoms(lower, upper, count);
   c = (rand() % (upper - lower + 1)) + lower;
   printf("What is %d + %d? %d",c);
   if(c == (a+b)){
       printf("Congrts! %d + %d is %d",a,b,c);
   }
   else
   {
       printf("Wrong! %d + %d is %d",a,b,c);
   }
    return 0; 
} 