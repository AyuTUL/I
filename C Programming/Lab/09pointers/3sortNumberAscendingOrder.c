// Lab 9.3: Write a program to read N numbers using DMA and sort them in ascending order
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n, i, j, *p, temp;
	printf("Enter no. of integers : ");
	scanf("%d", &n);
	p = (int *)malloc(sizeof(int) * n);
	if (p == NULL)
	{
		printf("Memory allocation failed.");
		exit(0);
	}
	for (i = 0; i < n; i++)
		scanf("%d", p + i);
	printf("Ascending Order :\n");
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(p + i) > *(p + j))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%6d", *(p + i));
}