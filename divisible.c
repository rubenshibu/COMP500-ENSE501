#include<stdio.h>
int main()
{
	int num;
	printf("Pleasse input a whole number: ");
	scanf("%d"&num);
	if(num%3==0 && num%2==0)
	{
		printf("%d is divisible by 2 or 3",num);
	}
	else
	{
		printf("%d is not divisible by 2 or 3",num);
	}
	return 0;
}