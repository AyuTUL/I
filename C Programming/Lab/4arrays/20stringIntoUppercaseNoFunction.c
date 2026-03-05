// Lab 4.20: Write a program to convert string into upper case without using function
#include <stdio.h>
void main()
{
	char s[100];
	int i;
	printf("Enter string : ");
	scanf("%[^\n]", s);
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	printf("Uppercase = %s", s);
}