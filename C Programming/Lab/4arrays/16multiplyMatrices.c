/*
Lab 4.16: Write a program to multiply matrices a A and B.
A=[1 5 2  B=[-1 1
   3 4 6]     2 3
			  5 2]
*/
#include <stdio.h>
void main()
{
	int a[2][3] = {1, 5, 2, 3, 4, 6}, b[3][2] = {-1, 1, 2, 3, 5, 2}, p[2][2] = {0}, i, j, k;
	printf("Matrix A :\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("Matrix B :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%3d", b[i][j]);
		printf("\n");
	}
	printf("A x B :\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
				p[i][j] += a[i][k] * b[k][j];
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}
}