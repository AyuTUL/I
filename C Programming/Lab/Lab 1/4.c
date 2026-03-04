//SI and amount
#include<stdio.h>
void main()
{
	float p,t,r,si,a;
	printf("Enter principal, time(Y) and rate : ");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	a=p+si;
	printf("\nSimple Interest = %.2f\nAmount = %.2f",si,a);
}