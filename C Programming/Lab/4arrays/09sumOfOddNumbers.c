// Lab 4.9: Write a program to read N numbers in an array and find the sum of odd numbers
#include <stdio.h>
void main()
{
	int a[30], i, j, n, s = 0;
	printf("Enter no. of integers : ");
	scanf("%d", &n);
	printf("Enter %d integers : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("The odd numbers are :\n");
	for (i = 0; i < n; i++)
		if (i % 2 != 0)
		{
			printf("%-6d", a[i]);
			s += a[i];
		}
	printf("\nSum of Odd Numbers = %d", s);
}