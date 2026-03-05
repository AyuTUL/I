// Lab 5.5: Write a program to find factorial of number using function
#include <stdio.h>
int fac(int);
void main()
{
	int n, f;
	printf("Enter integer : ");
	scanf("%d", &n);
	if (n < 0)
		printf("Negative number has no factorial value. Try again.");
	else
	{
		f = fac(n);
		printf("Factorial of %d = %d", n, f);
	}
}

int fac(int n)
{
	int i, f = 1;
	for (i = n; i > 1; i--)
		f *= i;
	return (f);
}