// Lab 4.28: Write a program to count numbers of words from line of text
#include <stdio.h>
void main()
{
	char line[100], prev = ' ';
	int i = 0, spaces = 0;
	printf("Enter line of text : ");
	scanf("%[^\n]", line);
	for (i = 0; line[i] != '\0'; i++)
	{
		if ((line[i] == ' ') && (prev != ' '))
			spaces++;
		prev = line[i];
	}
	printf("No. of words = %d", spaces + 1);
}