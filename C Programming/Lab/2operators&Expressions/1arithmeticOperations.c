// Lab 2.1: Write a program to demonstrate the use of arithmetic operation on integers. (find sum, difference, product, quotient, and remainder)
#include <stdio.h>
void main()
{
	int a, b, s, d, p, q, r;
	printf("Enter 2 numbers : ");
	scanf("%d%d", &a, &b);
	s = a + b;
	d = a - b;
	p = a * b;
	q = a / b;
	r = a % b;
	printf("\nSum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nRemainder = %d", s, d, p, q, r);
}