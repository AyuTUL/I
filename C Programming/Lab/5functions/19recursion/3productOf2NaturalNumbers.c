// Lab 5.19.3: WAP to find product of two natural numbers using recursion
#include <stdio.h>
int prod(int, int);
void main()
{
	int a, b, p;
	printf("Enter 2 natural numbers : ");
	scanf("%d%d", &a, &b);
	p = prod(a, b);
	printf("%d x %d = %d", a, b, p);
}
int prod(int a, int b)
{
	if (b == 1)
		return a;
	else
		return (a + prod(a, b - 1));
}