// l Lab 4.3: Write a numbers to find largest and smallest number from set of N numbers entered by users
#include <stdio.h>
void main()
{
	int a[100], n, i, l, s;
	printf("Enter no. of numbers : ");
	scanf("%d", &n);
	printf("Enter %d numbers : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	s = l = a[0];
	for (i = 0; i < n; i++)
	{
		if (s > a[i])
			s = a[i];
		if (l < a[i])
			l = a[i];
	}
	printf("The numbers are :\n");
	for (i = 0; i < n; i++)
		printf("%-4d", a[i]);
	printf("\nSmallest = %d\nLargest= %d", s, l);
}