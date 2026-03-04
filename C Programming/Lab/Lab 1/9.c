//area & circumference with symbolic constant
#include<stdio.h>
void main()
{
	#define PI 3.141
	float r,a,c;
	printf("Enter radius : ");
	scanf("%f",&r);
	c=2*PI*r;
	a=PI*r*r;
	printf("\nCircumference = %.2f\nArea = %.2f",c,a);
}