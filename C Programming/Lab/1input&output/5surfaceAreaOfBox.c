// Lab 1.5: Write a program to find surface area of a box. [S=2(lb+lh+bh)]
#include <stdio.h>
void main()
{
	float l, b, h, sa;
	printf("Enter length, breadth & height : ");
	scanf("%f%f%f", &l, &b, &h);
	sa = 2 * (l * b + b * h + l * h);
	printf("\nSurface area of box = %.2f", sa);
}