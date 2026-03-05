// Lab 4.5: Write a program to read N numbers and sort them in ascending order. (Using Selection sort)
#include <stdio.h>
void main()
{
	int i, j, n, a[30], si, temp;
	printf("Enter no. of numbers (<=30): ");
	scanf("%d", &n);
	printf("Enter %d numbers : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++)
	{
		si = i;
		for (j = i + 1; j < n; j++)
			if (a[si] > a[j])
				si = j;
		if (si != i)
		{
			temp = a[si];
			a[si] = a[i];
			a[i] = temp;
		}
	}
	printf("Ascending Order :\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}