// Lab 1.3: Write a program to compute floor and ceiling value of a real number
#include <stdio.h>
#include <math.h>
void main()
{
	float n;
	int f, c;
	printf("Enter number : ");
	scanf("%f", &n);
	f = floor(n);
	c = ceil(n);
	printf("\nFloor value of %.2f = %d", n, f);
	printf("\nCeiling value of %.2f = %d", n, c);
}