/*
Lab 3.2.18.4: Write a program to display the following output:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include <stdio.h>
void main()
{
	int i, j;
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}
}