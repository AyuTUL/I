// Lab 3.2.11: Write a program to find the factorial of a given number
#include <stdio.h>
void main()
{
	int n, i, f = 1;
	printf("Enter positive integer : ");
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
		f = f * i;
	printf("Factorial of %d = %d", n, f);
}