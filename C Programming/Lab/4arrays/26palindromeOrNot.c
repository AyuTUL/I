// Lab 4.26: Write a program to check whether a word is palindrome or not using function
#include <stdio.h>
#include <string.h>
void main()
{
	char w[100], temp[100];
	printf("Enter word : ");
	gets(w);
	strcpy(temp, w);
	strrev(w);
	if (strcmp(w, temp) == 0)
		printf("%s is palindrome", temp);
	else
		printf("%s is not palindrome", temp);
}