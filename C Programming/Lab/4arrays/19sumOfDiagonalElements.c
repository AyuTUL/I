// Lab 4.19: Write a program to find sum of diagonal elements of square matrix
#include <stdio.h>
void main()
{
	int a[5][5], r, c, i, j, sp = 0, ss = 0;
	printf("Enter order of matrix (<5x5) : ");
	scanf("%dx%d", &r, &c);
	if (r != c)
		printf("Diagonals of %dx%d matrix do not exist. Please enter a square matrix.", r, c);
	else
	{
		printf("Enter elements of matrix (=%d) : ", r * c);
		for (i = 0; i < r; i++)
			for (j = 0; j < c; j++)
				scanf("%d", &a[i][j]);
		printf("Matrix :\n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
				printf("%3d", a[i][j]);
			printf("\n");
		}
		for (i = 0; i < r; i++)
			sp += a[i][i];
		for (i = 0; i < r; i++)
			for (j = c - i - 1; j < c - i; j++)
				ss += a[i][j];
		printf("Sum of primary diagonal = %d\nSum of secondary diagonal = %d", sp, ss);
	}
}