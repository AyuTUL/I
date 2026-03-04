/*
Lab 3.2.18.1: Write a program to display multiplication table up to ‘n’ as:
1 2 3 4 5 6 7 8 9 10
2 4 6 8 10 12 14 16 18 20
3 6 9 12 15 18 21 24 27 30
*/
#include <stdio.h>
void main()
{
	int i, j, n;
	printf("Enter nth term : ");
	scanf("%d", &n);
	printf("Multiplication table upto %d:\n", n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 10; j++)
			printf("%d\t", i * j);
		printf("\n");
	}
}