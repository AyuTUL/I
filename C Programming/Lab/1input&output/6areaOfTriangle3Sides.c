// Lab 1.6: Write a program to find area of a triangle by reading its three sides. [𝑎𝑟𝑒𝑎 =√𝑆(𝑠 − 𝑎)(𝑠 − 𝑏)(𝑠 − 𝑐), where a, b, c are valid sides of triangle and S is its semi-perimeter]
#include <stdio.h>
#include <math.h>
void main()
{
	float a, b, c, s, area;
	printf("Enter 3 sides : ");
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("\nArea of Triangle = %.2f", area);
}