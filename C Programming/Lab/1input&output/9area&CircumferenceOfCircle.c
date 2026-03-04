// Lab 1.9: Write a program to find area and circumference of circle using symbolic constant.[𝑎𝑟𝑒𝑎 =𝜋𝑟2 𝑎𝑛𝑑 𝐶𝑖𝑟𝑐𝑢𝑚𝑓𝑒𝑟𝑒𝑛𝑐𝑒 = 2𝜋𝑟]
#include <stdio.h>
#define PI 3.141
void main()
{

	float r, a, c;
	printf("Enter radius : ");
	scanf("%f", &r);
	a = PI * r * r;
	c = 2 * PI * r;
	printf("\nArea = %.2f\nCircumference = %.2f", a, c);
}