// Lab 5.2: WAP to find surface area of box using function
#include <stdio.h>
float area(float, float, float);
void main()
{
	float l, b, h, s;
	printf("Enter length, breadth & height of box : ");
	scanf("%f%f%f", &l, &b, &h);
	s = area(l, b, h);
	printf("Surface area of box = %g", s);
}
float area(float l, float b, float h)
{
	return (2 * (l * b + b * h + l * h));
}