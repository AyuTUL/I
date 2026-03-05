// Lab 4.31: Write a program to sort {aman, akesh, anish, anam, anil, anju} in alphabetical order
#include <stdio.h>
#include <string.h>
void main()
{
	char n[6][5] = {"aman", "akesh", "anish", "anam", "anil", "anju"}, temp[4] = {0};
	int i, j, a = 6;
	for (i = 0; i < a - 1; i++)
		for (j = i + 1; j < a; j++)
			if (strcmp(n[i], n[j]) > 0)
			{
				strcpy(temp, n[i]);
				strcpy(n[i], n[j]);
				strcpy(n[j], temp);
			}
	printf("Names in Alphabetical Order :\n");
	for (i = 0; i < a; i++)
		printf("%s\n", n[i]);
}