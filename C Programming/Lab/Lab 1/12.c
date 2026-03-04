//tax, allowance & net salary
#include<stdio.h>
void main()
{
	float s,t,a,ns;
	printf("Enter basic salary : ");
	scanf("%f",&s);
	t=0.36*s;
	a=0.25*s;
	ns=s-t+a;
	printf("\nTax= %.2f\nAllowance = %.2f\nNet Salary = %.2f",t,a,ns);
}