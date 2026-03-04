//area of triangle by sides
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("Enter 3 sides : ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nArea of Triangle = %.2f",area);
}