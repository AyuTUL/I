//SI return no value passing arguments
#include<stdio.h>
void si(float,float,float);
void main()
{
	float p,t,r;
	printf("Enter principal, rate, time : ");
	scanf("%f%f%f",&p,&r,&t);
	si(p,t,r);
	
}
void si(float p, float t, float r)
{
	float i;
	i=(p*t*r)/100;
	printf("Simple Interest = %g",i);
}
