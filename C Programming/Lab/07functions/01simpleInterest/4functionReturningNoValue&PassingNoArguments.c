// Lab 7.1.4: WAP to calculate simple interest using function returning no values and passing no arguments
#include <stdio.h>
void si();
void main()
{
	si();
}
void si()
{
	float p, t, r, si;
	printf("Enter principal, rate & time : ");
	scanf("%f%f%f", &p, &r, &t);
	si = (p * t * r) / 100;
	printf("Simple Interest = %g", si);
}