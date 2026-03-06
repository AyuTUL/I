// Lab 5.14: WAP to find largest of N numbers using function
#include <stdio.h>
int big(int[], int);
void main()
{
	int a[100], n, i, l;
	printf("Enter no. of integers : ");
	scanf("%d", &n);
	printf("Enter %d integers : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	l = big(a, n);
	printf("Largest = %d", l);
}
int big(int a[], int n)
{
	int i, l;
	l = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > l)
			l = a[i];
	return (l);
}