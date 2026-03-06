// Lab 5.17: Write a program to add two matrices using user defined function. User read() function to read element of matrix, display() element of matrix in matrix form and add() function to add matrices
#include <stdio.h>
void read(int[][5], int, int);
void display(int[][5], int, int);
void add(int[][5], int[][5], int[][5], int, int);
void main()
{
	int a[5][5], b[5][5], s[5][5] = {0}, r1, c1, r2, c2;
	printf("Enter order of Matrix A & Matrix B : ");
	scanf("%dx%d%dx%d", &r1, &c1, &r2, &c2);
	if (r1 != r2 || c1 != c2)
		printf("Matrix addition isn't defined.");
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
		add(a, b, s, r1, c1);
		printf("Matrix A + Matrix B:\n");
		display(s, r1, c1);
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
void add(int a[][5], int b[][5], int s[][5], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			s[i][j] = a[i][j] + b[i][j];
}