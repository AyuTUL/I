// Lab 3.2.17: Write a program to display the first ‘n’ terms of Fibonacci series
#include <stdio.h>
void main()
{
	int a = 1, b = 1, c, i, n;
	printf("Enter nth term : ");
	scanf("%d", &n);
	printf("First %d terms of Fibonacci series:\n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d\t", a);
		c = a + b;
		a = b;
		b = c;
	}
}