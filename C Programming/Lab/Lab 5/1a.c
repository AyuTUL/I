//SI return value passing arguments
#include<stdio.h>
float si(float,float,float);
void main()
{
	float p,t,r,i;
	printf("Enter principal, rate & time : ");
	scanf("%f%f%f",&p,&r,&t);
	i=si(p,t,r);
	printf("Simple Interest = %g",i);
}
float si(float p,float t,float r)
{
	return((p*t*r)/100);
}

