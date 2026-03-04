// Lab 13.2.19.1: Write a program to find the sum of following series: 1/(1^2) + 1/(3^2) + 1/(5^2) + ... upto 10th terms
#include <stdio.h>
#include <math.h>
void main()
{
	float i;
	float s = 0;
	printf("Sum of 1/(1^2) + 1/(3^2) + 1/(5^2) + ... upto 10th term:\n");
	for (i = 1; i <= 10; i++)
		s += 1 / (pow((2 * i - 1), 2));
	printf("Sum = %.7f", s);
}