// Lab 4.23: Write a program to concatenate string without using function
#include <stdio.h>
void main()
{
	char s1[100], s2[100];
	int i, l = 0;
	printf("Enter 1st string  : ");
	gets(s1);
	printf("Enter 2nd string  : ");
	gets(s2);
	while (s1[l] != '\0')
		l++;
	for (i = 0; s2[i] != '\0'; i++)
		s1[l + i] = s2[i];
	s1[l + i] = '\0';
	printf("Concatenated string = %s", s1);
}