//display string using user defined function
#include<stdio.h>
void printstr(char *);
void main()
{
	char s[100];
	printf("Enter string : ");
	scanf("%[^\n]",s);
	printstr(s);
	printf("The string is ");
}
void printstr(char *s)
{
	while(*s)
	{
		putchar(*s);
		s++;
	}
}
