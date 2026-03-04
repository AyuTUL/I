// Lab 7.19.2 : WAP to find sum of first N natural number using recursion
#include <stdio.h>
int sum(int);
void main()
{
	int n, s;
	printf("Enter nth term : ");
	scanf("%d", &n);
	s = sum(n);
	printf("Sum of first %d natural numbers = %d", n, s);
}
int sum(int n)
{
	if (n == 0)
		return 0;
	else
		return (n + sum(n - 1));
}