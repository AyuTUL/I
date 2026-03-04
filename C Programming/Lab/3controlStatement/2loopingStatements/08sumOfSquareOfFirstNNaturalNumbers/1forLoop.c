// Lab 3.2.8.1: Write a program to find the sum of square of first ‘n’ natural numbers using for loop
#include <stdio.h>
void main()
{
	int n, i, s = 0;
	printf("Enter nth term : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		s = s + i * i;
	printf("Sum of square of first %d natural numbers = %d", n, s);
}