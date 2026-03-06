// Lab 5.15 : WAP to find smallest of N numbers using function
#include <stdio.h>
int small(int[], int);
void main()
{
	int a[100], n, i, s;
	printf("Enter no. of integers : ");
	scanf("%d", &n);
	printf("Enter %d integers : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	s = small(a, n);
	printf("Smallest = %d", s);
}
int small(int a[], int n)
{
	int i, s, t;
	s = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < s)
			s = a[i];
	return (s);
}