#include <stdio.h> 
  
int main() 
{ 
    int A, B; 
  
    printf("Enter the numbers A and B: "); 
    scanf("%d %d", &A, &B);

    if (A >= B)
	printf("%d is the largest number than %d.", A, B);

    if (B >= A)
	printf("%d is the largest number than %d.", B,A);
    
    if(A == B)
	printf("Both numbers are equal.");

    return 0;
} 