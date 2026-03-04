//find profit/loss
#include<stdio.h>
void main()
{
	float cp,sp,r;
	printf("Enter cost price & selling price : ");
	scanf("%f%f",&cp,&sp);
	if(cp>sp)
	{
		r=cp-sp;
		printf("Loss = %.2f",r);
	}
	else
	{
		r=sp-cp;
		printf("Profit = %.2f",r);
	}
}
