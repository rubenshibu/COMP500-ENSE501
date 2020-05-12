#include <stdio.h>

int main()
{
	char c;

	scanf("%c", &c);
	if (c == 32)
		printf("%c is space.");
	else if (c >= 33 && c <= 47)
		printf("%c is a symbol.");
	else if (c >= 48 && c <= 57)
		printf("%c is a Digit");
	else if (c >= 58 && c <= 64)
		printf("%c is a symbol.");
	else if (c >= 65 && c <= 90)
		printf("%c is uppercase\n", c);
	else if (c >= 97 && c <= 122)
		printf("%c is lowercase\n", c);
	else if (c >= 123 && c <= 126)
		printf("%c is a symbol.");
	else
		printf("character is non-printable\n");

	return 0;
}