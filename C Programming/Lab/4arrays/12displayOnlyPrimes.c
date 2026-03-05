// Lab 4.12: Write a program to read N numbers and display only prime numbers
#include <stdio.h>
void main()
{
	int a[100], i, j, n;
	printf("Enter no. of integers : ");
	scanf("%d", &n);
	printf("Enter %d integers : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Prime Numbers :\n");
	for (i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 0 && a[i] > 2) || a[i] <= 1)
			continue;
		for (j = 3; j <= a[i] / 2; j += 2)
			if (a[i] % j == 0)
				break;
		if (j > a[i] / 2)
			printf("%-6d", a[i]);
	}
}