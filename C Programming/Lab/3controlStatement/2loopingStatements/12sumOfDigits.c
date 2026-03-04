// Lab 3.2.12: Write a program to find the sum of digits of a given number
#include <stdio.h>
void main()
{
	int t, n, i, s = 0, r;
	printf("Enter integer : ");
	scanf("%d", &n);
	t = n;
	while (n != 0)
	{
		r = n % 10;
		s += r;
		n /= 10;
	}
	printf("Sum of Digits of %d = %d", t, s);
}