//surface area of box
#include<stdio.h>
void main()
{
	float l,b,h,sa;
	printf("Enter length, breadth & height : ");
	scanf("%f%f%f",&l,&b,&h);
	sa=2*(l*b+b*h+l*h);
	printf("\nSurface area of box = %.2f",sa);
}