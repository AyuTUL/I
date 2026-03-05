// Lab 4.10: Write a program to read N numbers in an array and then increment the elements by constant C, where C is entered by users
#include <stdio.h>
void main()
{
	float a[30], c;
	int i, n;
	printf("Enter no. of numbers : ");
	scanf("%d", &n);
	printf("Enter %d numbers : ", n);
	for (i = 0; i < n; i++)
		scanf("%f", &a[i]);
	printf("Enter increment value : ");
	scanf("%f", &c);
	printf("The numbers after increment by %g :\n", c);
	for (i = 0; i < n; i++)
	{
		a[i] += c;
		printf("%-6g", a[i]);
	}
}