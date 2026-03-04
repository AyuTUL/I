// Lab 3.2.8.2: Write a program to find the sum of square of first ‘n’ natural numbers using while loop
#include <stdio.h>
void main()
{
	int n, i = 1, s = 0;
	printf("Enter nth term : ");
	scanf("%d", &n);
	while (i <= n)
	{
		s += i * i;
		i++;
	}
	printf("Sum of square of first %d natural numbers = %d", n, s);
}