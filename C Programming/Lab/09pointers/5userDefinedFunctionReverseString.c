// Lab 9.5: Write a program to reverse a string using user defined function. (do not use string.h)
#include <stdio.h>
void rev(char *);
void main()
{
	char s[100];
	printf("Enter string : ");
	scanf("%[^\n]", s);
	rev(s);
	printf("Reverse = %s", s);
}
void rev(char *s)
{
	int l = 0, i;
	char temp;
	while (*(s + l) != '\0')
		l++;
	for (i = 0; i < l / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + l - 1 - i);
		*(s + l - 1 - i) = temp;
	}
}