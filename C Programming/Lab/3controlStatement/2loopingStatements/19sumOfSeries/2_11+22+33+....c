// Lab 13.2.19.2: Write a program to find the sum of following series: 11 + 22 + 33 + ... upto nth terms
#include <stdio.h>
void main()
{
	int s = 0, i, n;
	printf("Enter nth term : ");
	scanf("%d", &n);
	printf("Sum of 11 + 22 + 33 + ... upto %dth term :\n", n);
	for (i = 1; i <= n; i++)
		s += i * 10 + i;
	printf("Sum = %d", s);
}