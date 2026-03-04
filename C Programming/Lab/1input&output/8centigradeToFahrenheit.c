// Lab 1.8: Write a program to read temperature in centigrade and convert it into Fahrenheit
#include <stdio.h>
void main()
{
	float c, f;
	printf("Enter temperature in Centigrade : ");
	scanf("%f", &c);
	f = ((9 * c) / 5) + 32;
	printf("Temperature in Fahrenheit = %.2f", f);
}