// Lab 7.19.1: WAP to find factorial of number using recursion
#include <stdio.h>
int fact(int);
void main()
{
	int n, f;
	printf("Enter integer : ");
	scanf("%d", &n);
	if (n < 0)
		printf("Factorial of negative number doesn't exist.");
	else
	{
		f = fact(n);
		printf("%d! = %d", n, f);
	}
}
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return (n * fact(n - 1));
}