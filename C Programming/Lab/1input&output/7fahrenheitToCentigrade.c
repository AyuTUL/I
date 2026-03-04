// Lab 1.7: Write a program to read temperature in Fahrenheit and convert it into centigrade
#include <stdio.h>
void main()
{
	float f, c;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f", &f);
	c = (5 * (f - 32)) / 9;
	printf("\nTemperature in Centigrade : %.2f", c);
}