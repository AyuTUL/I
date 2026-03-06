// Lab 5.18: Write a program to multiply two matrices using function
#include <stdio.h>
void read(int[][5], int, int);
void display(int[][5], int, int);
void prod(int[][5], int[][5], int[][5], int, int, int);
void main()
{
	int a[5][5], b[5][5], p[5][5] = {0}, r1, c1, r2, c2;
	printf("Enter order of Matrix A & Matrix B : ");
	scanf("%dx%d%dx%d", &r1, &c1, &r2, &c2);
	if (c1 != r2)
		printf("Matrix multiplication isn't defined.");
	else
	{
		printf("Enter elements of Matrix A (=%d) :\n", r1 * c1);
		read(a, r1, c1);
		printf("Enter elements of Matrix B (=%d) :\n", r2 * c2);
		read(b, r2, c2);
		printf("Matrix A:\n");
		display(a, r1, c1);
		printf("Matrix B:\n");
		display(b, r2, c2);
		prod(a, b, p, r1, c1, c2);
		printf("Matrix A x Matrix B:\n");
		display(p, r1, c2);
	}
}
void read(int m[][5], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &m[i][j]);
}
void display(int m[][5], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("%6d ", m[i][j]);
		printf("\n");
	}
}
void prod(int a[][5], int b[][5], int p[][5], int r1, int c1, int c2)
{
	int i, j, k;
	for (i = 0; i < r1; i++)
		for (j = 0; j < c2; j++)
			for (k = 0; k < c1; k++)
				p[i][j] += a[i][k] * b[k][j];
}