// Lab 4.24: Write a program to check whether a word is palindrome or not
#include <stdio.h>
void main()
{
	char s[100];
	int i, l = 0;
	printf("Enter string : ");
	scanf("%[^\n]", s);
	while (s[l] != '\0')
		l++;
	for (i = 0; i < l / 2; i++)
		if (s[i] != s[l - i - 1])
			break;
	if (i < l / 2)
		printf("%s is not palindrome", s);
	else
		printf("%s is palindrome", s);
}