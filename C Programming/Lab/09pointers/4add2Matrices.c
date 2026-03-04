// Lab 9.4: Write a program to add two matrices using DMA and function
#include <stdio.h>
#include <stdlib.h>
void read(int *[], int, int);
void disp(int *[], int, int);
void add(int *[], int *[], int *[], int, int);
void main()
{
	int *a[5], *b[5], *s[5], r1, c1, r2, c2, i;
	printf("Enter order of Matrix A & Matrix B : ");
	scanf("%dx%d%dx%d", &r1, &c1, &r2, &c2);
	if (r1 != r2 || c1 != c2)
	{
		printf("Matrix addition is undefined.");
		exit(0);
	}
	else
	{
		for (i = 0; i < r1; i++)
		{
			a[i] = (int *)malloc(sizeof(int) * c1);
			b[i] = (int *)malloc(sizeof(int) * c2);
			s[i] = (int *)malloc(sizeof(int) * c1);
			if (a[i] == NULL || b[i] == NULL || s[i] == NULL)
			{
				printf("Memory allocation error.");
				exit(0);
			}
		}
		printf("Enter elements of Matrix A (=%d) : ", r1 * c1);
		read(a, r1, c1);
		printf("Enter elements of Matrix B (=%d) : ", r2 * c2);
		read(b, r2, c2);
		printf("Matrix A :\n");
		disp(a, r1, c1);
		printf("Matrix B :\n");
		disp(b, r2, c2);
		printf("Matrix A + Matrix B :\n");
		add(a, b, s, r1, c1);
		disp(s, r1, c1);
		for (i = 0; i < r1; i++)
		{
			free(a[i]);
			free(b[i]);
			free(s[i]);
		}
	}
}
void read(int *m[], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", *(m + i) + j);
}
void disp(int *m[], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("%6d", *(*(m + i) + j));
		printf("\n");
	}
}
void add(int *a[], int *b[], int *s[], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
		{
			*(*(s + i) + j) = 0;
			*(*(s + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
		}
}