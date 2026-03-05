// Write a program to find 3rd largest integer
#include <stdio.h>
void main()
{
	int a[] = {-23, -124, -0, 234, -234, -3, -5, 5};
	int i, first, second, third;
	int n = sizeof(a) / sizeof(a[0]);
	first = second = third = a[0];
	for (i = 0; i < n; i++)
		if (a[i] > first)
		{
			third = second;
			second = first;
			first = a[i];
		}
		else if (a[i] > second && a[i] != first)
		{
			third = second;
			second = a[i];
		}
		else if (a[i] > third && a[i] != second && a[i] != first)
			third = a[i];
	printf("Third largest number = %d\n", third);
}