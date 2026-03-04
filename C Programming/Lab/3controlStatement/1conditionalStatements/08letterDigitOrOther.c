// Lab 3.1.8: Write a program to read a character and check whether it is letter, digits or others characters
#include <stdio.h>
void main()
{
	char c;
	printf("Enter character : ");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		printf("%c is letter", c);
	else if (c >= '0' && c <= '9')
		printf("%c is digit", c);
	else
		printf("%c is other character", c);
}