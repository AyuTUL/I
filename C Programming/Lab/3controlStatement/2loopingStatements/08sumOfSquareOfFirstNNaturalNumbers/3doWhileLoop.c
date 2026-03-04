// Lab 3.2.8.3: Write a program to find the sum of square of first ‘n’ natural numbers using do-while loop
#include <stdio.h>
void main()
{
	int n, i = 1, s = 0;
	printf("Enter nth term : ");
	scanf("%d", &n);
	do
	{
		s += i * i;
		i++;
	} while (i <= n);
	printf("Sum of square of first %d natural numbers = %d", n, s);
}