// Lab 5.1.2: WAP to calculate simple interest using function returning values and passing no arguments
#include <stdio.h>
float si();
void main()
{
	float i;
	i = si();
	printf("Simple Interest = %g", i);
}
float si()
{
	float p, t, r;
	printf("Enter principal, rate & time : ");
	scanf("%f%f%f", &p, &r, &t);
	return ((p * t * r) / 100);
}