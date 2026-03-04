// Lab 1.2: Write a program to compute 𝑏𝑝. Your program should read value of base b and power p from user
#include <stdio.h>
#include <math.h>
void main()
{
	float b, r;
	int p;
	printf("Enter base & power : ");
	scanf("%f%d", &b, &p);
	r = pow(b, p);
	printf("\n%.2f to the power %d = %.2f", b, p, r);
}