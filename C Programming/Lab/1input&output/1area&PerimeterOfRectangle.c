// Lab 1.1: Write a C program to find area and perimeter of rectangle
#include <stdio.h>
void main()
{
	float l, b, a, p;
	printf("Enter length & breadth : ");
	scanf("%f%f", &l, &b);
	a = l * b;
	p = 2 * (l + b);
	printf("\nArea = %.2f\nPerimeter = %.2f", a, p);
}