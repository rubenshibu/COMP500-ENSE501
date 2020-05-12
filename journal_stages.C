#include <stdio.h> 
  
int main() 
{ 
	int A=0;
	char a;

	printf("Did you hand in Stage 1 (Y/N)");
	a = getchar();
	if (a == 'y')
	{
		A++;
	}

	printf("Did you hand in Stage 2 (Y/N)");
	a = getchar();
	if (a == 'y')
	{
		A++;
	}
    
	printf("Did you hand in Stage 3 (Y/N)");
	a = getchar();
	if (a == 'y')
	{
		A++;
	}
	
	if (A == 3)
	{
		printf("Well Done!");
	}
	else
	{
		printf("Oh no, those were easy marks!.");
	}
    return 0;
} 