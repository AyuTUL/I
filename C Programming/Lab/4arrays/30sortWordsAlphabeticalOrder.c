// Lab 4.30: Write a program to read N words and sort them in alphabetical order
#include <stdio.h>
#include <string.h>
void main()
{
	int j, n, i;
	char word[10][20], temp[20];
	printf("Enter no. of words (<=10) : ");
	scanf("%d", &n);
	printf("Enter %d words\n", n);
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		gets(word[i]);
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (strcmp(word[i], word[j]) > 0)
			{
				strcpy(temp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], temp);
			}
	printf("Words in Alphabetical Order:\n");
	for (i = 0; i < n; i++)
		printf("%s\n", word[i]);
}