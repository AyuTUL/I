// Lab 4.21: Write a program to find reverse of string without using function
#include <stdio.h>
void main()
{
	char s[100], temp;
	int i, l = 0;
	printf("Enter string : ");
	scanf("%[^\n]", s);
	while (s[l] != '\0')
		l++;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
	printf("Reverse = %s", s);
}